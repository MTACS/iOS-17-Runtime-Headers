
@interface AMSUIPaymentSpecifierProvider : NSObject <AAUISpecifierProvider, AMSUIWebDelegate> {
    AIDAAccountManager * _accountManager;
    <AAUISpecifierProviderDelegate> * _delegate;
    ACAccount * _grandSlamAccount;
    NSString * _paymentSummaryDescription;
    NSArray * _specifiers;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *paymentSummaryDescription;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

+ (bool)_accountsChangedFromAccount:(id)arg1 toAccount:(id)arg2;

- (void).cxx_destruct;
- (id)_findViewController;
- (id)_grandSlamAccount;
- (void)_loadControllerForSpecifier:(id)arg1;
- (id)_paymentSummaryDescriptionForSpecifier:(id)arg1;
- (id)accountManager;
- (id)delegate;
- (id)initWithAccountManager:(id)arg1;
- (id)paymentSummaryDescription;
- (void)setAccountManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaymentSummaryDescription:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;
- (void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(id /* block */)arg3;
- (void)webViewController:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;

@end
