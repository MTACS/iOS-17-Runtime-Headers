
@interface CPSLabeledValueView : UIView {
    UILabel * _label;
    UILabel * _valueText;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) UILabel *valueText;

- (void).cxx_destruct;
- (id)init;
- (id)label;
- (void)setTextColor:(id)arg1;
- (id)valueText;

@end
