
@interface CPSPanButton : UIButton <UIGestureRecognizerDelegate> {
    UIView * _backgroundView;
    long long  _direction;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupPanImages;
- (void)_updateColors;
- (id)backgroundView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (long long)direction;
- (id)initWithDirection:(long long)arg1;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
