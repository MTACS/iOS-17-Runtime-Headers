
@interface PFCloudKitExporter : NSObject {
    NSObject<PFCloudKitExporterDelegate> * _delegate;
    id /* block */  _exportCompletionBlock;
    PFCloudKitExportContext * _exportContext;
    PFCloudKitStoreMonitor * _monitor;
    NSMutableDictionary * _operationIDToResult;
    PFCloudKitExporterOptions * _options;
    NSCloudKitMirroringRequest * _request;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 request:(id)arg2 monitor:(id)arg3 workQueue:(id)arg4;

@end
