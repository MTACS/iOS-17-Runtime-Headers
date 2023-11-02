
@protocol BKSDisplayRenderOverlayDismissAction <NSObject>

@required

- (void)dismiss;
- (void)dismissWithAnimation:(BSAnimationSettings *)arg1;
- (BKSDisplayRenderOverlayDescriptor *)overlayDescriptor;

@end
