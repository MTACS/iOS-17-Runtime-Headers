
@protocol EMDiagnosticInfoGathererInterface <NSObject>

@required

- (void)databaseStatisticsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)fetchControllerStatusWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)gatherDiagnosticsWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, EFSandboxedURLWrapper *, void*
- (void)registerDiagnosticInfoProvider:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <EMDiagnosticInfoProvidingXPC> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <EFCancelable> *, void*

@end
