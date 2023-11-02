
@interface CACUserHintsManager : NSObject {
    double  _lastPruneTime;
}

+ (id)sharedManager;

- (unsigned long long)_countAfterRegisteringUserHintIdentifier:(id)arg1;
- (void)clearHistory;
- (id)init;
- (bool)shouldDisplayUserHintAfterRegisteringIdentifier:(id)arg1;
- (id)suggestedCommandIdentifiersFromActiveCommandIdentifiers:(id)arg1 maximumCount:(long long)arg2;

@end
