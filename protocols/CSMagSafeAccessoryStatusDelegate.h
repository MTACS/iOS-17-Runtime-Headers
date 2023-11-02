
@protocol CSMagSafeAccessoryStatusDelegate <NSObject>

@required

- (void)accessoryAnimationStatusChanged:(bool)arg1;
- (void)accessoryAttached:(CSMagSafeAccessory *)arg1;
- (void)accessoryDetached:(CSMagSafeAccessory *)arg1;

@end
