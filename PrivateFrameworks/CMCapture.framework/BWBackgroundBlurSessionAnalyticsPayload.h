
@interface BWBackgroundBlurSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    double  _averageProcessingTime;
    NSString * _clientApplicationID;
    long long  _effectQuality;
    double  _maxProcessingTime;
    int  _maxThermalSystemPressureLevel;
    int  _numberOfFrameDrops;
    long long  _numberOfFrames;
}

@property (nonatomic) double averageProcessingTime;
@property (nonatomic, copy) NSString *clientApplicationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long effectQuality;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxProcessingTime;
@property (nonatomic) int maxThermalSystemPressureLevel;
@property (nonatomic) int numberOfFrameDrops;
@property (nonatomic) long long numberOfFrames;
@property (readonly) Class superclass;

- (double)averageProcessingTime;
- (id)clientApplicationID;
- (void)dealloc;
- (long long)effectQuality;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (double)maxProcessingTime;
- (int)maxThermalSystemPressureLevel;
- (int)numberOfFrameDrops;
- (long long)numberOfFrames;
- (void)reset;
- (void)setAverageProcessingTime:(double)arg1;
- (void)setClientApplicationID:(id)arg1;
- (void)setEffectQuality:(long long)arg1;
- (void)setMaxProcessingTime:(double)arg1;
- (void)setMaxThermalSystemPressureLevel:(int)arg1;
- (void)setNumberOfFrameDrops:(int)arg1;
- (void)setNumberOfFrames:(long long)arg1;

@end
