
@interface _UITextOption : UIView {
    UILayoutGuide * _accessorySymbolSpacingGuide;
    UILabel * _contentsLabel;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _currentEdgeInsets;
    double  _horizontalPadding;
    NSArray * _insetConstraints;
    UIView * _lineView;
    NSLayoutConstraint * _minimumLabelWidth;
    NSString * _originalText;
    unsigned long long  _state;
    UIImageView * _symbolImageView;
    NSString * _textChoice;
    long long  _type;
}

@property (nonatomic, retain) UILayoutGuide *accessorySymbolSpacingGuide;
@property (nonatomic, retain) UILabel *contentsLabel;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } currentEdgeInsets;
@property (nonatomic) double horizontalPadding;
@property (nonatomic, retain) NSArray *insetConstraints;
@property (nonatomic, retain) UIView *lineView;
@property (nonatomic, retain) NSLayoutConstraint *minimumLabelWidth;
@property (nonatomic) NSString *originalText;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) UIImageView *symbolImageView;
@property (nonatomic, retain) NSString *textChoice;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)accessorySymbolSpacingGuide;
- (id)buttonImage;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForType:(long long)arg1 dividerWidth:(double)arg2;
- (id)contentsLabel;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })currentEdgeInsets;
- (id)fontForLabel;
- (double)horizontalPadding;
- (id)imageName;
- (id)initWithTitle:(id)arg1 type:(long long)arg2;
- (id)insetConstraints;
- (double)insetMultiplierForContentSizeCategory:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)leadingSpace;
- (id)lineView;
- (id)minimumLabelWidth;
- (id)originalText;
- (void)setAccessorySymbolSpacingGuide:(id)arg1;
- (void)setContentsLabel:(id)arg1;
- (void)setCurrentEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHorizontalPadding:(double)arg1;
- (void)setInsetConstraints:(id)arg1;
- (void)setLineView:(id)arg1;
- (void)setMinimumLabelWidth:(id)arg1;
- (void)setOriginalText:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSymbolImageView:(id)arg1;
- (void)setTextChoice:(id)arg1;
- (void)setType:(long long)arg1;
- (void)showSeparator:(bool)arg1;
- (unsigned long long)state;
- (id)symbolImageView;
- (id)textChoice;
- (id)textColor;
- (id)textToUse;
- (long long)type;
- (void)updateContentView;
- (void)updateText:(id)arg1 type:(long long)arg2;
- (id)viewForLastBaselineLayout;

@end
