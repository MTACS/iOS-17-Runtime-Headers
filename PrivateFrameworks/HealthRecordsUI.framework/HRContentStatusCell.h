
@interface HRContentStatusCell : UITableViewCell {
    void spinner;
    void titleLabel;
}

@property (nonatomic, readonly) UIActivityIndicatorView *spinner;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)spinner;
- (id)titleLabel;

@end
