
@interface CBAmmolitePolicy : NSObject <CBChromaticCorrectionPolicy> {
    CBChromaticCorrectionParams * _params;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CBChromaticCorrectionParams *params;
@property (readonly) Class superclass;

- (float)cappedRampStartLux:(float)arg1;
- (float)cappedRampTargetLux:(float)arg1;
- (void)dealloc;
- (id)finishedNotification;
- (id)isEnabledPropertyKey;
- (bool)luxIsInActiveRange:(float)arg1;
- (const char *)name;
- (bool)nitsAreInActiveRange:(float)arg1;
- (id)params;
- (float)rampTargetLuxCap;
- (id)runningNotification;
- (void)setParams:(id)arg1;
- (id)strengthNotification;

@end
