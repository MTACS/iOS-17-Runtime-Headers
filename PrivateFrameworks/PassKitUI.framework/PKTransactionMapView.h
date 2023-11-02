
@interface PKTransactionMapView : UIView <MKMapViewDelegate> {
    CLLocation * _endStationLocation;
    MKMapView * _internalMapView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastLaidBounds;
    _MKLocationShifter * _locationShifter;
    PKMerchant * _merchant;
    CLLocation * _preferredLocation;
    bool  _showsMerchantName;
    CLLocation * _startStationLocation;
    PKPaymentTransaction * _transaction;
    bool  _usesDarkAppearance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKMerchant *merchant;
@property (nonatomic) bool showsMerchantName;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaymentTransaction *transaction;
@property (nonatomic) bool usesDarkAppearance;

- (void).cxx_destruct;
- (id)_annotationsForTransaction:(id)arg1;
- (void)_centerMapAnimated:(bool)arg1;
- (void)_createAnnotationsForTransaction:(id)arg1;
- (id)_locationShifter;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectForTransaction:(id)arg1;
- (void)_shiftLocationIfNeeded:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateLocations;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)merchant;
- (void)setMerchant:(id)arg1;
- (void)setShowsMerchantName:(bool)arg1;
- (void)setTransaction:(id)arg1;
- (void)setUsesDarkAppearance:(bool)arg1;
- (bool)showsMerchantName;
- (id)transaction;
- (bool)usesDarkAppearance;

@end
