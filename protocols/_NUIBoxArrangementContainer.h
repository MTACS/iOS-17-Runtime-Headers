
@protocol _NUIBoxArrangementContainer <NUIArrangementContainer>

@required

- (void)populateBoxArrangementCells:(void*)arg1;

@optional

- (bool)canCancelMeasurementForCompression;
- (bool)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;

@end
