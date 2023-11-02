
@interface DMCProfileInfoTextCell : UITableViewCell {
    UILabel * _label;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, copy) NSString *text;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)attributedText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)setAttributedText:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setText:(id)arg1;
- (id)text;

@end
