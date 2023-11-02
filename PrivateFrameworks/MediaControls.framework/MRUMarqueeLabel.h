
@interface MRUMarqueeLabel : UIView {
    UIView * _animationReferenceView;
    double  _contentGap;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _fadeEdgeInsets;
    UIFont * _font;
    BSUIEmojiLabelView * _label;
    bool  _marqueeEnabled;
    MPUMarqueeView * _marqueeView;
    long long  _numberOfLines;
    NSString * _text;
    long long  _textAlignment;
    UIColor * _textColor;
}

@property (nonatomic) UIView *animationReferenceView;
@property (nonatomic) double contentGap;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fadeEdgeInsets;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) BSUIEmojiLabelView *label;
@property (getter=isMarqueeEnabled, nonatomic) bool marqueeEnabled;
@property (nonatomic, retain) MPUMarqueeView *marqueeView;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long sizingRule;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) bool wantsContentAwareTypesettingLanguage;

- (void).cxx_destruct;
- (void)addCoordinatedMarqueeView:(id)arg1;
- (id)animationReferenceView;
- (double)contentGap;
- (struct CGSize { double x1; double x2; })contentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fadeEdgeInsets;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMarqueeEnabled;
- (id)label;
- (void)layoutSubviews;
- (id)marqueeView;
- (void)mru_applyVisualStylingWithColor:(id)arg1 alpha:(double)arg2 blendMode:(long long)arg3;
- (void)mt_applyVisualStyling:(id)arg1;
- (long long)numberOfLines;
- (void)setAnimationReferenceView:(id)arg1;
- (void)setContentGap:(double)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFadeEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFont:(id)arg1;
- (void)setMarqueeEnabled:(bool)arg1;
- (void)setMarqueeView:(id)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setSizingRule:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setWantsContentAwareTypesettingLanguage:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)sizingRule;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)viewForFirstBaselineLayout;
- (bool)wantsContentAwareTypesettingLanguage;

@end
