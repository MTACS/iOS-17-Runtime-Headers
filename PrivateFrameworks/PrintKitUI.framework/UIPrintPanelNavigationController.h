
@interface UIPrintPanelNavigationController : UINavigationController {
    <UIPrintPanelAppearanceDelegate> * _appearanceDelegate;
    UIPrintOptionsTableViewController * _printOptionsTableViewController;
}

@property (nonatomic) <UIPrintPanelAppearanceDelegate> *appearanceDelegate;
@property (nonatomic) UIPrintOptionsTableViewController *printOptionsTableViewController;

+ (bool)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (void)_presentationControllerDidDismiss:(id)arg1;
- (id)appearanceDelegate;
- (id)initWithPrintOptionsTableViewController:(id)arg1 rootViewController:(id)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (id)printOptionsTableViewController;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setAppearanceDelegate:(id)arg1;
- (void)setPrintOptionsTableViewController:(id)arg1;

@end
