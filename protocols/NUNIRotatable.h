
@protocol NUNIRotatable <NSObject>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })centerCoordinate;
- (struct CLLocationCoordinate2D { double x1; double x2; })homeCoordinate;
- (NUNIScene *)scene;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setHomeCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

@end
