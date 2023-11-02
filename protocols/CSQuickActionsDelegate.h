
@protocol CSQuickActionsDelegate <NSObject>

@required

- (bool)allowsCameraPress;
- (bool)allowsFlashlight;
- (bool)allowsFlashlightInteraction;
- (void)fireActionForButton:(CSQuickActionsButton *)arg1;
- (bool)hasCamera;
- (bool)hasFlashlight;
- (bool)isPortrait;
- (void)touchBeganForButton:(CSQuickActionsButton *)arg1;
- (void)touchEndedForButton:(CSQuickActionsButton *)arg1;

@end
