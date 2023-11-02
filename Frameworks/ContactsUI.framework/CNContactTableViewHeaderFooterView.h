
@interface CNContactTableViewHeaderFooterView : UITableViewHeaderFooterView {
    NSAttributedString * _attributedString;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSAttributedString *attributedString;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)attributedString;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (id)titleLabel;

@end
