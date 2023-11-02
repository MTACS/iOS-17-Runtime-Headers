
@protocol _NUIFlowArrangementContainer <NUIArrangementContainer>

@required

- (long long)alignmentForCell:(const struct _NUIFlowArrangementCell { id x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5 : 8; unsigned int x6 : 8; }*)arg1 inAxis:(long long)arg2;
- (void)populateFlowArrangementCells:(void*)arg1;

@optional

- (bool)canCancelMeasurementForCompression;
- (long long)distributionForRowAtIndex:(long long)arg1 ofTotalRowCount:(long long)arg2 withCells:(const void*)arg3;
- (struct CGSize { double x1; double x2; })fittingSizeForCell:(const struct _NUIFlowArrangementCell { id x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5 : 8; unsigned int x6 : 8; }*)arg1 withProposedSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;

@end
