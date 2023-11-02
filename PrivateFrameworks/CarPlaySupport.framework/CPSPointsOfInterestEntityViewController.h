
@interface CPSPointsOfInterestEntityViewController : CPSBaseEntityContentViewController {
    CPSPointsOfInterestMapViewController * _mapViewController;
}

@property (nonatomic, readonly) CPSPointsOfInterestMapViewController *mapViewController;

- (void).cxx_destruct;
- (void)didUpdateEntity:(id)arg1;
- (id)initWithEntity:(id)arg1 resourceProvider:(id)arg2;
- (id)mapViewController;
- (void)setupViewControllers;
- (bool)shouldAppearInUnsafeArea;
- (void)viewDidLoad;

@end
