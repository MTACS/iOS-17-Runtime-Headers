
@interface SBHPortaledShadowedWidgetView : SBHShadowedWidgetView

@property (nonatomic, retain) _UIPortalView *contentView;
@property (nonatomic) bool hidesSourceViews;
@property (nonatomic, retain) _UIPortalView *shadowView;

- (bool)hidesSourceViews;
- (id)initWithContentView:(id)arg1 shadowView:(id)arg2 perspectiveEnabled:(bool)arg3;
- (void)setHidesSourceViews:(bool)arg1;

@end
