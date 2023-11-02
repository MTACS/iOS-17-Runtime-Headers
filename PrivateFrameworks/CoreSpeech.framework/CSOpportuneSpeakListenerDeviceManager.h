
@interface CSOpportuneSpeakListenerDeviceManager : NSObject {
    NSString * _deviceId;
}

@property (nonatomic, copy) NSString *deviceId;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)deviceId;
- (void)setDeviceId:(id)arg1;

@end
