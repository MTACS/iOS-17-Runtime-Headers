
@interface PKAccountEnhancedMerchantsFetcher : NSObject <PKAccountServiceObserver> {
    NSString * _accountIdentifier;
    PKAccountService * _accountService;
    PKAccountEnhancedMerchantBehavior * _behavior;
    NSArray * _items;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _itemsLock;
    NSDate * _lastUpdate;
    NSArray * _orderings;
    NSMutableDictionary * _tokenToUpdateHandlerMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _updateHandlersLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_enhancedMerchantBehaviorCopy;
- (void)_executeWithLock:(id /* block */)arg1;
- (id)_lastUpdateCopy;
- (void)_reloadDataIncludeOrderings:(bool)arg1 includeBehavior:(bool)arg2 includeMerchants:(bool)arg3 completion:(id /* block */)arg4;
- (void)_setLastUpdate:(id)arg1;
- (void)_triggerUpdateHandlers;
- (id)addUpdateHandler:(id /* block */)arg1;
- (bool)dataIsWithinThresholdForCooldownLevel:(unsigned long long)arg1;
- (void)dealloc;
- (void)didUpdateAccountEnhancedMerchants:(id)arg1 accountIdentifier:(id)arg2 lastUpdate:(id)arg3;
- (id)enhancedMerchantMatchingPaymentIdentifier:(id)arg1;
- (id)enhancedMerchants;
- (id)enhancedMerchantsWithOrderingContext:(unsigned long long)arg1;
- (id)initWithAccountIdentifier:(id)arg1 accountService:(id)arg2;
- (void)reloadDataWithCompletion:(id /* block */)arg1;
- (void)removeUpdateHandler:(id)arg1;
- (void)setItems:(id)arg1;
- (void)updateDataWithCooldownLevel:(unsigned long long)arg1 ignoreErrorBackoff:(bool)arg2 completion:(id /* block */)arg3;

@end
