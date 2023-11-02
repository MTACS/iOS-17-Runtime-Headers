
@interface _HKSPUserDefaultsStatePersistence : NSObject <HKSPStatePersistence> {
    <HKSPUserDefaults> * _userDefaults;
}

@property (nonatomic, readonly) <HKSPUserDefaults> *userDefaults;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)arg1;
- (id)loadPersistentStateForIdentifier:(id)arg1 allowedStates:(id)arg2 error:(id*)arg3;
- (bool)savePersistentState:(id)arg1 identifier:(id)arg2 error:(id*)arg3;
- (id)userDefaults;

@end
