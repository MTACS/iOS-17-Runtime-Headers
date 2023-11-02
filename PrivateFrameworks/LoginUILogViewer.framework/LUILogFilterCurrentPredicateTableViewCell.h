
@interface LUILogFilterCurrentPredicateTableViewCell : UITableViewCell {
    <LUILogFilterCurrentPredicateTableViewCellDelegate> * _delegate;
    UIButton * _deleteButton;
    UILabel * _titleLabel;
}

@property (nonatomic) <LUILogFilterCurrentPredicateTableViewCellDelegate> *delegate;
@property (nonatomic, readonly) UIButton *deleteButton;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_createDeleteButton;
- (id)_createTitleLabel;
- (void)_deleteButtonTapped:(id)arg1;
- (void)_setupUI;
- (id)delegate;
- (id)deleteButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;

@end
