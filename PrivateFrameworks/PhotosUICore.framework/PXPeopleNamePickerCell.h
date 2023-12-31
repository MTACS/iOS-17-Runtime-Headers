
@interface PXPeopleNamePickerCell : UITableViewCell {
    NSArray * _baseConstraints;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSArray *baseConstraints;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)baseConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setBaseConstraints:(id)arg1;
- (id)titleLabel;

@end
