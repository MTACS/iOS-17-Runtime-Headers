
@interface WFTableViewHeaderFooterTextView : UITableViewHeaderFooterView {
    NSArray * _horizontalConstraints;
    double  _horizontalPadding;
    UILabel * _label;
}

@property (nonatomic, readonly) NSArray *horizontalConstraints;
@property (nonatomic) double horizontalPadding;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)horizontalConstraints;
- (double)horizontalPadding;
- (id)init;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)label;
- (void)setHorizontalPadding:(double)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
