
@interface AVVCRecordDeviceInfo : NSObject {
    bool  _isRemoteDevice;
    bool  _isUpsamplingSourceAudio;
    NSString * _recordRoute;
    unsigned int  _remoteDeviceCategory;
    NSUUID * _remoteDeviceUID;
    NSString * _remoteDeviceUIDString;
    NSString * _remoteProductIdentifier;
}

@property (readonly) bool isRemoteDevice;
@property (nonatomic, readonly) bool isUpsamplingSourceAudio;
@property (nonatomic, readonly) NSString *recordRoute;
@property (nonatomic, readonly) unsigned int remoteDeviceCategory;
@property (nonatomic, readonly) NSUUID *remoteDeviceUID;
@property (nonatomic, readonly) NSString *remoteDeviceUIDString;
@property (nonatomic, readonly) NSString *remoteProductIdentifier;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRecordingEngine:(struct shared_ptr<AVVCRecordingEngine> { struct AVVCRecordingEngine {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)isRemoteDevice;
- (bool)isUpsamplingSourceAudio;
- (id)recordRoute;
- (unsigned int)remoteDeviceCategory;
- (id)remoteDeviceUID;
- (id)remoteDeviceUIDString;
- (id)remoteProductIdentifier;

@end
