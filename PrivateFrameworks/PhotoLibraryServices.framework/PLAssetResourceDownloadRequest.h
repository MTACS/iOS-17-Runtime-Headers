
@interface PLAssetResourceDownloadRequest : NSOperation {
    NSString * _assetUUID;
    unsigned long long  _cloudResourceType;
    NSString * _cplTaskIdentifier;
    NSError * _error;
    PLPhotoLibrary * _library;
    NSManagedObjectID * _objectID;
    id /* block */  _progressHandler;
    NSObject<OS_dispatch_queue> * _queue;
    int  _requestID;
}

@property (nonatomic, readonly) unsigned long long cloudResourceType;
@property (nonatomic, readonly) NSString *cplTaskIdentifier;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) int requestID;

- (void).cxx_destruct;
- (void)_onQueueAsync:(id /* block */)arg1;
- (void)cancel;
- (unsigned long long)cloudResourceType;
- (id)cplTaskIdentifier;
- (id)error;
- (id)initWithRequestID:(int)arg1 library:(id)arg2 queue:(id)arg3 cloudResourceType:(unsigned long long)arg4 managedObjectID:(id)arg5 progressHandler:(id /* block */)arg6;
- (void)main;
- (id)objectID;
- (int)requestID;

@end
