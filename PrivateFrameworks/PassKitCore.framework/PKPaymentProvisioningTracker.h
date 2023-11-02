
@interface PKPaymentProvisioningTracker : NSObject <PKCancelable> {
    PKPaymentProvisioningController * _controller;
}

@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithPaymentProvisioningController:(id)arg1;
- (bool)isCanceled;

@end
