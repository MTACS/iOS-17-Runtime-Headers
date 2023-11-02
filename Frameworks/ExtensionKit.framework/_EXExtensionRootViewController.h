
@interface _EXExtensionRootViewController : UIViewController {
    UIViewController * _embededViewController;
}

@property (nonatomic, retain) UIViewController *contentViewController;
@property (retain) UIViewController *embededViewController;

- (void).cxx_destruct;
- (id)contentViewController;
- (void)embedViewController:(id)arg1;
- (id)embededViewController;
- (void)setContentViewController:(id)arg1;
- (void)setEmbededViewController:(id)arg1;

@end
