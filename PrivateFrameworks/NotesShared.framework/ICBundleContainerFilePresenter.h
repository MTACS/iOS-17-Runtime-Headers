
@interface ICBundleContainerFilePresenter : NSObject <NSFilePresenter> {
    NSOperationQueue * _operationQueue;
    id /* block */  _subitemBundleDidChange;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (nonatomic, copy) id /* block */ subitemBundleDidChange;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (id)operationQueue;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setSubitemBundleDidChange:(id /* block */)arg1;
- (void)setUrl:(id)arg1;
- (id /* block */)subitemBundleDidChange;
- (id)url;

@end
