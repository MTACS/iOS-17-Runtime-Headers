
@interface SFDialogTextView : UIView {
    CAGradientLayer * _bottomGradient;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    NSString * _message;
    UIFont * _messageFont;
    UIFont * _messageFontWithTitle;
    double  _preferredMaxLayoutWidth;
    UITextView * _textView;
    NSString * _title;
    UIFont * _titleFont;
    NSParagraphStyle * _titleParagraphStyle;
    CAGradientLayer * _topGradient;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;

- (void).cxx_destruct;
- (void)_updateFontStyling;
- (void)_updateText;
- (void)_updateTextContainerInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)flashScrollIndicators;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMessage:(id)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setTitle:(id)arg1;

@end
