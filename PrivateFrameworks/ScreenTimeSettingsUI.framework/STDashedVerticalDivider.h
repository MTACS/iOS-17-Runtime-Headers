
@interface STDashedVerticalDivider : UIView {
    UIImageView * _dashedLine;
    NSLayoutXAxisAnchor * _dashedLineCenterXAnchor;
    UILabel * _label;
    NSLayoutConstraint * _labelLeftConstraint;
    NSString * _labelText;
    NSLayoutYAxisAnchor * _labelTopAnchor;
    bool  _selected;
}

@property (nonatomic, retain) UIImageView *dashedLine;
@property (readonly) NSLayoutXAxisAnchor *dashedLineCenterXAnchor;
@property (readonly) UIImage *dashedLineImage;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSLayoutConstraint *labelLeftConstraint;
@property (nonatomic, copy) NSString *labelText;
@property (readonly) NSLayoutYAxisAnchor *labelTopAnchor;
@property (getter=isSelected, nonatomic) bool selected;

- (void).cxx_destruct;
- (id)dashedLine;
- (id)dashedLineCenterXAnchor;
- (id)dashedLineImage;
- (id)initWithTintColor:(id)arg1;
- (bool)isSelected;
- (id)label;
- (id)labelLeftConstraint;
- (id)labelText;
- (id)labelTopAnchor;
- (void)setDashedLine:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelLeftConstraint:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
