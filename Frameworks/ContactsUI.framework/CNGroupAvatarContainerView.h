
@interface CNGroupAvatarContainerView : UIView {
    CNVisualIdentityAvatarContainerView * _underlyingContainerView;
}

@property (nonatomic, retain) CNVisualIdentityAvatarContainerView *underlyingContainerView;

- (void).cxx_destruct;
- (void)setUnderlyingContainerView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)underlyingContainerView;

@end
