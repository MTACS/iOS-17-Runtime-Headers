
@interface HMDBackingStoreTransactionActions : HMDBackingStoreTransactionOptions {
    HMDBackingStore * _backingStore;
    bool  _changed;
    bool  _local;
    NSMutableSet * _postApplyActionNames;
    NSMutableArray * _postApplyActions;
    bool  _postApplyActionsInvoked;
    bool  _saveToAssistant;
    bool  _saveToSharedUserAccount;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic) HMDBackingStore *backingStore;
@property (nonatomic, readonly) bool changed;
@property (nonatomic, readonly) bool local;
@property (nonatomic, readonly) bool saveToAssistant;
@property (nonatomic, readonly) bool saveToSharedUserAccount;
@property (nonatomic, readonly) NSMutableDictionary *userInfo;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)addPostApplyActionIfNotPresent:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)addPostApplyActionUsingBlock:(id /* block */)arg1;
- (id)backingStore;
- (bool)changed;
- (id)description;
- (id)initWithBackingStore:(id)arg1 options:(id)arg2;
- (void)invokePostApplyActions;
- (bool)local;
- (id)logIdentifier;
- (void)markChanged;
- (void)markLocalChanged;
- (void)markSaveToAssistant;
- (void)markSaveToSharedUserAccount;
- (bool)saveToAssistant;
- (bool)saveToSharedUserAccount;
- (void)setBackingStore:(id)arg1;
- (id)userInfo;

@end
