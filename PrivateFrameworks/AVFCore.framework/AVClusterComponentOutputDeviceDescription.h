
@interface AVClusterComponentOutputDeviceDescription : NSObject <AVOutputDeviceDescription> {
    NSString * _deviceID;
    NSString * _deviceName;
    long long  _deviceSubType;
    long long  _deviceType;
    bool  _isClusterLeader;
    NSString * _modelID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) long long deviceSubType;
@property (nonatomic, readonly) long long deviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isClusterLeader;
@property (nonatomic, readonly) NSString *modelID;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)deviceID;
- (id)deviceName;
- (long long)deviceSubType;
- (long long)deviceType;
- (id)initWithDeviceID:(id)arg1 deviceName:(id)arg2 deviceSubType:(long long)arg3 isClusterLeader:(bool)arg4 modelID:(id)arg5;
- (bool)isClusterLeader;
- (id)modelID;

@end
