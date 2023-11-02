
@interface PHImportAssetFilePresenter : NSObject <NSFilePresenter> {
    NSOperationQueue * _presentedItemOperationQueue;
    NSURL * _presentedItemURL;
    NSURL * _primaryPresentedItemURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPrimaryURL:(id)arg1 presentedURL:(id)arg2;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (id)primaryPresentedItemURL;

@end
