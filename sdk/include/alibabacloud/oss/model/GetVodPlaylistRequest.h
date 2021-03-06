/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include <alibabacloud/oss/Export.h>
#include <alibabacloud/oss/OssRequest.h>
#include <alibabacloud/oss/Types.h>
#include <alibabacloud/oss/model/ObjectMetaData.h>
#include <alibabacloud/oss/http/HttpType.h>

namespace AlibabaCloud
{
namespace OSS
{
    class ALIBABACLOUD_OSS_EXPORT GetVodPlaylistRequest : public LiveChannelRequest
    {
    public:
        GetVodPlaylistRequest(const std::string& bucket, 
            const std::string& channelName);

        GetVodPlaylistRequest(const std::string& bucket, 
            const std::string& channelName, uint64_t startTime, 
            uint64_t endTime);

        void setStartTime(uint64_t startTime);
        void setEndTime(uint64_t endTime);
    protected:
        virtual ParameterCollection specialParameters() const;
        virtual int validate() const;
    private:
        uint64_t startTime_;
        uint64_t endTime_;
    };
} 
}
