
@interface BKUIJindoBottomContainer : BKUIPearlEnrollViewBottomContainer <BKUIButtonTrayActionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_shouldShowBottomLinkButton;
- (void)_updateButtonVisibilityForScrollView:(id)arg1 state:(int)arg2 subState:(int)arg3;
- (void)buttonSelectedWithButtonTrayPosition:(long long)arg1;
- (id)escapeHatchButtonForState:(int)arg1;
- (void)setupInitialUI;
- (bool)showStartOverForState:(int)arg1;

@end
