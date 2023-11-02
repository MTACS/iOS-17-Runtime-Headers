
@protocol GEOAPServiceProxy <NSObject>

@required

- (void)flushEvalData;
- (void)reportDailyUsageCountType:(void *)arg1 usageString:(void *)arg2 usageBool:(void *)arg3 appId:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: int, NSString *, NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reportLogMsg:(void *)arg1 uploadBatchId:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)runAggregationTasks;
- (void)setEvalMode:(bool)arg1;
- (void)showEvalDataWithVisitorBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSData *, NSDate *, void*

@end
