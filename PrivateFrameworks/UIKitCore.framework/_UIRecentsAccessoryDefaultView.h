
@interface _UIRecentsAccessoryDefaultView : UIView {
    UILabel * _subheadLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *subheadLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_updateLabelTextColors;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setSubheadLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subheadLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
