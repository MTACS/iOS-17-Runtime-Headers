
@interface ATXWatchFaceConfigurationCollector : NSObject {
    NSXPCConnection * _connection;
    ATXGenericFileBasedCache * _fileCache;
    NSObject<OS_dispatch_queue> * _outputQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _queue_watchFaces;
}

@property (nonatomic, readonly, copy) NSArray *watchFaces;

+ (id)_watchFaceFromJSONObject:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_queue_readWatchFacesFromDisk;
- (void)_queue_writeWatchFacesToDisk:(id)arg1;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)arg1;
- (id)watchFaces;

@end
