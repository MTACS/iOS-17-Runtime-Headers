
@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacementWrapper <NSSecureCoding>

+ (id)placementWithPlacement:(id)arg1;
+ (bool)supportsSecureCoding;

- (double)alpha;
- (id)applicatorInfoForOwner:(id)arg1;
- (bool)inputViewWillAppear;
- (bool)isInteractive;
- (bool)isUndocked;
- (bool)isVisible;
- (bool)showsInputOrAssistantViews;
- (bool)showsInputViews;
- (bool)showsKeyboard;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
