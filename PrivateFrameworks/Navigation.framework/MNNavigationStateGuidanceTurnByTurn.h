
@interface MNNavigationStateGuidanceTurnByTurn : MNNavigationStateGuidance

- (void)postEnterState;
- (void)setFullGuidanceMode:(bool)arg1;
- (void)setGuidanceType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
