
@interface SUUIExplicitRestrictionAlertController : NSObject {
    SUUIClientContext * _clientContext;
    UIViewController * _presentingViewController;
}

- (void).cxx_destruct;
- (id)initWithClientContext:(id)arg1;
- (id)initWithClientContext:(id)arg1 presentingViewController:(id)arg2;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(long long)arg1 completionBlock:(id /* block */)arg2;

@end