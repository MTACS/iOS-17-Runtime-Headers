
@interface WDMedicalRecordMultilineTextCell : UITableViewCell {
    UIView * _background;
    UILabel * _label;
    NSAttributedString * _text;
}

@property (nonatomic, retain) UIView *background;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSAttributedString *text;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)background;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)setBackground:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
