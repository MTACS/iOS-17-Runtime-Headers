
@interface AVCaptureDeviceDiscoverySession : NSObject {
    NSArray * _deviceTypes;
    NSArray * _devices;
    NSString * _mediaType;
    long long  _position;
    NSArray * _supportedMultiCamDeviceSets;
}

@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) NSArray *supportedMultiCamDeviceSets;

+ (id)allAudioDeviceTypes;
+ (id)allAudioDevices;
+ (id)allDeviceTypes;
+ (id)allDevices;
+ (id)allMetadataCameraDeviceTypes;
+ (id)allMetadataCameraDevices;
+ (id)allPointCloudDeviceTypes;
+ (id)allPointCloudDevices;
+ (id)allSupportedMultiCamDeviceSets;
+ (id)allVideoDeviceTypes;
+ (id)allVideoDevices;
+ (id)allVirtualDeviceTypes;
+ (id)allVirtualDevices;
+ (id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3;
+ (void)initialize;

- (void)_handleDeviceConnectedDisconnectedNotification:(id)arg1;
- (id)_initWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 allowIOSMacEnvironment:(bool)arg4 prefersUnsuspendedAndAllowsAnyPosition:(bool)arg5;
- (void)dealloc;
- (id)description;
- (id)devices;
- (id)init;
- (id)supportedMultiCamDeviceSets;

@end
