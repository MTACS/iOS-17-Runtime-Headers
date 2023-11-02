
@interface PGMatchingCommonLocation : NSObject {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _addressCoordinate;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    double  _distance;
    NSString * _label;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } addressCoordinate;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, retain) NSString *label;

+ (id)matchingCommonLocationWithLabel:(id)arg1 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 forAddressCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg3;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })addressCoordinate;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (double)distanceBetweenCoordinates;
- (id)label;
- (void)setAddressCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setLabel:(id)arg1;

@end
