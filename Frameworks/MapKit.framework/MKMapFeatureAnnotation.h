
@interface MKMapFeatureAnnotation : NSObject <MKAnnotation> {
    long long  _featureType;
    MKIconStyle * _iconStyle;
    bool  _isHybridMap;
    VKLabelMarker * _marker;
    NSString * _pointOfInterestCategory;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long featureType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MKIconStyle *iconStyle;
@property (nonatomic, readonly) VKLabelMarker *marker;
@property (nonatomic, readonly) NSString *pointOfInterestCategory;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (void)_setProperties;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (long long)featureType;
- (id)iconStyle;
- (id)initWithVKLabelMarker:(id)arg1 isHybridMap:(bool)arg2;
- (id)marker;
- (id)pointOfInterestCategory;
- (id)subtitle;
- (id)title;

@end
