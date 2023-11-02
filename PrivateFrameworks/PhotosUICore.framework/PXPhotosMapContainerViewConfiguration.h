
@interface PXPhotosMapContainerViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration> {
    bool  _enableUserTrackingButton;
    <PXMapOptionsViewDelegate> * _mapOptionsViewDelegate;
    unsigned long long  _mapStyle;
    MKMapView * _mapView;
    unsigned long long  _perspectiveButtonState;
    PXGSingleViewLayout * weakLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enableUserTrackingButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMapOptionsViewDelegate> *mapOptionsViewDelegate;
@property (nonatomic, readonly) unsigned long long mapStyle;
@property (nonatomic, readonly) MKMapView *mapView;
@property (nonatomic, readonly) unsigned long long perspectiveButtonState;
@property (readonly) Class superclass;
@property (nonatomic) PXGSingleViewLayout *weakLayout;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enableUserTrackingButton;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMapView:(id)arg1 mapOptionsViewDelegate:(id)arg2 enableUserTrackingButton:(bool)arg3 perspectiveButtonState:(unsigned long long)arg4 mapStyle:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)mapOptionsViewDelegate;
- (unsigned long long)mapStyle;
- (id)mapView;
- (unsigned long long)perspectiveButtonState;
- (void)setWeakLayout:(id)arg1;
- (id)weakLayout;

@end
