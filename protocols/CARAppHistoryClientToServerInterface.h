
@protocol CARAppHistoryClientToServerInterface <NSObject>

@required

- (oneway void)fetchSessionEchoContextStatesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__NSString__> *, NSError *, void*
- (oneway void)fetchSessionFeatureKeysWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__NSString__> *, NSError *, void*
- (oneway void)fetchSessionUIContextStatesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__NSString__> *, NSError *, void*
- (oneway void)fetchUIContextStatesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__NSString__> *, NSError *, void*
- (oneway void)serviceFetchInstrumentClusterURLs:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__NSString__> *, NSError *, void*
- (oneway void)setAnalyticsValues:(void *)arg1 onEvent:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)setSessionFeatureKeys:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray<__NSString__> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*

@end
