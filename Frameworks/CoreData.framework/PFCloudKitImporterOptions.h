
@interface PFCloudKitImporterOptions : NSObject <NSCopying> {
    NSURL * _assetStorageURL;
    CKDatabase * _database;
    PFCloudKitStoreMonitor * _monitor;
    NSCloudKitMirroringDelegateOptions * _options;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 monitor:(id)arg2 assetStorageURL:(id)arg3 workQueue:(id)arg4 andDatabase:(id)arg5;

@end
