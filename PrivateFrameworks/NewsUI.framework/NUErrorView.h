
@interface NUErrorView : UIView {
    NUErrorMessage * _errorMessage;
    UILabel * _label;
    NUTrait * _labelMaxWidthTrait;
    long long  _textAlignment;
    unsigned long long  _verticalAlignment;
}

@property (nonatomic, retain) NUErrorMessage *errorMessage;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, retain) NUTrait *labelMaxWidthTrait;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long verticalAlignment;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)attributedStringForErrorMessage:(id)arg1;
- (id)errorMessage;
- (void)errorMessage:(id)arg1;
- (id)initWithErrorMessage:(id)arg1;
- (bool)isAccessibilityElement;
- (id)label;
- (id)labelMaxWidthTrait;
- (void)layoutSubviews;
- (void)setErrorMessage:(id)arg1;
- (void)setLabelMaxWidthTrait:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setVerticalAlignment:(unsigned long long)arg1;
- (long long)textAlignment;
- (unsigned long long)verticalAlignment;

@end