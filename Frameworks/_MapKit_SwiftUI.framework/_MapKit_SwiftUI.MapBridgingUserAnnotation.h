
@interface _MapKit_SwiftUI.MapBridgingUserAnnotation : NSObject <MKAnnotation> {
    void coordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)init;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

@end
