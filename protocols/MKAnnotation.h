
@protocol MKAnnotation <NSObject>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;

@optional

- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (NSString *)subtitle;
- (NSString *)title;

@end
