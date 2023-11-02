
@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter> {
    NSURL * _URLIfAvailable;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSData * _bookmarkDataIfAvailable;
    <TSUURLTrackerDelegate> * _delegate;
    bool  _hasStarted;
    NSError * _latestError;
    NSOperationQueue * _presentedItemOperationQueue;
}

@property (readonly) NSData *bookmarkData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLAndReturnError:(id*)arg1;
- (id)_URLAndReturnError:(id*)arg1;
- (id)_bookmarkData;
- (id)_bookmarkDataAndReturnError:(id*)arg1;
- (id)_description;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (id)bookmarkData;
- (id)bookmarkDataAndReturnError:(id*)arg1;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3;
- (void)pause;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)relinquishPresentedItemToWriter:(id /* block */)arg1;
- (void)startOrResume;
- (void)stop;

@end
