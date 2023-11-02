
@interface SUUISettingsEditTransaction : NSObject {
    NSSet * _all;
    id /* block */  _commitBlock;
    <SUUISettingsEditTransactionDelegate> * _delegate;
    NSLock * _lock;
    NSMutableSet * _pending;
    bool  _success;
}

@property (nonatomic) <SUUISettingsEditTransactionDelegate> *delegate;

- (void).cxx_destruct;
- (void)_delegateDidCompleteTransaction;
- (void)_delegateDidFailTransaction;
- (void)_delegateWillBeginTransaction;
- (void)_delegateWillCommitTransaction;
- (void)_finalizeCommit;
- (void)_settingDescription:(id)arg1 completedWithSuccess:(bool)arg2;
- (void)beginTransaction;
- (void)cancelTransaction;
- (void)commitTransaction;
- (id)delegate;
- (id)initWithSettingDescriptions:(id)arg1;
- (bool)isCommiting;
- (bool)isValid;
- (void)rollbackTransaction;
- (void)setDelegate:(id)arg1;

@end
