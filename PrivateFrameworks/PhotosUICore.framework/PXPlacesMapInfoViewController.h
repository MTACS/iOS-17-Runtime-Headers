
@interface PXPlacesMapInfoViewController : UIViewController {
    PXPlacesMapModeController * _mapModeController;
}

@property (nonatomic, readonly) PXPlacesMapModeController *mapModeController;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapModeController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)mapModeController;
- (void)mapTypeChanged:(id)arg1;
- (void)tapped3dButton:(id)arg1;
- (void)tappedDimView:(id)arg1;
- (void)tappedDone:(id)arg1;
- (void)viewDidLoad;

@end
