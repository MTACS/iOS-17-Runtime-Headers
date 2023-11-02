
@interface SBUsageDefaults : BSAbstractDefaultDomain

@property (nonatomic, retain) NSNumber *batteryUsageTime;
@property (nonatomic) bool hasChargedPartially;
@property (nonatomic, retain) NSNumber *standbyTime;

- (void)_bindAndRegisterDefaults;
- (void)clearUsageDefaults;

@end
