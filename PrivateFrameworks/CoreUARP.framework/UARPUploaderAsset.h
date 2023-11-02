
@interface UARPUploaderAsset : NSObject {
    UARPAsset * _asset;
    unsigned long long  _assetLength;
    UARPAssetVersion * _assetVersion;
    unsigned long long  _formatVersion;
    bool  _internalSolicit;
    bool  _invalidHwRevision;
    NSObject<OS_os_log> * _log;
    unsigned long long  _numPayloads;
    UARPUploaderEndpoint * _remoteEndpoint;
    unsigned long long  _selectedPayload;
    struct uarpPlatformAsset { struct UARPSuperBinaryHeader { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; struct UARPVersion { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; } x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; } x1; unsigned short x2; unsigned short x3; struct UARP4ccTag { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; } x4; struct UARPVersion { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; } x5; unsigned int x6; struct uarpAssetCoreObj { unsigned short x_7_1_1; unsigned short x_7_1_2; struct UARP4ccTag { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_7_1_3; struct UARPVersion { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; } x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; unsigned short x_7_1_7; } x7; unsigned char x8; unsigned char x9; } * _uarpAsset;
    struct uarpPlatformAssetCallbacks { 
        int (*fAssetReady)(); 
        int (*fAssetMetaDataTLV)(); 
        int (*fAssetMetaDataComplete)(); 
        int (*fAssetMetaDataProcessingError)(); 
        int (*fPayloadReady)(); 
        int (*fPayloadMetaDataTLV)(); 
        int (*fPayloadMetaDataComplete)(); 
        int (*fPayloadMetaDataProcessingError)(); 
        int (*fPayloadData)(); 
        int (*fPayloadDataComplete)(); 
        int (*fPayloadDataComplete2)(); 
        int (*fAssetGetBytesAtOffset2)(); 
        int (*fAssetSetBytesAtOffset2)(); 
        int (*fAssetRescinded)(); 
        int (*fAssetRescindedAck)(); 
        int (*fAssetCorrupt)(); 
        int (*fAssetOrphaned)(); 
        int (*fAssetReleased2)(); 
        int (*fAssetProcessingNotification2)(); 
        int (*fAssetProcessingNotificationAck)(); 
        int (*fAssetPreProcessingNotification)(); 
        int (*fAssetPreProcessingNotificationAck)(); 
        int (*fAssetAllHeadersAndMetaDataComplete)(); 
        int (*fAssetStore)(); 
        int (*fAssetGetBytesAtOffset)(); 
        int (*fAssetSetBytesAtOffset)(); 
        int (*fAssetReleased)(); 
        int (*fAssetProcessingNotification)(); 
    }  _uarpCallbacks;
    UARPSuperBinaryAsset * _uarpSuperBinary;
}

@property (readonly) UARPAsset *asset;
@property unsigned long long assetLength;
@property (retain) UARPAssetVersion *assetVersion;
@property unsigned long long formatVersion;
@property (readonly) bool internalSolicit;
@property (readonly) bool invalidHwRevision;
@property unsigned long long numPayloads;
@property (readonly) UARPUploaderEndpoint *remoteEndpoint;
@property unsigned long long selectedPayload;
@property (readonly) struct uarpPlatformAsset { struct UARPSuperBinaryHeader { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; struct UARPVersion { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; } x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; } x1; unsigned short x2; unsigned short x3; struct UARP4ccTag { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; } x4; struct UARPVersion { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; } x5; unsigned int x6; struct uarpAssetCoreObj { unsigned short x_7_1_1; unsigned short x_7_1_2; struct UARP4ccTag { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_7_1_3; struct UARPVersion { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; } x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; unsigned short x_7_1_7; } x7; unsigned char x8; unsigned char x9; }*uarpAsset;
@property (readonly) struct uarpPlatformAssetCallbacks { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); int (*x28)(); }*uarpCallbacks;
@property (retain) UARPSuperBinaryAsset *uarpSuperBinary;

- (void).cxx_destruct;
- (id)asset;
- (unsigned long long)assetLength;
- (id)assetVersion;
- (unsigned long long)formatVersion;
- (id)initWithUARPAsset:(id)arg1 remoteEndpoint:(id)arg2 callbacks:(struct uarpPlatformAssetCallbacks { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); int (*x28)(); }*)arg3 internalSolicit:(bool)arg4;
- (bool)internalSolicit;
- (bool)invalidHwRevision;
- (unsigned long long)numPayloads;
- (void)processHostTLVs;
- (id)remoteEndpoint;
- (unsigned long long)selectedPayload;
- (void)setAssetLength:(unsigned long long)arg1;
- (void)setAssetVersion:(id)arg1;
- (void)setFormatVersion:(unsigned long long)arg1;
- (void)setNumPayloads:(unsigned long long)arg1;
- (void)setSelectedPayload:(unsigned long long)arg1;
- (void)setUarpPlatformAsset:(struct uarpPlatformAsset { struct UARPSuperBinaryHeader { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; struct UARPVersion { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; } x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; } x1; unsigned short x2; unsigned short x3; struct UARP4ccTag { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; } x4; struct UARPVersion { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; } x5; unsigned int x6; struct uarpAssetCoreObj { unsigned short x_7_1_1; unsigned short x_7_1_2; struct UARP4ccTag { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_7_1_3; struct UARPVersion { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; } x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; unsigned short x_7_1_7; } x7; unsigned char x8; unsigned char x9; }*)arg1;
- (void)setUarpSuperBinary:(id)arg1;
- (struct uarpPlatformAsset { struct UARPSuperBinaryHeader { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; struct UARPVersion { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; } x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; } x1; unsigned short x2; unsigned short x3; struct UARP4ccTag { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; } x4; struct UARPVersion { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; } x5; unsigned int x6; struct uarpAssetCoreObj { unsigned short x_7_1_1; unsigned short x_7_1_2; struct UARP4ccTag { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_7_1_3; struct UARPVersion { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; } x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; unsigned short x_7_1_7; } x7; unsigned char x8; unsigned char x9; }*)uarpAsset;
- (struct uarpPlatformAssetCallbacks { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); int (*x28)(); }*)uarpCallbacks;
- (id)uarpSuperBinary;

@end
