/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Oct  8 17:01:13 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[180] = {
  0x379fffffbe9U, 0x305fffffb8eU, 0x958000003f5U, 0x3e600000484U,
  0x2c4fffffab3U, 0x8888099d813b0570U, 0x57b0000034cU, 0x3936361205062617U,
  0x13e1bdae99c0ec23U, 0x192323403f5235U, 0x2205e3b681909eceU, 0x9ede1626243b5246U,
  0x2a312206e4ca8eadU, 0xc7bccb0018131216U, 0x1615050c0127fee4U, 0x150aea01f6020cfaU,
  0x90b0802f30908f3U, 0xc0b0b1a06f002f3U, 0xbd6e9eac3f4e912U, 0xe2ebfe272e4e491aU,
  0x4f5633e2c981a9bdU, 0xa694bfef171b1e3fU, 0x575234212817eab6U, 0x806c8a8a3b8f727U,
  0xcecde407202a2c1bU, 0xe2f20c282f10f8f4U, 0x8111bec0af0fce9U, 0x19f4e818150110f2U,
  0x1508050615f0f7f9U, 0xf7fdf80efc1c03f9U, 0xf30e21081b0b06ecU, 0x1b11f5e3f9b5c1eaU,
  0x9db19ec6fe2b3f36U, 0x394b374e433bfdc3U, 0x28eeb38187aae015U, 0xc6f0172635466e60U,
  0x4d7e4d14db8e8491U, 0xdfc0c0ef100b142eU, 0xf0fdf62b191defU, 0xfffffd7efffffd7cU,
  0xf8f70400fffffd7eU, 0xf8ecfafa07ecf305U, 0xf9f0f305e8f80af0U, 0xf1ececfbfbedf8fdU,
  0xf30102e7ebfb00U, 0xe3f0f6f2f404ecefU, 0xe3f900e3ee03fb03U, 0xe9020bfc05f1f2fbU,
  0xfd04f9ff06f0faf7U, 0x102ebf8f0eef9fdU, 0xf9fd05ff00f6f9ffU, 0x2f0f8f0f202f7ecU,
  0xf1ffec0305f7faU, 0xe6eefd06fdf7faU, 0x15050f0119ff04faU, 0x8fa1c1a1220fc03U,
  0x80e2112180f1b05U, 0xf70f11170af9fff9U, 0xfbf40f0216150513U, 0xfd060e1017f6040eU,
  0xf709f11012f9032cU, 0xf60902f40520070dU, 0x70e311019f9081fU, 0x1dfafcfe0d0308fcU,
  0x1f1204f92b101004U, 0x1f17100e1c13fb0aU, 0x12fc1c10181afffdU, 0x8151207081a00fdU,
  0xf0f60004f8e61c10U, 0xe4fcf3ffe9e2fdffU, 0xebf004f6eae1fdfbU, 0xfd05f8fcf1ece6edU,
  0x2f6fdfce7f6efefU, 0xf2ff01e7f601f5f7U, 0xf0f401f502f4f7f7U, 0xfe020bfceff0faedU,
  0xe802fbe4edf308U, 0xcebe9ebf6ecf608U, 0x4e305ebe504f8e2U, 0xfe0aeaf9fe02fdeaU,
  0x4efe603f5f5f8f8U, 0xe5f9fc03ed06eef8U, 0x9020a0a03fafef6U, 0xf5eae5d8e5e5ea05U,
  0x60b11171c0900f4U, 0x1eed3d6d9d0def3U, 0xf00814110d181207U, 0xf8f3e9c4beb7dbdcU,
  0x5151d26221e2114U, 0xd6b5b7a495a9defdU, 0x231b26182217f9f8U, 0xc7bed7cae9fffb11U,
  0xd0a0cfff4f4e0d5U, 0xe4ebedfe0a001216U, 0xfefd00f6faf4ebe6U, 0xfe0302010705fe03U,
  0xcecbf4fa03080811U, 0x2b1a0714efd4e0bcU, 0xa8d4c1f0111a271eU, 0x132416f8efd79ba8U,
  0xf5eaf1f6040d0d17U, 0xf4ff0a0503ff06ebU, 0x70c05dbe3dfebecU, 0xe1f4050d1f1b1716U,
  0xf4ecdac7bec0ceddU, 0xe0e191b1e270a12U, 0xd8c8d5d9cde9e7f7U, 0x15111302f7f4eedcU,
  0xfbf9000f0f171f27U, 0x9fef8f8e5dbd4deU, 0x50e000b0a0e09edU, 0x50e0c0c1c0a1c09U,
  0x1814101003130f0cU, 0x21b1908f70c0b0cU, 0x803fe05f8ff1a1bU, 0x913231117051a13U,
  0xbfb1404fb06121fU, 0xb211a0a16161403U, 0x60d09fafc212c12U, 0x71307fe0f26fdU,
  0x91301f30c0c1f0dU, 0x161414081208fa0bU, 0x82216091cfc030eU, 0xe3e51e131c131604U,
  0x14190d1009f9f6eeU, 0xbeafb0cde6f0020eU, 0x1a201b0d16f8dcd3U, 0xd9d4eaddf9091511U,
  0x304060bf9edf2e2U, 0xfffffefd04fd0301U, 0xf90206fffe070906U, 0xe7fdf6f9f3f1f903U,
  0x61108f5f8ebeef4U, 0xc1dd000a0c151c10U, 0x1b0204ecb3b090b3U, 0xe9ddf91213231e24U,
  0x807f5eae1b4c4c9U, 0xf0faf3feff100c03U, 0x501fc02f3f4f2f3U, 0xeeedf80106070f09U,
  0x2060bfbf1f6f6f7U, 0xfbedf402f5060a12U, 0x150d0d0707f4ebe7U, 0xd4f6ef010b10190dU,
  0xf2f0ebd3c6c1bcbbU, 0x1f1a20251b1c1b0cU, 0x9f948681b6bee60eU, 0x272b2d0d12ecbdc9U,
  0xabcde8f809131b21U, 0x500fcf6d7dbc6a9U, 0x207fb0700020505U, 0x6f2e5ef0306feffU,
  0xf104fef2f1eef6f2U, 0x20905e8e500eefcU, 0x1fb0404f9f8e402U, 0xf7ee0305f60607f4U,
  0xe5eefbffe5f3e5f5U, 0x602fbfe02ffebfaU, 0xe8e403f2f5ebe4f9U, 0xf7f1ed0cebf5f3e2U,
  0xf1eaf6f7f2f9f5e9U, 0xfb04f60007fce9f4U, 0xfff4e90006ece4e4U, 0x1f9e4f3eceafc01U,
  0xeffa02fbe8eefa04U, 0x1619f80d11eefcecU, 0x7040601fdfc03f8U, 0x12020f00030c0706U,
  0x51cff1905fb0c02U, 0xf7f30f0e0c1af51cU, 0x1e80af4020cfc00U, 0x5f2f9f713162015U,
  0x170003f906f20bfcU, 0x10160c001c031601U, 0x160b10fc06fce408U, 0xff0e13fb03270bf5U,
  0xff0a1105f620110cU, 0xfa010d1306090029U, 0x915f91703fd1401U, 0x202U,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

