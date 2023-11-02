
@protocol SBSystemApertureContextAccepting <NSObject>

@optional

- (bool)elementProviderPrefersSuppression;
- (bool)isAffiliatedWithSessionMonitor;
- (bool)isAlerting;
- (unsigned long long)obstructionEdge;
- (<SAAutomaticallyInvalidatable> *)requestAlertingAssertion;
- (void)setAffiliatedWithSessionMonitor:(bool)arg1;
- (void)setAlerting:(bool)arg1;
- (void)setElementProviderPrefersSuppression:(bool)arg1;
- (void)setObstructionEdge:(unsigned long long)arg1;

@end
