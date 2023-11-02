
@interface TUIEmojiVariantCell : UIView <_TUIKeyboardEmojiDraggableViewDelegate> {
    UIView * _backgroundView;
    EMFEmojiToken * _emojiToken;
    bool  _highlighted;
    _TUIKeyboardEmojiDraggableView * _labelView;
    TUIEmojiVariantSelectorView * _variantSelectorView;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EMFEmojiToken *emojiToken;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) _TUIKeyboardEmojiDraggableView *labelView;
@property (readonly) Class superclass;
@property (nonatomic) TUIEmojiVariantSelectorView *variantSelectorView;

+ (id)_createDraggableEmojiLabel;

- (void).cxx_destruct;
- (id)backgroundView;
- (void)dragDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)dragWillBegin:(id)arg1;
- (id)emojiToken;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 token:(id)arg2;
- (bool)isHighlighted;
- (id)labelView;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (void)setVariantSelectorView:(id)arg1;
- (id)variantSelectorView;

@end
