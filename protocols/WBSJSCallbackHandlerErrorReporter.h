
@protocol WBSJSCallbackHandlerErrorReporter <NSObject>

@required

- (void)reportErrorForCallbackHandler:(WBSJSCallbackHandler *)arg1 withMessage:(NSString *)arg2 context:(struct OpaqueJSContext { }*)arg3;

@end
