
@protocol PKPassDeleteAnimationControllerDelegate <NSObject>

@optional

- (void)deleteAnimationController:(PKPassDeleteAnimationController *)arg1 didComplete:(bool)arg2;
- (void)deleteAnimationControllerWillBeginDeleteAnimation:(PKPassDeleteAnimationController *)arg1;

@end
