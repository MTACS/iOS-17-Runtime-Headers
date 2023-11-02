
@interface BWCameraAppLaunchAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    int  _devicePosition;
    bool  _isPrewarmed;
    int  _launchDuration;
    NSString * _launchMode;
    int  _memoryStatusLevel;
    NSString * _prewarmReason;
    int  _thermalLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int devicePosition;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPrewarmed;
@property (nonatomic) int launchDuration;
@property (nonatomic, copy) NSString *launchMode;
@property (nonatomic) int memoryStatusLevel;
@property (nonatomic, copy) NSString *prewarmReason;
@property (readonly) Class superclass;
@property (nonatomic) int thermalLevel;

- (void)dealloc;
- (int)devicePosition;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (bool)isPrewarmed;
- (int)launchDuration;
- (id)launchMode;
- (int)memoryStatusLevel;
- (id)prewarmReason;
- (void)reset;
- (void)setDevicePosition:(int)arg1;
- (void)setIsPrewarmed:(bool)arg1;
- (void)setLaunchDuration:(int)arg1;
- (void)setLaunchMode:(id)arg1;
- (void)setMemoryStatusLevel:(int)arg1;
- (void)setPrewarmReason:(id)arg1;
- (void)setThermalLevel:(int)arg1;
- (int)thermalLevel;

@end
