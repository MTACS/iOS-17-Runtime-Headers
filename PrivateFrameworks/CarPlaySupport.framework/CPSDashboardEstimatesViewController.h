
@interface CPSDashboardEstimatesViewController : UIViewController <CPSNavigationDisplaying> {
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    CPSDashboardEstimatesView * _estimatesView;
    NSLayoutConstraint * _platterBottomConstraint;
    UIView * _platterView;
    <CPSSafeAreaDelegate> * _safeAreaDelegate;
    double  _shadowRadius;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) CPSDashboardEstimatesView *estimatesView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *platterBottomConstraint;
@property (nonatomic, readonly) UIView *platterView;
@property (nonatomic) <CPSSafeAreaDelegate> *safeAreaDelegate;
@property (nonatomic) double shadowRadius;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)estimatesView;
- (id)init;
- (id)initWithShadowRadius:(double)arg1 edgeInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)navigator:(id)arg1 didEndTrip:(bool)arg2;
- (id)platterBottomConstraint;
- (id)platterView;
- (id)safeAreaDelegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setEdgeInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEstimatesView:(id)arg1;
- (void)setPlatterBottomConstraint:(id)arg1;
- (void)setSafeAreaDelegate:(id)arg1;
- (void)setShadowRadius:(double)arg1;
- (double)shadowRadius;
- (void)updateTripEstimates:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
