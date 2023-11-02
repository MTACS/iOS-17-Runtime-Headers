
@interface _TVRemoteAlertVisualStyle_Pad : NSObject <TVRemoteAlertVisualStyleProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)allowsSwipeToDismiss;
- (bool)allowsTapToDismiss;
- (id)backgroundMaterialView;
- (double)crossfadeDuration;
- (id)foregroundVisualEffect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForParentView:(id)arg1;
- (double)maximizedCornerRadius;
- (double)minimizedCornerRadius;
- (double)remoteHeight;
- (double)remoteWidth;

@end
