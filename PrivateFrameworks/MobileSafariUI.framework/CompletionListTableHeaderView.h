
@interface CompletionListTableHeaderView : UITableViewHeaderFooterView {
    UIView * _separator;
    bool  _showsSeparator;
}

@property (nonatomic) bool showsSeparator;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setShowsSeparator:(bool)arg1;
- (bool)showsSeparator;

@end
