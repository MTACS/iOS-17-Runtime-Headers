
@interface CPSPointOfInterestAnnotation : NSObject <MKAnnotation> {
    CPPointOfInterest * _pointOfInterest;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPPointOfInterest *pointOfInterest;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (id)initWithPointOfInterest:(id)arg1;
- (id)pointOfInterest;
- (id)subtitle;
- (id)title;

@end
