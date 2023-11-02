
@interface SFPairedUnlockWatchEvent : NSObject <SFCoreAnalyticsEvent> {
    unsigned int  _motionCheckDurationMs;
    long long  _onWristConfidence;
    float  _timeSinceBootMin;
    float  _timeSinceLastOnWristSec;
    float  _timeSinceLastWristRaiseSec;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int motionCheckDurationMs;
@property (nonatomic) long long onWristConfidence;
@property (readonly) Class superclass;
@property (nonatomic) float timeSinceBootMin;
@property (nonatomic) float timeSinceLastOnWristSec;
@property (nonatomic) float timeSinceLastWristRaiseSec;

+ (id)eventName;

- (id)eventPayload;
- (unsigned int)motionCheckDurationMs;
- (long long)onWristConfidence;
- (void)setMotionCheckDurationMs:(unsigned int)arg1;
- (void)setOnWristConfidence:(long long)arg1;
- (void)setTimeSinceBootMin:(float)arg1;
- (void)setTimeSinceLastOnWristSec:(float)arg1;
- (void)setTimeSinceLastWristRaiseSec:(float)arg1;
- (void)submitEvent;
- (float)timeSinceBootMin;
- (float)timeSinceLastOnWristSec;
- (float)timeSinceLastWristRaiseSec;

@end
