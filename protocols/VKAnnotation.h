
@protocol VKAnnotation <NSObject>

@required

- (struct { double x1; double x2; })coordinate;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;

@optional

- (double)course;
- (void)setCourse:(double)arg1;

@end
