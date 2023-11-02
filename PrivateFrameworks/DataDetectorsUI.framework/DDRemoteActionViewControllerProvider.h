
@interface DDRemoteActionViewControllerProvider : NSObject {
    DDRemoteActionContext * _actionContext;
}

@property (readonly) DDRemoteActionContext *actionContext;

- (void).cxx_destruct;
- (id)actionContext;
- (void)createViewControllerWithCompletionHandler:(id /* block */)arg1;
- (id)initWithContext:(id)arg1;

@end
