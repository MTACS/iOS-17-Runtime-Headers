
@interface ICBundleChangeFilePresenter : NSObject <NSFilePresenter> {
    ICSelectorDelayer * _applyChangesSelectorDelayer;
    NSManagedObjectContext * _managedObjectContext;
    NSManagedObjectID * _objectID;
    NSOperationQueue * _operationQueue;
    id /* block */  _presentedItemDidApplyChanges;
    NSURL * _url;
}

@property (nonatomic, retain) ICSelectorDelayer *applyChangesSelectorDelayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, copy) NSManagedObjectID *objectID;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, copy) id /* block */ presentedItemDidApplyChanges;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *url;

- (void).cxx_destruct;
- (void)applyChanges;
- (id)applyChangesSelectorDelayer;
- (id)initWithObjectID:(id)arg1 url:(id)arg2 managedObjectContext:(id)arg3;
- (id)managedObjectContext;
- (id)objectID;
- (id)operationQueue;
- (id /* block */)presentedItemDidApplyChanges;
- (void)presentedItemDidChange;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)setApplyChangesSelectorDelayer:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPresentedItemDidApplyChanges:(id /* block */)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
