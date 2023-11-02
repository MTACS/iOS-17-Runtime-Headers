
@interface JavaScriptDialogState : NSObject {
    id /* block */  _completionHandler;
    NSString * _currentInput;
    NSString * _message;
    long long  _type;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, copy) NSString *currentInput;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)currentInput;
- (id)initWithMessage:(id)arg1 type:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)message;
- (void)setCurrentInput:(id)arg1;
- (long long)type;

@end
