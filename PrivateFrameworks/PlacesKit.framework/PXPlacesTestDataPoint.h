
@interface PXPlacesTestDataPoint : NSObject <PXPlacesGeotaggable> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct CGImage { }*image;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compareTo:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (struct CGImage { }*)image;
- (id)initWithName:(id)arg1 location:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (id)name;

@end
