
@protocol CLGyroCalibrationDatabaseProtocol <CLNotifierServiceProtocol>

@required

- (void)doAsync:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, void*
- (void)doAsync:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, void*, id /* block */, void*, void, id /* block */, void*
- (void)dumpDatabase:(void *)arg1 onCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)getBiasFitWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, struct { int x1; double x2; double x3; float x4; float x5; union { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_6_1_1; struct { bool x_2_2_1; BOOL x_2_2_2[282]; } x_6_1_2; } x6; }, void*
- (void)startFactoryGYTT;
- (bool)syncgetBiasFit:(struct { int x1; double x2; double x3; float x4; float x5; union { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_6_1_1; struct { bool x_2_2_1; BOOL x_2_2_2[282]; } x_6_1_2; } x6; }*)arg1;
- (bool)syncgetDoSync:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, void*
- (bool)syncgetGyroStatsWithBias:(struct { float x1; float x2; float x3; }*)arg1 slope:(struct { float x1; float x2; float x3; }*)arg2 l2Error:(struct { float x1; float x2; float x3; }*)arg3 isDynamic:(bool)arg4 deltaBias:(struct { float x1; float x2; float x3; }*)arg5 deltaSlope:(struct { float x1; float x2; float x3; }*)arg6 deltaError:(struct { float x1; float x2; float x3; }*)arg7 isDeltaDynamic:(bool)arg8;
- (bool)syncgetInsertWithBias:(const struct { float x1; float x2; float x3; }*)arg1 variance:(const struct { float x1; float x2; float x3; }*)arg2 temperature:(float)arg3 timestamp:(double)arg4;
- (double)syncgetLastMiniCalibration;
- (int)syncgetMaxDynamicTemperature;
- (int)syncgetNonFactoryRoundCount;
- (int)syncgetNumTemperatures;
- (bool)syncgetSupportsMiniCalibration;
- (bool)syncgetWipeDatabase;

@end
