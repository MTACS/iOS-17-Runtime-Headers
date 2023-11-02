
@interface PXErrorRecoveryOption : NSObject {
    id /* block */  _handler;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)recoveryOptionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_attemptRecoveryFromError:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)handler;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
- (void)setHandler:(id /* block */)arg1;
- (long long)style;
- (id)title;

@end
