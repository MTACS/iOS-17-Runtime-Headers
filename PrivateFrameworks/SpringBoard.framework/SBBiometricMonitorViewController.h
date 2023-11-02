
@interface SBBiometricMonitorViewController : UIViewController

@property (nonatomic, readonly, retain) SBBiometricMonitorView *monitorView;

- (void)loadView;
- (id)monitorView;

@end
