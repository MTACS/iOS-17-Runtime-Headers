
@protocol PHAdjustmentDataRequestDelegate <PHMediaRequestDelegate>

@required

- (void)adjustmentDataRequest:(PHAdjustmentDataRequest *)arg1 didReportProgress:(double)arg2 completed:(bool)arg3 error:(NSError *)arg4;

@end
