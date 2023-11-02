
@protocol _UILAPropertySource <NSObject>

@required

- (void)_invalidateBaselineConstraint:(NSLayoutConstraint *)arg1;
- (NSSet *)_newlyHiddenItems;
- (NSSet *)_newlyUnhiddenItems;
- (long long)axis;
- (NSSet *)invalidBaselineConstraints;
- (bool)layoutFillsCanvas;
- (bool)layoutUsesCanvasMarginsWhenFilling;
- (void)setAxis:(long long)arg1;
- (void)setLayoutFillsCanvas:(bool)arg1;
- (void)setLayoutUsesCanvasMarginsWhenFilling:(bool)arg1;

@end
