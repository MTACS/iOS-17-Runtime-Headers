
@interface CPSPointsOfInterestMapControlsViewController : UIViewController <CPSButtonDelegate, CPSLinearFocusProviding> {
    CPSEntityMapButton * _centerButton;
    <CPSPointsOfInterestMapDelegate> * _mapDelegate;
    CPSEntityMapButton * _panButton;
    CPSEntityMapButton * _zoomInButton;
    CPSEntityMapButton * _zoomOutButton;
}

@property (nonatomic, retain) CPSEntityMapButton *centerButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CPSPointsOfInterestMapDelegate> *mapDelegate;
@property (nonatomic, retain) CPSEntityMapButton *panButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useRightHandDriveFocusGuide;
@property (nonatomic, retain) CPSEntityMapButton *zoomInButton;
@property (nonatomic, retain) CPSEntityMapButton *zoomOutButton;

- (void).cxx_destruct;
- (id)_linearFocusItems;
- (id)centerButton;
- (void)centerPressed:(id)arg1;
- (void)didSelectButton:(id)arg1;
- (id)initWithMapDelegate:(id)arg1;
- (id)mapDelegate;
- (id)panButton;
- (void)panPressed:(id)arg1;
- (void)setCenterButton:(id)arg1;
- (void)setMapDelegate:(id)arg1;
- (void)setPanButton:(id)arg1;
- (void)setZoomInButton:(id)arg1;
- (void)setZoomOutButton:(id)arg1;
- (void)setupViews;
- (void)viewDidLoad;
- (id)zoomInButton;
- (void)zoomInPressed:(id)arg1;
- (id)zoomOutButton;
- (void)zoomOutPressed:(id)arg1;

@end
