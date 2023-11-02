
@interface HMSoftwareUpdateDocumentationManager : NSObject <HMFLogging, HMSoftwareUpdateDocumentationAssetDelegate> {
    NSMutableDictionary * _assetCompletionPairByDigestUUID;
    _HMContext * _context;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSMutableDictionary *assetCompletionPairByDigestUUID;
@property (readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addAssetAndCompletion:(id)arg1 completion:(id /* block */)arg2;
- (id)assetCompletionPairByDigestUUID;
- (id)assetForDocumentationMetadata:(id)arg1;
- (id)assetForMetadataFromDisk:(id)arg1;
- (id)context;
- (void)didUpdateDocumentationAssetState:(id)arg1;
- (void)documentationForMetadata:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithContext:(id)arg1;
- (id)queue;
- (void)removeAssetAndCompletion:(id)arg1;
- (void)removeDocumentationMetadata:(id)arg1;
- (void)setAssetCompletionPairByDigestUUID:(id)arg1;

@end
