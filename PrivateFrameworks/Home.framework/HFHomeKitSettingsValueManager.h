
@interface HFHomeKitSettingsValueManager : NSObject {
    NSSet * _homeKitObjectIdentifiers;
    HMSettings * _settings;
    NSMutableDictionary * _transactionStacks;
}

@property (nonatomic, retain) NSSet *homeKitObjectIdentifiers;
@property (nonatomic, readonly) NSSet *pendingWrites;
@property (nonatomic, retain) HMSettings *settings;
@property (nonatomic, retain) NSMutableDictionary *transactionStacks;

- (void).cxx_destruct;
- (void)_clearTransaction:(id)arg1;
- (void)_executeNextPendingWriteForSetting:(id)arg1;
- (id)_valueForSetting:(id)arg1 logRead:(bool)arg2;
- (id)changeValueForSetting:(id)arg1 toValue:(id)arg2;
- (id)changeValueForSetting:(id)arg1 toValue:(id)arg2 changeType:(unsigned long long)arg3;
- (id)homeKitObjectIdentifiers;
- (id)initWithSettings:(id)arg1 homeKitObjectIdentifiers:(id)arg2;
- (id)pendingWrites;
- (void)setHomeKitObjectIdentifiers:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setTransactionStacks:(id)arg1;
- (id)settings;
- (id)transactionStacks;
- (id)valueForSetting:(id)arg1;
- (id)valueForSettingAtKeyPath:(id)arg1;

@end
