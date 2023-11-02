
@interface HULockupCollectionViewCell : UICollectionViewCell <HUCellProtocol, HUCollectionViewCellSeparatorsProtocol, HULockupInternalResizingDelegate> {
    UIView * _bottomSeparatorView;
    HULockupView * _lockupView;
    <HUResizableCellDelegate> * _resizingDelegate;
    UIView * _topSeparatorView;
}

@property (nonatomic, readonly) UIView *bottomSeparatorView;
@property (nonatomic) bool bottomSeparatorVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, readonly) HULockupView *lockupView;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *topSeparatorView;
@property (nonatomic) bool topSeparatorVisible;

- (void).cxx_destruct;
- (id)bottomSeparatorView;
- (bool)bottomSeparatorVisible;
- (void)didUpdateRequiredHeightForLockupView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutSubviews;
- (id)lockupView;
- (Class)lockupViewClass;
- (void)prepareForReuse;
- (id)resizingDelegate;
- (void)setBottomSeparatorVisible:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setResizingDelegate:(id)arg1;
- (void)setTopSeparatorVisible:(bool)arg1;
- (id)topSeparatorView;
- (bool)topSeparatorVisible;
- (void)updateUIWithAnimation:(bool)arg1;

@end
