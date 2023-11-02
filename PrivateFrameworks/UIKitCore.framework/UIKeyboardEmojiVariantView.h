
@interface UIKeyboardEmojiVariantView : UIView <UIKBKeyViewContentView> {
    NSMutableArray * _cells;
    UIKeyboardEmojiVariantDivider * _divider;
    UIView * _touchForwardingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *touchForwardingView;

+ (struct CGSize { double x1; double x2; })preferredContentViewSizeForKey:(id)arg1 withTraits:(id)arg2;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)nextResponder;
- (bool)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 phase:(long long)arg3;
- (void)setTouchForwardingView:(id)arg1;
- (id)touchForwardingView;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)updateHighlightForSelectedVariantIndex:(long long)arg1;
- (void)updateRenderConfig:(id)arg1;
- (bool)updateSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
