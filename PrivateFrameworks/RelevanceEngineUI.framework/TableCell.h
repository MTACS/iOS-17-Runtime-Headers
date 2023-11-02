
@interface TableCell : UITableViewCell {
    REUpNextBaseCell * _contentCell;
}

@property (nonatomic, retain) REUpNextBaseCell *contentCell;

- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (id)contentCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setContentCell:(id)arg1;

@end
