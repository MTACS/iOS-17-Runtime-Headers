
@protocol HKQuantitySeriesSampleBuilderTaskServerInterface <HKUnitTestingTaskServerInterface>

@required

- (void)remote_discardWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_finishSeriesWithMetadata:(void *)arg1 endDate:(void *)arg2 finalSeries:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSDictionary *, NSDate *, HKCodableQuantitySeries *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_insertQuantitySeries:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKCodableQuantitySeries *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
