
@interface SFMagicHeadMarkerView : UIView {
    double  _containerRadius;
    double  _currentOffset;
    double  _positionDegree;
}

@property (readonly) double currentOffset;

- (double)currentOffset;
- (id)initWithPositionDegree:(double)arg1 containerRadius:(double)arg2;
- (void)updateMarkerWithDegreeOffset:(double)arg1;

@end
