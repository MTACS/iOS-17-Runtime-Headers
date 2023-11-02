
@protocol CBChromaticCorrectionPolicy <NSObject>

@required

- (float)cappedRampStartLux:(float)arg1;
- (float)cappedRampTargetLux:(float)arg1;
- (NSString *)finishedNotification;
- (NSString *)isEnabledPropertyKey;
- (bool)luxIsInActiveRange:(float)arg1;
- (const char *)name;
- (bool)nitsAreInActiveRange:(float)arg1;
- (CBChromaticCorrectionParams *)params;
- (float)rampTargetLuxCap;
- (NSString *)runningNotification;
- (void)setParams:(CBChromaticCorrectionParams *)arg1;
- (NSString *)strengthNotification;

@end
