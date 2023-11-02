
@interface NSCloudKitMirroringRequest : NSPersistentStoreRequest {
    CKSchedulerActivity * _activity;
    NSMutableArray * _containerBlocks;
    bool  _deferredByBackgroundTimeout;
    bool  _isContainerRequest;
    NSCloudKitMirroringRequestOptions * _options;
    id /* block */  _requestCompletionBlock;
    NSUUID * _requestIdentifier;
}

@property (nonatomic, readonly, copy) NSCloudKitMirroringRequestOptions *options;
@property (nonatomic, readonly, copy) id /* block */ requestCompletionBlock;
@property (nonatomic, readonly) NSUUID *requestIdentifier;

+ (id)allRequestClasses;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithActivity:(id)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)initWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)options;
- (id /* block */)requestCompletionBlock;
- (id)requestIdentifier;
- (unsigned long long)requestType;
- (bool)validateForUseWithStore:(id)arg1 error:(id*)arg2;

@end
