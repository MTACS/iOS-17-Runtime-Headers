
@interface UIPressAndHoldPopoverController : UIKeyboardPopoverController <TUIPressAndHoldViewDelegate> {
    TUIPressAndHoldView * _pressAndHoldView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPresentPressAndHoldPopoverForEvent:(id)arg1;
+ (bool)canPresentPressAndHoldPopoverForKeyString:(id)arg1;

- (void).cxx_destruct;
- (bool)handleHardwareKeyboardEvent:(id)arg1;
- (bool)handleKeyInputForAccentSelector:(id)arg1;
- (bool)handleKeyInputForPressAndHoldSelector:(id)arg1;
- (bool)handleSelectionEvent:(id)arg1;
- (bool)hasAccentVariantInForwardDirection:(bool)arg1;
- (id)initWithKeyString:(id)arg1;
- (void)insertSelectedAccentVariant:(id)arg1 shouldDismissPopover:(bool)arg2;
- (bool)isSamePressAndHoldPopoverForKeyString:(id)arg1;
- (void)pressAndHoldViewDidAcceptAccentVariant:(id)arg1 atIndexPath:(id)arg2;
- (void)showAccentVariantInForwardDirection:(bool)arg1;

@end
