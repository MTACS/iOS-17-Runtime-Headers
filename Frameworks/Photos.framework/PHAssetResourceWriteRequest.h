
@interface PHAssetResourceWriteRequest : NSObject <PHAssetResourceRequest, PHAssetResourceRequestDelegate> {
    PHAssetResource * _assetResource;
    id /* block */  _completionHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _completionHandlerLock;
    PHAssetResourceRequest * _dataRequest;
    <PHAssetResourceRequestDelegate> * _delegate;
    NSURL * _destinationFileURL;
    NSError * _error;
    NSDictionary * _info;
    unsigned long long  _managerID;
    PHAssetResourceRequestOptions * _options;
    int  _requestID;
    NSString * _taskIdentifier;
}

@property (nonatomic, readonly) PHAssetResource *assetResource;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PHAssetResourceRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *destinationFileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *info;
@property (nonatomic, readonly) unsigned long long managerID;
@property (nonatomic, readonly) PHAssetResourceRequestOptions *options;
@property (nonatomic, readonly) int requestID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *taskIdentifier;

- (void).cxx_destruct;
- (void)_handleDidFindFileURL:(id)arg1;
- (id)assetResource;
- (void)assetResourceRequest:(id)arg1 didFinishWithError:(id)arg2;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)delegate;
- (id)destinationFileURL;
- (id)info;
- (id)initWithAssetResource:(id)arg1 destinationFileURL:(id)arg2 options:(id)arg3 requestID:(int)arg4 managerID:(unsigned long long)arg5 delegate:(id)arg6 completionHandler:(id /* block */)arg7;
- (bool)isCancelled;
- (unsigned long long)managerID;
- (id)options;
- (int)requestID;
- (void)setErrorIfNone:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (void)startRequest;
- (id)taskIdentifier;

@end
