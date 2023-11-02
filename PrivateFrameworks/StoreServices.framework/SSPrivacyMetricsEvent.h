
@interface SSPrivacyMetricsEvent : SSMetricsMutableEvent

@property (nonatomic) bool acknowledged;
@property (nonatomic, retain) NSString *acknowledgmentIdentifier;
@property (nonatomic, retain) NSNumber *acknowledgmentVersion;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) bool displayed;

- (bool)acknowledged;
- (id)acknowledgmentIdentifier;
- (id)acknowledgmentVersion;
- (id)bundleIdentifier;
- (bool)displayed;
- (id)init;
- (void)setAcknowledged:(bool)arg1;
- (void)setAcknowledgmentIdentifier:(id)arg1;
- (void)setAcknowledgmentVersion:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDisplayed:(bool)arg1;

@end
