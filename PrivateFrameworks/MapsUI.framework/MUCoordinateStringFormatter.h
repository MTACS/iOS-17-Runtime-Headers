
@interface MUCoordinateStringFormatter : NSObject {
    bool  _coarseLocation;
}

@property (getter=isCoarseLocation, nonatomic) bool coarseLocation;

- (id)_coordinatePartStringForValue:(double)arg1 positiveSymbol:(int)arg2 negativeSymbol:(int)arg3;
- (bool)isCoarseLocation;
- (void)setCoarseLocation:(bool)arg1;
- (id)stringFromCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

@end
