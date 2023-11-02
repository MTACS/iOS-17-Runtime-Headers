
@interface MNNavigationStateRoutePreviewGuidance : MNNavigationStateGuidance

- (void)enterState;
- (id)initWithStateManager:(id)arg1 navigationSessionManager:(id)arg2 startDetails:(id)arg3;
- (void)setGuidanceType:(unsigned long long)arg1;
- (void)stopNavigationWithReason:(unsigned long long)arg1;
- (unsigned long long)type;

@end
