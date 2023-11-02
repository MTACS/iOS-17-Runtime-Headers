
@interface ASORemoteOverlay : NSObject <ASORemoteAppOverlayDelegate> {
    <ASORemoteContextProvider> * _contextProvider;
    ASCSignpostSpan * _hostSpan;
    bool  _isActive;
    bool  _isLoaded;
    <ASOOverlay> * _overlay;
    ASOOverlayTransitionContext * _presentationTransitionContext;
}

@property (nonatomic) <ASORemoteContextProvider> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) ASCSignpostSpan *hostSpan;
@property (nonatomic) bool isActive;
@property (nonatomic) bool isLoaded;
@property (nonatomic, retain) <ASOOverlay> *overlay;
@property (nonatomic, readonly, copy) <ASOOverlayConfiguration> *overlayConfiguration;
@property (nonatomic, retain) ASOOverlayTransitionContext *presentationTransitionContext;
@property (readonly) Class superclass;

+ (id)dismissOverlayOperationWithContextProvider:(id)arg1;
+ (id)log;

- (void).cxx_destruct;
- (id)context;
- (id)contextProvider;
- (void)finishWithError:(id)arg1;
- (id)hostSpan;
- (id)initWithOverlay:(id)arg1 contextProvider:(id)arg2 hostSpan:(id)arg3;
- (bool)isActive;
- (bool)isLoaded;
- (id)overlay;
- (id)overlayConfiguration;
- (id)presentOverlayOperation;
- (id)presentationTransitionContext;
- (void)remoteStoreOverlayDidFailToLoadWithError:(id)arg1;
- (void)remoteStoreOverlayDidFinishDismissal:(id)arg1;
- (void)remoteStoreOverlayDidFinishPresentation:(id)arg1;
- (void)remoteStoreOverlayWillStartDismissing:(id)arg1 executeBlock:(id /* block */)arg2;
- (void)remoteStoreOverlayWillStartPresenting:(id)arg1 executeBlock:(id /* block */)arg2;
- (void)setContextProvider:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsLoaded:(bool)arg1;
- (void)setOverlay:(id)arg1;
- (void)setPresentationTransitionContext:(id)arg1;

@end
