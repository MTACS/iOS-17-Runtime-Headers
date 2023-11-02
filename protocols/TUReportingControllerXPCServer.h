
@protocol TUReportingControllerXPCServer <NSObject>

@required

- (oneway void)didCleanUpForStream:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)didReceiveResultsForStream:(void *)arg1 withTransactionID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)didStartRequestForStream:(void *)arg1 withTransactionID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)registeredStream:(void *)arg1 withAvailability:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: long long, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
