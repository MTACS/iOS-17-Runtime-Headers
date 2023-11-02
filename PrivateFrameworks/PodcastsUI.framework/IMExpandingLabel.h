
@interface IMExpandingLabel : UIView {
    <IMExpandingLabelDelegate> * _delegate;
    bool  _expanded;
    bool  _fitsWithinLineLimit;
    id  _gradientClearColor;
    double  _gradientHeight;
    CAGradientLayer * _gradientLayer;
    id  _gradientSemiClearColor;
    id  _gradientSolidColor;
    bool  _hasGradient;
    unsigned long long  _languageDirection;
    UIButton * _moreButton;
    unsigned long long  _numberOfLines;
    NSString * _text;
    NSDictionary * _textAttributes;
    long long  _textMode;
    UITextView * _textView;
}

@property (nonatomic) <IMExpandingLabelDelegate> *delegate;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic) bool fitsWithinLineLimit;
@property (nonatomic) double gradientHeight;
@property (nonatomic) bool hasGradient;
@property (nonatomic) unsigned long long languageDirection;
@property (nonatomic, retain) UIButton *moreButton;
@property (nonatomic) unsigned long long numberOfLines;
@property (getter=isScrollEnabled, nonatomic) bool scrollEnabled;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSDictionary *textAttributes;
@property (nonatomic) long long textMode;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (id)delegate;
- (bool)fitsWithinLineLimit;
- (double)gradientHeight;
- (bool)hasGradient;
- (double)heightForWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExpanded;
- (bool)isScrollEnabled;
- (unsigned long long)languageDirection;
- (void)layoutSubviews;
- (id)moreButton;
- (void)moreButtonTapped:(id)arg1;
- (unsigned long long)numberOfLines;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setFitsWithinLineLimit:(bool)arg1;
- (void)setGradientHeight:(double)arg1;
- (void)setHasGradient:(bool)arg1;
- (void)setLanguageDirection:(unsigned long long)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTextMode:(long long)arg1;
- (void)setTextView:(id)arg1;
- (id)text;
- (id)textAttributes;
- (long long)textMode;
- (id)textView;

@end
