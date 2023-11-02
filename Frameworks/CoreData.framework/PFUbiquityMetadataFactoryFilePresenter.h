
@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter> {
    PFUbiquityLocation * _presentedItemLocation;
    NSURL * _presentedItemURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)relinquishPresentedItemToReader:(id /* block */)arg1;
- (void)relinquishPresentedItemToWriter:(id /* block */)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)arg1;

@end
