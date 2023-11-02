
@interface HMDBackingStoreLogAddTransactionOperation : HMDBackingStoreOperation {
    bool  _isAtomicSaveEnabled;
    long long  _pushFlags;
    HMDBackingStoreTransactionBlock * _transaction;
}

@property (nonatomic, readonly) bool isAtomicSaveEnabled;
@property (nonatomic) long long pushFlags;
@property (nonatomic, retain) HMDBackingStoreTransactionBlock *transaction;

- (void).cxx_destruct;
- (id)initWithAtomicSaveEnabled:(bool)arg1 transaction:(id)arg2;
- (id)initWithTransaction:(id)arg1;
- (bool)isAtomicSaveEnabled;
- (id)mainReturningError;
- (long long)pushFlags;
- (void)setPushFlags:(long long)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
