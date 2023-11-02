
@interface PUPhotosSharingOptionView : UICollectionReusableView <PXUIAssetBadgeViewDelegate> {
    SEL  _action;
    bool  _interactive;
    id  _target;
    PXUIAssetBadgeView * _toggleGlyphButton;
    bool  _toggled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInteractive, nonatomic) bool interactive;
@property (readonly) Class superclass;
@property (getter=isToggled, nonatomic) bool toggled;

- (void).cxx_destruct;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isInteractive;
- (bool)isToggled;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setInteractive:(bool)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setToggled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
