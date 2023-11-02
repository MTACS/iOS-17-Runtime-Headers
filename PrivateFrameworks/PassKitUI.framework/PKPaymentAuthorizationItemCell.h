
@interface PKPaymentAuthorizationItemCell : PKTableViewCell {
    NSString * _accessibilityLabel;
    UIImageView * _alertView;
    UIImageView * _arrowView;
    bool  _centered;
    NSMutableArray * _constraints;
    bool  _constraintsDirty;
    UIImageView * _labelImageView;
    UILabel * _labelView;
    PKPaymentAuthorizationLayout * _layout;
    UIView * _separatorView;
    bool  _showsDisclosure;
    bool  _showsSeparator;
    NSMutableArray * _valueViews;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (getter=isCentered, nonatomic) bool centered;
@property (nonatomic, copy) NSAttributedString *label;
@property (nonatomic, copy) UIImage *labelImage;
@property (nonatomic) bool showsDisclosure;
@property (nonatomic) bool showsSeparator;

- (void).cxx_destruct;
- (id)_applyStylingToValueString:(id)arg1 defaultColor:(id)arg2;
- (void)_createSubviews;
- (id)_createValueView;
- (id)accessibilityLabel;
- (id)addValue:(id)arg1;
- (id)addValue:(id)arg1 type:(unsigned long long)arg2;
- (id)colorForValueType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2;
- (bool)isCentered;
- (id)label;
- (id)labelImage;
- (void)prepareForReuse;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setCentered:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelImage:(id)arg1;
- (void)setShowsDisclosure:(bool)arg1;
- (void)setShowsSeparator:(bool)arg1;
- (bool)showsDisclosure;
- (bool)showsSeparator;
- (void)updateConstraints;

@end
