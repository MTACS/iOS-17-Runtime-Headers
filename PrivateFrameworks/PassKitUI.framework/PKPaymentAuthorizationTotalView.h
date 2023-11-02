
@interface PKPaymentAuthorizationTotalView : UIView {
    bool  _isPendingTotal;
    NSLayoutConstraint * _labelBaselineConstraint;
    long long  _labelNumberOfLines;
    NSLayoutConstraint * _labelValueRelationConstraint;
    NSLayoutConstraint * _labelValueRelationLargeTextConstraint;
    UILabel * _labelView;
    PKPaymentAuthorizationLayout * _layout;
    NSLayoutConstraint * _leftMarginConstraint;
    bool  _processing;
    UIActivityIndicatorView * _processingIndicator;
    NSLayoutConstraint * _rightMarginConstraint;
    NSLayoutConstraint * _rightMarginLargeTextConstraint;
    UIView * _separatorView;
    bool  _showsBoldValueText;
    long long  _style;
    NSLayoutConstraint * _valueBaselineConstraint;
    NSLayoutConstraint * _valueBaselineLargeTextConstraint;
    UILabel * _valueView;
}

@property (nonatomic) bool isPendingTotal;
@property (nonatomic) long long labelNumberOfLines;
@property (nonatomic, retain) PKPaymentAuthorizationLayout *layout;
@property (getter=isProcessing, nonatomic) bool processing;
@property (nonatomic) bool showsBoldValueText;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (void)_createSubviews;
- (double)_initialLeading;
- (id)_labelAttributedStringWithString:(id)arg1;
- (void)_prepareConstraints;
- (bool)_shouldUseLargeTextLayout;
- (id)_valueAttributedStringWithString:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (bool)isPendingTotal;
- (bool)isProcessing;
- (long long)labelNumberOfLines;
- (id)layout;
- (void)setIsPendingTotal:(bool)arg1;
- (void)setLabel:(id)arg1 value:(id)arg2;
- (void)setLabelNumberOfLines:(long long)arg1;
- (void)setLayout:(id)arg1;
- (void)setProcessing:(bool)arg1;
- (void)setShowsBoldValueText:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (bool)showsBoldValueText;
- (long long)style;
- (void)updateConstraints;

@end
