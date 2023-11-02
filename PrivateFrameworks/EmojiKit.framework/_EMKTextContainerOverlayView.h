
@interface _EMKTextContainerOverlayView : UIView {
    NSMutableArray * _fragmentViews;
    EMKGlyphRippler * _rippler;
    EMKTextEnumerator * _textEnumerator;
    UITextView * _textView;
    unsigned long long  _timeIndex;
}

@property (nonatomic, retain) NSMutableArray *fragmentViews;
@property (nonatomic, retain) EMKGlyphRippler *rippler;
@property (nonatomic, retain) EMKTextEnumerator *textEnumerator;
@property (nonatomic, retain) UITextView *textView;
@property (nonatomic) unsigned long long timeIndex;

- (void).cxx_destruct;
- (void)_layoutFragmentView:(id)arg1;
- (id)_newFragmentViewForFragment:(id)arg1;
- (id)fragmentViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 rippler:(id)arg2;
- (bool)isOpaque;
- (void)layoutSubviews;
- (void)prepareWithTextView:(id)arg1;
- (id)rippler;
- (void)setFragmentViews:(id)arg1;
- (void)setRippler:(id)arg1;
- (void)setTextEnumerator:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setTimeIndex:(unsigned long long)arg1;
- (void)startAnimation;
- (id)textEnumerator;
- (id)textView;
- (unsigned long long)timeIndex;
- (void)updateAnimationAndGetFinished:(bool*)arg1;

@end
