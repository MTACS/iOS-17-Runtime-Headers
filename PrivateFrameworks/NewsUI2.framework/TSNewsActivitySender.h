
@interface TSNewsActivitySender : NSObject {
    void dismissalTransitionFactory;
    void presentationTransitionFactory;
    void viewController;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithViewController:(id)arg1 presentationTransitionFactory:(id /* block */)arg2 dismissalTransitionFactory:(id /* block */)arg3;

@end
