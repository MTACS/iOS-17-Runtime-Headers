
@interface SBLiveIconImageView : SBIconImageView

- (bool)isAnimationAllowed;
- (void)prepareForReuse;
- (void)setIcon:(id)arg1 location:(id)arg2 animated:(bool)arg3;
- (void)setPaused:(bool)arg1;
- (id)snapshot;
- (void)updateAnimatingState;
- (void)updateImageAnimated:(bool)arg1;
- (void)updateUnanimated;

@end
