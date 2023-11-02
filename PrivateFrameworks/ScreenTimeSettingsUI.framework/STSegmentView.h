
@interface STSegmentView : UIView {
    NSLayoutConstraint * _detailImageHeightConstraint;
    UIImageView * _detailImageView;
    NSLayoutConstraint * _detailImageWidthConstraint;
    UILabel * _detailLabel;
    NSLayoutConstraint * _detailLabelLeadingConstraint;
    STSegmentItem * _item;
    UILabel * _titleLabel;
    bool  _useVibrancy;
}

@property (nonatomic, readonly) NSLayoutConstraint *detailImageHeightConstraint;
@property (nonatomic, readonly) UIImageView *detailImageView;
@property (nonatomic, readonly) NSLayoutConstraint *detailImageWidthConstraint;
@property (nonatomic, readonly) UILabel *detailLabel;
@property (nonatomic, readonly) NSLayoutConstraint *detailLabelLeadingConstraint;
@property (nonatomic, retain) STSegmentItem *item;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (readonly) bool useVibrancy;

- (void).cxx_destruct;
- (id)detailImageHeightConstraint;
- (id)detailImageView;
- (id)detailImageWidthConstraint;
- (id)detailLabel;
- (id)detailLabelLeadingConstraint;
- (id)initWithItem:(id)arg1 useVibrancy:(bool)arg2 truncateLabels:(bool)arg3;
- (id)item;
- (void)setItem:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useVibrancy;

@end
