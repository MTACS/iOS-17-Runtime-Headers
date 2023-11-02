
@interface FBKSDraftLauncher : NSObject {
    FBKSDraftLauncher * _form;
    FBKSDraftLauncher_FrameworkPrivateName * _swiftObject;
}

@property (nonatomic, readonly) FBKSDraftLauncher *form;
@property (nonatomic, retain) FBKSDraftLauncher_FrameworkPrivateName *swiftObject;

- (void).cxx_destruct;
- (void)collectFeedbackWithLaunchConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)form;
- (id)initWithFeedbackForm:(id)arg1;
- (void)setSwiftObject:(id)arg1;
- (id)swiftObject;

@end
