
@interface TUISystemInputAssistantLayout : NSObject {
    bool  _usesUnifiedButtonBar;
}

@property (nonatomic) bool usesUnifiedButtonBar;

- (id)_buttonBarGroupSetForApplicationAssistantItem:(id)arg1 withSystemInputAssistantItem:(id)arg2 forAssistantView:(id)arg3;
- (void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4;
- (void)invalidate:(id)arg1;
- (void)layoutViewSet:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forAssistantView:(id)arg3;
- (void)setUsesUnifiedButtonBar:(bool)arg1;
- (bool)usesUnifiedButtonBar;

@end
