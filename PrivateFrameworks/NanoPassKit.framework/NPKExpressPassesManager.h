
@interface NPKExpressPassesManager : NSObject <NPKPassesDataSource> {
    NSArray * _currentPasses;
    NSArray * _currentPaymentPasses;
    NSArray * _currentSecureElementPasses;
    NSHashTable * _observers;
}

@property (nonatomic, retain) NSArray *currentPasses;
@property (nonatomic, retain) NSArray *currentPaymentPasses;
@property (nonatomic, retain) NSArray *currentSecureElementPasses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentPasses;
- (id)currentPaymentPasses;
- (id)currentSecureElementPasses;
- (id)defaultPaymentPass;
- (void)enableRemoteUpdates;
- (id)expiredPasses;
- (id)init;
- (void)movePassAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)observers;
- (id)passForUniqueID:(id)arg1;
- (id)passes;
- (id)paymentPasses;
- (void)registerObserver:(id)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(id /* block */)arg1;
- (void)removePass:(id)arg1;
- (id)secureElementPasses;
- (void)setCurrentPasses:(id)arg1;
- (void)setCurrentPaymentPasses:(id)arg1;
- (void)setCurrentSecureElementPasses:(id)arg1;
- (void)setDefaultPaymentPass:(id)arg1;
- (void)setObservers:(id)arg1;
- (bool)shouldAllowMovingItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)suppressRemoteUpdates;
- (void)unarchivePass:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updateWithExpressPass:(id)arg1 siblingExpressPasses:(id)arg2;

@end
