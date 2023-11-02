
@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter> {
    NSString * _localPeerID;
    NSMutableDictionary * _locationToSafeSaveFile;
    NSMutableDictionary * _locationToStatus;
    NSMutableArray * _pendingURLs;
    int  _pendingURLsLock;
    NSURL * _presentedItemURL;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _scheduledProcessingBlock;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (void)exporterDidMoveLog:(id)arg1;
- (id)init;
- (id)initWithUbiquityRootLocation:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 processingQueue:(id)arg4;
- (void)logImportWasCancelled:(id)arg1;
- (void)logWasExported:(id)arg1;
- (void)logWasImported:(id)arg1;
- (void)logsWereScheduled:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)printStatus:(id)arg1;
- (void)relinquishPresentedItemToReader:(id /* block */)arg1;
- (void)relinquishPresentedItemToWriter:(id /* block */)arg1;
- (void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)arg1;

@end
