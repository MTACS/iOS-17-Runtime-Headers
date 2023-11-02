
@interface TabLimitCleanupGroup : NSObject {
    UIAlertAction * _action;
    NSString * _message;
}

@property (nonatomic, readonly) UIAlertAction *action;
@property (nonatomic, readonly, copy) NSString *message;

- (void).cxx_destruct;
- (id)action;
- (id)initWithAlertMesssage:(id)arg1 actionTitle:(id)arg2 tabs:(id)arg3 browserWindowController:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)message;

@end
