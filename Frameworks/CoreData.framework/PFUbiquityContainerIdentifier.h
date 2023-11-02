
@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter> {
    NSString * _localPeerID;
    NSURL * _presentedItemURL;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
    bool  _usedExistingUUIDFile;
    PFUbiquityLocation * _uuidFileLocation;
    NSString * _uuidString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;

@end
