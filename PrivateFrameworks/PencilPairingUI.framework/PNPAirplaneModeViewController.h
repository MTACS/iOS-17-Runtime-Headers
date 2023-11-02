
@interface PNPAirplaneModeViewController : UIViewController <PNPAirplaneModeBluetoothViewDelegate, PNPDeviceStateConfigurable, PNPPlatterViewController, PNPViewController> {
    PNPAirplaneModeView * _airplaneModeView;
    <PNPAirplaneModeBluetoothDelegate> * _delegate;
    PNPPlatterTransitioningDelegate * _platterTransitioningDelegate;
    <PNPViewControllerAppearanceDelegate> * appearanceDelegate;
    <PNPPlatterViewControllerPlatterDelegate> * platterDelegate;
}

@property (nonatomic) <PNPViewControllerAppearanceDelegate> *appearanceDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PNPAirplaneModeBluetoothDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PNPPlatterViewControllerPlatterDelegate> *platterDelegate;
@property (nonatomic, readonly) double preferredCornerRadius;
@property (nonatomic, readonly) unsigned long long preferredEdge;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_platterContainerView;
- (id)appearanceDelegate;
- (id)delegate;
- (id)deviceState;
- (void)didTapOnBluetoothButton;
- (void)dismissPill;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)platterDelegate;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (unsigned long long)preferredEdge;
- (void)setAppearanceDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceState:(id)arg1;
- (void)setPlatterDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
