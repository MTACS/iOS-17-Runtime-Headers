
@interface PUImportOneUpCellBadgeView : UICollectionReusableView {
    UIView * _badgeContainerView;
    long long  _badgeType;
    UIView * _badgeView;
    bool  _inUpdateBlock;
    bool  _needsBadgeUpdate;
    bool  _selectable;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) UIView *badgeContainerView;
@property (nonatomic) long long badgeType;
@property (nonatomic, retain) UIView *badgeView;
@property (nonatomic) bool inUpdateBlock;
@property (nonatomic) bool needsBadgeUpdate;
@property (nonatomic) bool selectable;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (void)_createSpinnerIfNecessary;
- (id)badgeContainerView;
- (long long)badgeType;
- (id)badgeView;
- (bool)inUpdateBlock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)needsBadgeUpdate;
- (void)performBadgeUpdates:(id /* block */)arg1;
- (void)prepareForReuse;
- (bool)selectable;
- (void)setBadgeContainerView:(id)arg1;
- (void)setBadgeType:(long long)arg1;
- (void)setBadgeView:(id)arg1;
- (void)setInUpdateBlock:(bool)arg1;
- (void)setNeedsBadgeUpdate;
- (void)setNeedsBadgeUpdate:(bool)arg1;
- (void)setSelectable:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (id)spinner;
- (void)updateBadgeUIIfNeeded;

@end
