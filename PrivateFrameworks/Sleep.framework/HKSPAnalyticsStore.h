
@interface HKSPAnalyticsStore : NSObject {
    id /* block */  _diagnosticsOptInStatusProvider;
    <HKSPUserDefaults> * _userDefaults;
}

@property (nonatomic, copy) id /* block */ diagnosticsOptInStatusProvider;
@property (nonatomic, readonly) <HKSPUserDefaults> *userDefaults;

- (void).cxx_destruct;
- (void)_setWindDownActions:(id)arg1 forMorningIndex:(long long)arg2 overwriteExisting:(bool)arg3;
- (id /* block */)diagnosticsOptInStatusProvider;
- (id)initWithUserDefaults:(id)arg1;
- (id)initWithUserDefaults:(id)arg1 diagnosticsOptInStatusProvider:(id /* block */)arg2;
- (void)markAllActionsAsCollected;
- (id)readAllWindDownActions;
- (void)removeAllWindDownActionsBeforeMorningIndex:(long long)arg1;
- (void)setBaselineForWindDownActions:(id)arg1 onMorningIndex:(long long)arg2;
- (void)setDiagnosticsOptInStatusProvider:(id /* block */)arg1;
- (id)uncollectedWindDownActions;
- (void)updateWindDownActions:(id)arg1 onMorningIndex:(long long)arg2;
- (id)userDefaults;
- (id)windDownActionsAfterMorningIndex:(long long)arg1;
- (id)windDownActionsForMorningIndex:(long long)arg1;
- (void)writeWindDownActions:(id)arg1;

@end
