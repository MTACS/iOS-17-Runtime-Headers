
@protocol CSMagSafeAccessoryStatusProviding <NSObject>

@required

- (bool)isAccessoryAnimationAllowed;
- (CSMagSafeAccessory *)lastAttachedAccessory;
- (CSMagSafeAccessory *)lastDetachedAccessory;

@end
