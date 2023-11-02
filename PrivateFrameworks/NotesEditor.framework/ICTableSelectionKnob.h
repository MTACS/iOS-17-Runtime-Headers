
@interface ICTableSelectionKnob : UIView <UIPointerInteractionDelegate> {
    bool  _hovering;
    UIPointerInteraction * _pointerInteraction;
    ICTableAttachmentViewController * _tableAttachmentViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHovering, nonatomic) bool hovering;
@property (nonatomic, readonly) bool isEnd;
@property (nonatomic, readonly) bool isStart;
@property (nonatomic, retain) UIPointerInteraction *pointerInteraction;
@property (readonly) Class superclass;
@property (nonatomic) ICTableAttachmentViewController *tableAttachmentViewController;

- (void).cxx_destruct;
- (bool)_accessibilityHasTextOperations;
- (void)_accessibilityTextOperationAction:(id)arg1;
- (id)_accessibilityTextOperations;
- (id)accessibilityContainer;
- (id)accessibilityCustomActions;
- (void)accessibilityDarkerSystemColorsStatusDidChange:(id)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)aggregatedAttributedTextForCellRangeSelection;
- (id)axCopyString;
- (id)axCutString;
- (id)axLeftToRightString;
- (id)axMakeBoldString;
- (id)axMakeItalicString;
- (id)axMakeNotBoldString;
- (id)axMakeNotItalicString;
- (id)axMakeNotStrikethroughString;
- (id)axMakeNotUnderlinedString;
- (id)axMakeStrikethroughString;
- (id)axMakeUnderlinedString;
- (id)axPasteString;
- (id)axRightToLeftString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })circleRect;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)getBoldForSelection:(inout bool*)arg1 italic:(inout bool*)arg2 underline:(inout bool*)arg3 strikethrough:(inout bool*)arg4 rightToLeft:(inout bool*)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTableAttachmentViewController:(id)arg1;
- (bool)isAccessibilityElement;
- (bool)isEnd;
- (bool)isHovering;
- (bool)isStart;
- (id)pointerInteraction;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHovering:(bool)arg1;
- (void)setPointerInteraction:(id)arg1;
- (void)setTableAttachmentViewController:(id)arg1;
- (bool)speakCurrentSelectionAXAction;
- (id)tableAttachmentViewController;

@end
