
@interface CAMInstructionLabel : UIView {
    UIActivityIndicatorView * __activityIndicatorView;
    NSAttributedString * __attributedText;
    UILabel * __label;
    NSString * __symbolSuffixName;
    <CAMInstructionLabelDelegate> * _delegate;
    long long  _style;
    NSString * _text;
    bool  _useModeDialFontSize;
}

@property (nonatomic, retain) UIActivityIndicatorView *_activityIndicatorView;
@property (nonatomic, copy) NSAttributedString *_attributedText;
@property (nonatomic, readonly) double _backgroundAlpha;
@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic, readonly) NSString *_symbolPrefixName;
@property (nonatomic, readonly) NSString *_symbolSuffixName;
@property (nonatomic, readonly) UIColor *_textColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _textInsets;
@property (nonatomic) <CAMInstructionLabelDelegate> *delegate;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) bool useModeDialFontSize;

- (void).cxx_destruct;
- (id)_activityIndicatorView;
- (id)_attributedText;
- (double)_backgroundAlpha;
- (double)_backgroundColorWhiteValue;
- (double)_defaultCornerRadius;
- (id)_label;
- (id)_symbolPrefixName;
- (id)_symbolSuffixName;
- (id)_textAttributes;
- (id)_textColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textInsets;
- (void)_updateAttributedText;
- (void)_updateLabel;
- (void)_updateLayer;
- (bool)_wantsPrefixActivityIndicatorView;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setUseModeDialFontSize:(bool)arg1;
- (void)set_activityIndicatorView:(id)arg1;
- (void)set_attributedText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (id)text;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useModeDialFontSize;

@end
