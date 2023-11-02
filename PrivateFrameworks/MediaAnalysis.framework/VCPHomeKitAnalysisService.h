
@interface VCPHomeKitAnalysisService : NSObject <VCPHomeKitAnalysisClientProtocol> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSObject<OS_dispatch_queue> * _managementQueue;
    int  _nextRequestID;
    NSMutableDictionary * _progressBlocks;
}

+ (id)analysisService;

- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)cancelRequest:(int)arg1;
- (id)connection;
- (id)init;
- (void)reportProgress:(double)arg1 forRequest:(int)arg2;
- (int)requestAnalysis:(unsigned long long)arg1 ofAssetData:(id)arg2 withProperties:(id)arg3 progressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (int)requestAnalysis:(unsigned long long)arg1 ofAssetSurface:(id)arg2 withProperties:(id)arg3 progressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (int)requestResidentMaintenanceWithOptions:(id)arg1 andCompletionHandler:(id /* block */)arg2;

@end
