
@interface PKSecureElementConsistencyChecker : NSObject {
    <PKCloudStoreCoordinatorDelegate> * _cloudStoreCoordinatorDelegate;
    <PKSecureElementConsistencyCheckerDelegate> * _delegate;
    PKPaymentWebService * _paymentWebService;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (nonatomic) <PKSecureElementConsistencyCheckerDelegate> *delegate;
@property (nonatomic, retain) PKPaymentWebService *paymentWebService;

+ (bool)isCheckingConsistencyForSecureElementID:(id)arg1;

- (void).cxx_destruct;
- (void)_downloadPassesWithCompletion:(id /* block */)arg1;
- (void)_rescheduleCheckInTimeInterval:(double)arg1 backoffLevel:(long long)arg2;
- (void)_rescheduleWithBackoff;
- (void)_syncWithTSMCompletion:(id /* block */)arg1;
- (id)delegate;
- (id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2;
- (id)initWithPaymentWebService:(id)arg1 delegate:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3;
- (id)paymentWebService;
- (void)queue_startWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaymentWebService:(id)arg1;
- (void)startWithCompletion:(id /* block */)arg1;

@end
