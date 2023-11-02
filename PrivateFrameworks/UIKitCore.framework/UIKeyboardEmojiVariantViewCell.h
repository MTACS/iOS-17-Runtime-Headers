
@interface UIKeyboardEmojiVariantViewCell : UIView <UIKeyboardEmojiDraggableViewDelegate> {
    UIView * _backgroundView;
    bool  _highlighted;
    UIKeyboardEmojiDraggableView * _labelView;
    UIKBRenderConfig * _renderConfig;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *emoji;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dragWillBegin:(id)arg1;
- (id)emoji;
- (bool)highlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)renderConfig;
- (void)setEmoji:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setRenderConfig:(id)arg1;

@end
