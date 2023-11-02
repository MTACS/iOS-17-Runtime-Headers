
@interface PRXAction : NSObject {
    UIButton * _button;
    bool  _enabled;
    id /* block */  _handler;
    long long  _style;
    NSString * _title;
    bool  _usesLegacyStyling;
}

@property (nonatomic) UIButton *button;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic) bool usesLegacyStyling;

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
+ (id)defaultDismissalActionForViewController:(id)arg1;
+ (id)dismissalConfirmationActionForViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 confirmButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5;

- (void).cxx_destruct;
- (void)_callHandler;
- (id)button;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
- (bool)isEnabled;
- (void)setButton:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setUsesLegacyStyling:(bool)arg1;
- (long long)style;
- (id)title;
- (bool)usesLegacyStyling;

@end
