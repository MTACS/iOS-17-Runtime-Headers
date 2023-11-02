
@interface BNBannerSourceListener : NSObject <BNBannerSourceClientToHostInterface, BNBannerSourceListenerHostedPresentableObserving, BNBannerSourceListenerPresentableDelegate, BSInvalidatable, BSServiceConnectionListenerDelegate> {
    NSSet * _authorizedBundleIDs;
    BSServiceConnectionListener * _connectionListener;
    NSMutableArray * _connections;
    <BNBannerSourceListenerDelegate> * _delegate;
    FBSDisplayConfiguration * _displayConfiguration;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requesterIDsToPresentables;
    NSMutableSet * _unpreparedPresentables;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BNBannerSourceListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)__layoutDescriptionWithReply:(id /* block */)arg1;
- (void)__postPresentableWithSpecification:(id)arg1 options:(id)arg2 userInfo:(id)arg3 reply:(id /* block */)arg4;
- (void)__recommendSuspension:(id)arg1 forReason:(id)arg2 revokingCurrent:(id)arg3 reply:(id /* block */)arg4;
- (void)__revokePresentablesWithIdentification:(id)arg1 withAnimation:(id)arg2 reason:(id)arg3 userInfo:(id)arg4 reply:(id /* block */)arg5;
- (void)_addConnection:(id)arg1;
- (void)_addPresentable:(id)arg1;
- (void)_addUnpreparedBannerSourcePresentableForBannerSpecification:(id)arg1 scene:(id)arg2 readyCompletion:(id /* block */)arg3;
- (void)_addUnpreparedPresentable:(id)arg1;
- (id)_createSceneWithIdentifier:(id)arg1 forProcess:(id)arg2 preferredContentSize:(struct CGSize { double x1; double x2; })arg3 contentOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 userInfo:(id)arg5;
- (bool)_isConnectingProcessAuthorized:(id)arg1 error:(out id*)arg2;
- (bool)_isPresentableWaitingToBeMadeReady:(id)arg1;
- (bool)_isPresentableWithIdentificationWaitingToBeMadeReady:(id)arg1;
- (id)_presentablesWithIdentification:(id)arg1 requiringUniqueMatch:(bool)arg2;
- (void)_removeConnection:(id)arg1;
- (void)_removePresentable:(id)arg1;
- (void)_removePresentableWithIdentification:(id)arg1 requiringUniqueMatch:(bool)arg2;
- (void)_removeUnpreparedPresentable:(id)arg1;
- (id)_removeUnpreparedPresentablesWithIdentification:(id)arg1;
- (void)_requestPostingBannerSourceListenerPresentable:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)_requestPostingBannerSourceListenerPresentableWaitingToBeMadeReady:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)_stopObservingAndInvalidatePresentable:(id)arg1;
- (id)_uniquePresentableWithIdentification:(id)arg1;
- (bool)bannerSourceListenerPresentable:(id)arg1 isConnectingProcessAuthorized:(id)arg2 error:(out id*)arg3;
- (bool)bannerSourceListenerPresentableShouldEnablePresentableContextInterface:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithAuthorizedBundleIDs:(id)arg1;
- (id)initWithServiceDomain:(id)arg1 displayConfiguration:(id)arg2 authorizedBundleIDs:(id)arg3;
- (void)invalidate;
- (void)layoutDescriptionDidChange:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)sceneDidInvalidateForBannerSourceListenerPresentable:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
