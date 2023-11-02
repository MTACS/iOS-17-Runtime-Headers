
@interface MFCardAction : NSObject {
    NSString * _accessibilityIdentifer;
    id /* block */  _dismissHandler;
    id /* block */  _handler;
    bool  _handlerEnabled;
    NSString * _imageName;
    NSString * _shortTitle;
    bool  _shouldDeferDismissHandler;
    bool  _shouldDismissCardBeforeExecuteHandler;
    UIColor * _tintColor;
    NSString * _title;
}

@property (nonatomic, copy) NSString *accessibilityIdentifer;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) bool handlerEnabled;
@property (nonatomic, retain) NSString *imageName;
@property (nonatomic, copy) NSString *shortTitle;
@property (nonatomic) bool shouldDeferDismissHandler;
@property (nonatomic) bool shouldDismissCardBeforeExecuteHandler;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, copy) NSString *title;

+ (id)cardActionWithTitle:(id)arg1 shortTitle:(id)arg2 imageName:(id)arg3 tintColor:(id)arg4 handler:(id /* block */)arg5;
+ (id)cardActionWithTitle:(id)arg1 shortTitle:(id)arg2 imageName:(id)arg3 tintColor:(id)arg4 handlerEnabled:(bool)arg5 handler:(id /* block */)arg6;

- (void).cxx_destruct;
- (id)accessibilityIdentifer;
- (id /* block */)dismissHandler;
- (void)executeHandler;
- (void)executeHandlerIfEnabled;
- (id /* block */)handler;
- (bool)handlerEnabled;
- (id)imageName;
- (void)setAccessibilityIdentifer:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setHandlerEnabled:(bool)arg1;
- (void)setImageName:(id)arg1;
- (void)setShortTitle:(id)arg1;
- (void)setShouldDeferDismissHandler:(bool)arg1;
- (void)setShouldDismissCardBeforeExecuteHandler:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)shortTitle;
- (bool)shouldDeferDismissHandler;
- (bool)shouldDismissCardBeforeExecuteHandler;
- (id)tintColor;
- (id)title;

@end
