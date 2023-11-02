
@interface PKAddPaymentPassController : NSObject {
    PKAddPaymentPassRequestConfiguration * _configuration;
    <PKAddPaymentPassControllerDelegate> * _delegate;
}

@property (nonatomic, retain) PKAddPaymentPassRequestConfiguration *configuration;
@property (nonatomic) <PKAddPaymentPassControllerDelegate> *delegate;

+ (Class)_desiredClass;
+ (bool)canAddPaymentPass;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2;
- (void)presentWithCompletion:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
