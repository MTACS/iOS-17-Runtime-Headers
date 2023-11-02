
@interface EMSeriesMapper : CMMapper

- (unsigned int)chartType;
- (struct CGColor { }*)fillColor;
- (struct CGColor { }*)markerColor;
- (unsigned int)markerType;
- (float)markerWidth;
- (float)offset;
- (struct CGColor { }*)strokeColor;
- (float)strokeWidth;
- (bool)useSecondaryAxis;
- (id)values;

@end
