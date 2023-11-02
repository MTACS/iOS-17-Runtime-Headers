
@interface _UIDocumentURLChangeObserver : NSObject <NSFilePresenter> {
    id /* block */  _changeHandler;
    NSOperationQueue * _presentedItemOperationQueue;
    NSURL * _presentedItemURL;
}

@property (nonatomic, copy) id /* block */ changeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (getter=isObserving, nonatomic, readonly) bool observing;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeHandler;
- (id)initWithFileURL:(id)arg1;
- (bool)isObserving;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)setChangeHandler:(id /* block */)arg1;
- (void)startObservingWithChangeHandler:(id /* block */)arg1;
- (void)stopObserving;

@end
