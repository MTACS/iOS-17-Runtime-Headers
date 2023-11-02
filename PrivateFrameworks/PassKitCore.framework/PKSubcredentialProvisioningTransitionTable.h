
@interface PKSubcredentialProvisioningTransitionTable : NSObject

- (bool)isStateFinal:(long long)arg1;
- (bool)isValidStartingState:(long long)arg1;
- (bool)isValidStateTransitionFrom:(long long)arg1 to:(long long)arg2;

@end
