
@interface BWCameraLockScreenLaunchAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    bool  _completed;
    bool  _ispStreamingStarted;
    int  _launchError;
    bool  _prewarmed;
}

@property (nonatomic) bool completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ispStreamingStarted;
@property (nonatomic) int launchError;
@property (nonatomic) bool prewarmed;
@property (readonly) Class superclass;

- (bool)completed;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (bool)ispStreamingStarted;
- (int)launchError;
- (bool)prewarmed;
- (void)reset;
- (void)setCompleted:(bool)arg1;
- (void)setIspStreamingStarted:(bool)arg1;
- (void)setLaunchError:(int)arg1;
- (void)setPrewarmed:(bool)arg1;

@end
