
@interface TPSPhonebookController : NSObject <TPSPhonebookTelephonyControllerDelegate> {
    <TPSPhonebookControllerDelegate> * _delegate;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
    NSString * _subscriptionISOCountryCode;
    TPSPhonebookTelephonyController * _telephonyClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TPSPhonebookControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedSubscriptionTelephoneNumber;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (getter=isSubscriptionEditable, nonatomic, readonly) bool subscriptionEditable;
@property (nonatomic, readonly, copy) NSString *subscriptionISOCountryCode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TPSPhonebookTelephonyController *telephonyClient;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (bool)isSubscriptionEditable;
- (id)localizedSubscriptionTelephoneNumber;
- (void)phonebookController:(id)arg1 didChangePhoneNumberInfo:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)subscriptionContext;
- (id)subscriptionISOCountryCode;
- (id)telephonyClient;
- (void)updateSubscriptionTelephoneNumber:(id)arg1 completion:(id /* block */)arg2;

@end
