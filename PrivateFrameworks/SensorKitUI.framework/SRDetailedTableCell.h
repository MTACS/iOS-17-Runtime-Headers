
@interface SRDetailedTableCell : UITableViewCell {
    UILabel * _detailLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UILabel *detailLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void)dealloc;
- (id)detailLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)titleLabel;

@end
