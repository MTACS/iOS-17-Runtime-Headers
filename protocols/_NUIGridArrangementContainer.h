
@protocol _NUIGridArrangementContainer <NUIArrangementContainer>

@required

- (void)populateGridArrangementCells:(void*)arg1;
- (void)populateGridArrangementDimension:(void*)arg1 withCells:(const void*)arg2 axis:(long long)arg3;

@optional

- (bool)canCancelMeasurementForCompression;
- (bool)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;

@end
