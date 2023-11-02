
@interface PKUserNotificationAuthorizationController : NSObject {
    UNUserNotificationCenter * _center;
    NSHashTable * _delegates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegatesLock;
    PKPaymentService * _paymentService;
    unsigned long long  _previouslyCheckedContentType;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_contentTypeToDisplayWithPasses:(id)arg1;
- (void)_shouldOfferAuthorizationPromptForPayLaterReasonWithPasses:(id)arg1 completion:(id /* block */)arg2;
- (void)_shouldOfferAuthorizationPromptForPeerPaymentReasonWithPeerPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (void)addDelegate:(id)arg1;
- (void)authorizationStatusRequiresPromptWithCompletion:(id /* block */)arg1;
- (void)authorizationStatusWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)removeDelegate:(id)arg1;
- (void)requestNotificationAuthorizationWithCompletion:(id /* block */)arg1;
- (void)setPresentedNotificationAuthorizationPromptShown;
- (void)shouldOfferAuthorizationPromptWithPasses:(id)arg1 completion:(id /* block */)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
