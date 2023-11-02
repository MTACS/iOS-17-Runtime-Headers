
@interface LKSwitchOperation : LKOperation {
    NSMutableArray * _mutableKeychainItemsAddedAfterRecoverEMCS;
    LKRecoverEMCSOperation * _recoverEMCSOperation;
    unsigned long long  _switchType;
}

@property (nonatomic, readonly) NSArray *keychainItemsAddedAfterRecoverEMCS;
@property (nonatomic, retain) NSMutableArray *mutableKeychainItemsAddedAfterRecoverEMCS;
@property (nonatomic, readonly) LKRecoverEMCSOperation *recoverEMCSOperation;
@property (nonatomic, readonly) unsigned long long switchType;

- (void).cxx_destruct;
- (void)addKeychainItemAdditionEvent:(id)arg1;
- (id)dictionary;
- (id)init;
- (id)keychainItemsAddedAfterRecoverEMCS;
- (id)mutableKeychainItemsAddedAfterRecoverEMCS;
- (id)recoverEMCSOperation;
- (void)removeLastKeychainItemAdditionEvent;
- (void)setMutableKeychainItemsAddedAfterRecoverEMCS:(id)arg1;
- (void)setRecoverEMCSOperation:(id)arg1;
- (void)setSwitchType:(unsigned long long)arg1;
- (unsigned long long)switchType;
- (id)switchTypeString;

@end
