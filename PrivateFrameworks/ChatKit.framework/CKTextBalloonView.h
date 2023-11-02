
@interface CKTextBalloonView : CKColoredBalloonView <CKBalloonTextViewInteractionDelegate, CKBalloonVibrancy, UITextViewDelegate> {
    NSAttributedString * _attributedText;
    bool  _containsExcessiveLineHeightCharacters;
    bool  _ignoreSelectionEvent;
    UITextView<CKBalloonTextViewProtocol> * _textView;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) bool containsExcessiveLineHeightCharacters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreSelectionEvent;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextView<CKBalloonTextViewProtocol> *textView;

- (void).cxx_destruct;
- (void)_layoutTextView;
- (void)addFilter:(id)arg1;
- (void)addOverlaySubview:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)attachInvisibleInkEffectView;
- (id)attributedText;
- (void)clearFilters;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;
- (bool)containsExcessiveLineHeightCharacters;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)description;
- (void)detachInvisibleInkEffectView;
- (bool)ignoreSelectionEvent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textView:(id)arg2;
- (void)interactionStartedFromPreviewItemControllerInTextView:(id)arg1;
- (void)interactionStartedLongPressInTextView:(id)arg1;
- (void)interactionStartedTapInTextView:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3;
- (void)interactionStoppedFromPreviewItemControllerInTextView:(id)arg1;
- (void)interactionTextView:(id)arg1 userDidDragOutsideViewWithPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)interactionTextViewShouldCopyToPasteboard:(id)arg1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (bool)isSelected;
- (void)layoutSubviews;
- (id)nonVibrantSubViews;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)restoreFromLargeTextTruncation;
- (void)setAttributedText:(id)arg1;
- (void)setContainsExcessiveLineHeightCharacters:(bool)arg1;
- (void)setIgnoreSelectionEvent:(bool)arg1;
- (void)setSelected:(bool)arg1 withSelectionState:(id)arg2;
- (void)setTextView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 isSingleLine:(bool*)arg3;
- (void)tapGestureRecognized:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })targetTextContainerInsets;
- (id)textView;
- (void)textViewDidChangeSelection:(id)arg1;
- (double)textViewWidthForWidth:(double)arg1;
- (void)truncateForLargeText;
- (void)updateRasterizationForInvisibleInkEffect;
- (id)updateTextSelectionState:(id)arg1 forTextSelectionArea:(long long)arg2;
- (void)vibrantContainerWillReparentNonVibrantSubviews:(id)arg1;

@end
