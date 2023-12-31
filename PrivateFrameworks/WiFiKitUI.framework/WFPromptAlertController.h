
@interface WFPromptAlertController : UIAlertController {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;

+ (id)promptAlertControllerWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 successTitle:(id)arg4 completionHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
