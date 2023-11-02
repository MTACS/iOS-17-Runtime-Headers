
@interface PKBannerPresentable : NSObject <BNHostedContentProviding, BNPresentable, PKBannerViewControllerPresentable, SBUISystemApertureElementProviding> {
    id /* block */  _didFinishHandler;
    id /* block */  _didStartHandler;
    id /* block */  _factory;
    PKBannerPresentationManager * _manager;
    bool  _needsRevoke;
    bool  _posted;
    <BNPresentableContext> * _presentableContext;
    NSString * _requestIdentifier;
    bool  _revoked;
    UIViewController<PKBannerViewController><BNPresentableObserving><SBUISystemApertureElement> * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long presentableBehavior;
@property (nonatomic) <BNPresentableContext> *presentableContext;
@property (nonatomic, readonly) long long presentableType;
@property (nonatomic, readonly) bool providesHostedContent;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SBUISystemApertureElement> *systemApertureElement;
@property (nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)init;
- (bool)isDraggingInteractionEnabled;
- (id)presentableContext;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableWillAppearAsBanner:(id)arg1;
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;
- (bool)providesHostedContent;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (void)revoke;
- (void)setPresentableContext:(id)arg1;
- (id)systemApertureElementViewController;
- (void)userInteractionDidEndForBannerForPresentable:(id)arg1;
- (void)userInteractionWillBeginForBannerForPresentable:(id)arg1;
- (id)viewController;

@end
