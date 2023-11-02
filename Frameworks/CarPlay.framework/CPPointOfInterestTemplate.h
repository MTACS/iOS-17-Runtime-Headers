
@interface CPPointOfInterestTemplate : CPTemplate <CPBarButtonProviding, CPEntityClientTemplateDelegate, CPEntityProviding, NSSecureCoding> {
    CPPointsOfInterestEntity * _poiEntity;
    <CPPointOfInterestTemplateDelegate> * _pointOfInterestDelegate;
    unsigned long long  _selectedIndex;
}

@property (nonatomic, retain) CPBarButton *backButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *leadingNavigationBarButtons;
@property (nonatomic, retain) CPPointsOfInterestEntity *poiEntity;
@property (nonatomic) <CPPointOfInterestTemplateDelegate> *pointOfInterestDelegate;
@property (nonatomic, retain) NSArray *pointsOfInterest;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) NAFuture *templateProviderFuture;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSArray *trailingNavigationBarButtons;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_pointOfInterestWithIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (void)handleActionForControlIdentifier:(id)arg1;
- (void)handleDidSelectPointOfInterestWithIdentifier:(id)arg1;
- (void)handleMapRegionDidChange:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 pointsOfInterest:(id)arg2 selectedIndex:(unsigned long long)arg3;
- (void)performUpdate;
- (id)poiEntity;
- (id)pointOfInterestDelegate;
- (id)pointsOfInterest;
- (unsigned long long)selectedIndex;
- (void)setPoiEntity:(id)arg1;
- (void)setPointOfInterestDelegate:(id)arg1;
- (void)setPointsOfInterest:(id)arg1;
- (void)setPointsOfInterest:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
