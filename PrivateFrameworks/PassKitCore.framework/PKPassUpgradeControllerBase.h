
@interface PKPassUpgradeControllerBase : NSObject {
    id /* block */  _addPaymentPassToLibrary;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pass_upgrade_lock;
    PKPaymentWebService * _paymentWebService;
    NSMutableDictionary * _pendingPassUpgrades;
}

@property (nonatomic, retain) PKPaymentWebService *paymentWebService;

- (void).cxx_destruct;
- (void)appletsDidUpdate;
- (void)completePassUpgradeForPassUniqueID:(id)arg1 withError:(id)arg2;
- (void)downloadUpgradedPassForPassUniqueID:(id)arg1 atURL:(id)arg2;
- (id)init;
- (id)initWithWebService:(id)arg1 addPaymentPassToLibrary:(id /* block */)arg2;
- (id)paymentWebService;
- (void)requestPassUpgrade:(id)arg1 pass:(id)arg2 diagnosticReason:(id)arg3 completion:(id /* block */)arg4;
- (void)setPaymentWebService:(id)arg1;

@end
