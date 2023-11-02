
@protocol DARemoteRunnerServerProtocol <NSObject>

@required

- (void)cancelTestWithID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*
- (void)createRemoteRunnerDeviceWithSerialNumber:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*
- (void)destroyRemoteRunnerDeviceWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*
- (void)getReportWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getReportWithComponents:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)ping:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)runTestWithID:(void *)arg1 name:(void *)arg2 description:(void *)arg3 parameters:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSNumber *, NSString *, NSString *, DKDiagnosticParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DKDiagnosticResult *, NSError *, void*

@end
