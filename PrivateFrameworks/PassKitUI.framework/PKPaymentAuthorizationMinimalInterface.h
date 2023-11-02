
@interface PKPaymentAuthorizationMinimalInterface : NSObject <PKPaymentAuthorizationInterface> {
    UIViewController * _primaryViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *primaryViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPrimaryViewController:(id)arg1;
- (id)primaryViewController;

@end
