
@interface WFCompactDialogAction : NSObject {
    <WFCompactAppearanceProvider> * _appearanceProvider;
    WFDialogButton * _dialogButton;
    bool  _enabled;
    id /* block */  _handler;
    UIButton * _uiButton;
}

@property (nonatomic, retain) <WFCompactAppearanceProvider> *appearanceProvider;
@property (nonatomic, readonly) WFDialogButton *dialogButton;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly, copy) id /* block */ handler;
@property (nonatomic, retain) UIButton *uiButton;

+ (id)actionForButton:(id)arg1 handler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)appearanceProvider;
- (id)dialogButton;
- (bool)enabled;
- (id /* block */)handler;
- (void)invokeHandler;
- (void)setAppearanceProvider:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setUiButton:(id)arg1;
- (id)uiButton;

@end
