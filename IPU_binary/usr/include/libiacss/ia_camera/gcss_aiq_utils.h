/*
 * INTEL CONFIDENTIAL
 * Copyright (c) 2017 Intel Corporation. All Rights Reserved.
 *
 * The source code contained or described herein and all documents related to
 * the source code ("Material") are owned by Intel Corporation or its suppliers
 * or licensors. Title to the Material remains with Intel Corporation or its
 * suppliers and licensors. The Material contains trade secrets and proprietary
 * and confidential information of Intel or its suppliers and licensors. The
 * Material is protected by worldwide copyright and trade secret laws and
 * treaty provisions. No part of the Material may be used, copied, reproduced,
 * modified, published, uploaded, posted, transmitted, distributed, or
 * disclosed in any way without Intel's prior express written permission.
 *
 * No license under any patent, copyright, trade secret or other intellectual
 * property right is granted to or conferred upon you by disclosure or delivery
 * of the Materials, either expressly, by implication, inducement, estoppel or
 * otherwise. Any license under such intellectual property rights must be
 * express and approved by Intel in writing.
 */

#ifndef IA_CAMERA_GCSS_GCSS_AIQ_UTILS_H_
#define IA_CAMERA_GCSS_GCSS_AIQ_UTILS_H_

#include <gcss.h>
#include <ia_aiq_types.h>
#include <memory>

namespace GCSS {

namespace GraphAiqUtil {

css_err_t getPortFrameParams(ia_aiq_frame_params &frameParams,
                             std::shared_ptr<const IGraphConfig> settings,
                             const std::string &portName);

css_err_t getSensorFrameParams(ia_aiq_frame_params &frameParams,
                               std::shared_ptr<const IGraphConfig> settings);

} // namespace GraphAiqUtil
} // namespace GCSS



#endif /* IA_CAMERA_GCSS_GCSS_AIQ_UTILS_H_ */
