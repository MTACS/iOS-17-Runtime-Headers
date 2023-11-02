
@interface CKMentionsTextContainerOverlayView : UIView {
    NSDictionary * _mentionAnimations;
    UITextView * _textView;
}

@property (nonatomic, copy) NSDictionary *mentionAnimations;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (void)__drawGlyph:(unsigned short)arg1 textPosition:(struct CGPoint { double x1; double x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 font:(struct __CTFont { }*)arg4 attributes:(id)arg5 layoutFragment:(id)arg6;
- (void)_drawAnimatedMentionRun:(struct __CTRun { }*)arg1 textPosition:(struct CGPoint { double x1; double x2; })arg2 rippler:(id)arg3 layoutFragment:(id)arg4;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textView:(id)arg2;
- (bool)isOpaque;
- (id)mentionAnimations;
- (void)setMentionAnimations:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)updateUsingAnimations:(id)arg1;

@end
