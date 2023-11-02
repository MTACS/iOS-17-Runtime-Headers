
@protocol VKPuckAnimatorTarget <NSObject>

@required

- (struct CGSize { double x1; double x2; })collisionSize;
- (double)presentationCourse;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;

@end
