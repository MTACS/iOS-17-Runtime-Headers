
@interface TabIconAndTitleView : UIView {
    long long  _alignment;
    UIImageView * _iconImageView;
    bool  _showsUnreadIndicator;
    UILabel * _titleLabel;
    SFUnreadIndicator * _unreadIndicator;
    bool  _usesAccessibilityContentSizeCategory;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;

@end
