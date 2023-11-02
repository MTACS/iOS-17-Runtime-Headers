
@interface PKPrinterTool_Client : NSObject {
    NSXPCConnection * _conn;
    NSFileHandle * _streamHandle;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)browseInfoForPrinter:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelJob:(int)arg1;
- (void)endpointResolve:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)getJobAttributesForPrintdJobID:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)getLastUsedPrintersForCurrentNetworkCompletionHandler:(id /* block */)arg1;
- (id)getResponseForCurrentRequest:(bool)arg1;
- (void)getResponseForCurrentRequest:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (void)printerTool_checkAccessState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)printerTool_getPrinterDescription:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)printerTool_identifyPrinter:(id)arg1 message:(id)arg2 actions:(id)arg3;
- (void)printerTool_queryPrinter:(id)arg1 attributes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)printerTool_realPathForTmp:(id /* block */)arg1;
- (void)printerTool_removeKeychainItem:(id)arg1;
- (id)ptConn;
- (bool)sendPayloadForCurrentRequest:(id)arg1;
- (void)setLastUsedPrintersForCurrentNetwork:(id)arg1;
- (bool)startStreamingRequest:(id)arg1;
- (void)startStreamingRequest:(id)arg1 completionHandler:(id /* block */)arg2;

@end
