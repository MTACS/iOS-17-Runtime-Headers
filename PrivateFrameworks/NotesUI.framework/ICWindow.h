
@interface ICWindow : UIWindow {
    NSString * _toolPickerIdentifier;
    ICViewControllerManager * _viewControllerManager;
    NSString * _windowIdentifier;
}

@property (nonatomic, readonly) UIViewController *ic_topmostPresentedViewController;
@property (nonatomic, readonly) ICViewControllerManager *ic_viewControllerManager;
@property (nonatomic, retain) NSString *toolPickerIdentifier;
@property (nonatomic, retain) ICViewControllerManager *viewControllerManager;
@property (nonatomic, retain) NSString *windowIdentifier;

- (void).cxx_destruct;
- (bool)accessibilityElementsHidden;
- (id)ic_topmostPresentedViewController;
- (id)ic_viewControllerManager;
- (id)initWithWindowScene:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setToolPickerIdentifier:(id)arg1;
- (void)setViewControllerManager:(id)arg1;
- (void)setWindowIdentifier:(id)arg1;
- (id)toolPickerIdentifier;
- (id)viewControllerManager;
- (id)windowIdentifier;

@end
