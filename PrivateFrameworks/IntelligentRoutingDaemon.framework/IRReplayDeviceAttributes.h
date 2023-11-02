
@interface IRReplayDeviceAttributes : NSObject {
    NSString * _deviceId;
    NSString * _deviceName;
    NSString * _modelId;
}

@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSString *modelId;

- (void).cxx_destruct;
- (id)deviceId;
- (id)deviceName;
- (id)modelId;
- (void)setDeviceId:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setModelId:(id)arg1;

@end
