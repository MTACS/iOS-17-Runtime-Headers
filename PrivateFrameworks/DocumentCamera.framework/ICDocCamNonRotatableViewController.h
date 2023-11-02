
@interface ICDocCamNonRotatableViewController : UIViewController

- (bool)_allowsAutorotation;
- (bool)_canShowWhileLocked;
- (bool)prefersStatusBarHidden;
- (bool)shouldAutorotate;

@end
