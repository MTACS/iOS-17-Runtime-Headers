
@interface PUCMMActivityItemSource : PXObservable <PUActivityItemSourceOperationDelegate, PXChangeObserver, UIActivityItemDeferredSource, UIActivityItemSource, UIActivityItemsSource> {
    NSString * _activityType;
    <PUCMMActivityItemSourceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _externalIsolationQueue;
    NSArray * _individuallyPreparedItems;
    PUActivityItemSourceController * _itemSourceController;
    NSURL * _momentShareLink;
    NSError * _preparationError;
    PUActivityItemSourceOperation * _preparationOperation;
    unsigned long long  _state;
}

@property (nonatomic, retain) NSString *activityType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUCMMActivityItemSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *externalIsolationQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *individuallyPreparedItems;
@property (nonatomic, readonly) PUActivityItemSourceController *itemSourceController;
@property (nonatomic, copy) NSURL *momentShareLink;
@property (nonatomic, retain) NSError *preparationError;
@property (nonatomic, retain) PUActivityItemSourceOperation *preparationOperation;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activityItemSourceOperation:(id)arg1 prepareItemForActivityType:(id)arg2;
- (id)activityType;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)cancel;
- (id)delegate;
- (id)externalIsolationQueue;
- (id)individuallyPreparedItems;
- (id)initWithActivityItemSourceController:(id)arg1;
- (id)itemSourceController;
- (id)momentShareLink;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)placeholderItemsForActivityViewController:(id)arg1;
- (id)preparationError;
- (id)preparationOperation;
- (id)preparedItems;
- (void)setActivityType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExternalIsolationQueue:(id)arg1;
- (void)setIndividuallyPreparedItems:(id)arg1;
- (void)setMomentShareLink:(id)arg1;
- (void)setPreparationError:(id)arg1;
- (void)setPreparationOperation:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
