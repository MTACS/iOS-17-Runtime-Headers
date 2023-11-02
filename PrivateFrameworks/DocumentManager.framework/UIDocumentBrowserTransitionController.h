
@interface UIDocumentBrowserTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _encounteredUnrecoverableError;
    FPItem * _item;
    NSURL * _itemURL;
    NSProgress * _loadingProgress;
    UIView * _referenceView;
    <DOCServiceDocumentBrowserViewControllerInterface> * _serviceDocumentBrowserProxy;
    UIView * _targetView;
    <DOCServiceTransitionProtocol> * _transitionController;
    NSOperationQueue * _transitionControllerQueue;
    bool  _transitionDidFinish;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool encounteredUnrecoverableError;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSProgress *loadingProgress;
@property (readonly) Class superclass;
@property (nonatomic) UIView *targetView;
@property (nonatomic, retain) <DOCServiceTransitionProtocol> *transitionController;
@property (nonatomic, retain) NSOperationQueue *transitionControllerQueue;
@property bool transitionDidFinish;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)dealloc;
- (void)doc_commonInit;
- (bool)encounteredUnrecoverableError;
- (id)init;
- (id)initWithItem:(id)arg1 documentBrowserProxy:(id)arg2 referenceView:(id)arg3;
- (id)initWithItemURL:(id)arg1 documentBrowserProxy:(id)arg2 referenceView:(id)arg3;
- (id)loadingProgress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setEncounteredUnrecoverableError:(bool)arg1;
- (void)setLoadingProgress:(id)arg1;
- (void)setTargetView:(id)arg1;
- (void)setTransitionController:(id)arg1;
- (void)setTransitionControllerQueue:(id)arg1;
- (void)setTransitionDidFinish:(bool)arg1;
- (id)targetView;
- (id)transitionController;
- (id)transitionControllerQueue;
- (bool)transitionDidFinish;
- (double)transitionDuration:(id)arg1;

@end
