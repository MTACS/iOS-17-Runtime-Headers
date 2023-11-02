
@interface MNNavigationStateNoDestination : MNNavigationState

- (unsigned long long)desiredLocationProviderType;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(id /* block */)arg2;
- (unsigned long long)type;

@end
