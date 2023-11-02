
@protocol HKChartCacheDataSource <NSObject>

@required

- (unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(HKDisplayType *)arg2;
- (id /* block */)mappingFunctionForContext:(void *)arg1; // needs 1 arg types, found 6: id /* block */, id, void*, id, SEL, id
- (HKChartCacheFetchOperation *)operationForIdentifier:(void *)arg1 priorityDelegate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: <NSCopying> *, <HKChartCachePriorityDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKChartCacheFetchOperation *, id, NSError *, void*
- (NSDateComponents *)statisticsIntervalForTimeScope:(long long)arg1 resolution:(long long)arg2 displayType:(HKDisplayType *)arg3;

@end
