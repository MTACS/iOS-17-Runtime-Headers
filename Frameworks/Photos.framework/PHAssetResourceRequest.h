
@interface PHAssetResourceRequest : NSObject <PHAssetResourceRequest> {
    PHAssetResource * _assetResource;
    unsigned long long  _availabilityChangeRetryCount;
    long long  _availabilityPendingCount;
    PHProgressContainerForRetryableRequest * _availabilityRequestProgressContainer;
    bool  _cancelled;
    id /* block */  _completionHandler;
    id /* block */  _dataHandler;
    <PHAssetResourceRequestDelegate> * _delegate;
    long long  _fileStreamPendingCount;
    NSProgress * _fileStreamProgress;
    NSDictionary * _info;
    bool  _loadURLOnly;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _managerID;
    PHAssetResourceRequestOptions * _options;
    PLProgressFollower * _progressFollower;
    int  _requestID;
    bool  _synchronous;
    NSString * _taskIdentifier;
    NSProgress * _totalProgress;
    id /* block */  _urlReceivedHandler;
}

@property (nonatomic, readonly) PHAssetResource *assetResource;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ dataHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PHAssetResourceRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *info;
@property (nonatomic) bool loadURLOnly;
@property (nonatomic, readonly) unsigned long long managerID;
@property (nonatomic, readonly) PHAssetResourceRequestOptions *options;
@property (nonatomic, readonly) int requestID;
@property (readonly) Class superclass;
@property (getter=isSynchronous, nonatomic) bool synchronous;
@property (nonatomic, copy) NSString *taskIdentifier;
@property (nonatomic, copy) id /* block */ urlReceivedHandler;

+ (id)_globalFileIOQueue;

- (void).cxx_destruct;
- (void)_assetsdMakeAvailableRequestRepliedWithSuccess:(bool)arg1 url:(id)arg2 data:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)_finishAsyncWithFileURL:(id)arg1 didBecomeAvailable:(bool)arg2 error:(id)arg3;
- (void)_finishWithFileURL:(id)arg1 didBecomeAvailable:(bool)arg2 error:(id)arg3;
- (id)_initialValidationError;
- (id)_loadMediaMetadataFromDatabaseWithPhotoLibrary:(id)arg1 type:(id*)arg2 error:(id*)arg3;
- (void)_setAvailabilityProgress:(id)arg1;
- (void)_setupFilestreamProgressIfNeeded;
- (void)_setupTotalProgressIfNeeded;
- (long long)_streamDataAtURL:(id)arg1 error:(id*)arg2 dataHandler:(id /* block */)arg3;
- (void)_updateAssetResourceWithLocallyAvailable:(bool)arg1 fileURL:(id)arg2;
- (id)assetResource;
- (void)cancel;
- (id /* block */)completionHandler;
- (id /* block */)dataHandler;
- (void)dealloc;
- (id)delegate;
- (id)info;
- (id)initWithAssetResource:(id)arg1 options:(id)arg2 requestID:(int)arg3 managerID:(unsigned long long)arg4 delegate:(id)arg5 urlReceivedHandler:(id /* block */)arg6 dataReceivedHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (bool)isCancelled;
- (bool)isSynchronous;
- (bool)loadURLOnly;
- (unsigned long long)managerID;
- (id)options;
- (int)requestID;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDataHandler:(id /* block */)arg1;
- (void)setLoadURLOnly:(bool)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (void)setUrlReceivedHandler:(id /* block */)arg1;
- (void)startRequest;
- (id)taskIdentifier;
- (id /* block */)urlReceivedHandler;

@end
