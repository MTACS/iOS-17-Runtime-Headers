
@interface PXStoryViewModeTransitionsHelper : NSObject <PXChangeObserver> {
    PXStoryViewModeTransition * _currentViewModeTransition;
    <PXStoryViewModeTransitionsHelperDelegate> * _delegate;
    PXStoryModel * _model;
    PXStoryViewModeTransition * _pendingViewModeTransition;
    long long  _presentedViewMode;
    PXUpdater * _updater;
}

@property (nonatomic, retain) PXStoryViewModeTransition *currentViewModeTransition;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXStoryViewModeTransitionsHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic, retain) PXStoryViewModeTransition *pendingViewModeTransition;
@property (nonatomic) long long presentedViewMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;

- (void).cxx_destruct;
- (void)_configureTransition:(id)arg1;
- (void)_currentTransitionDidCancel;
- (void)_currentTransitionDidFinish;
- (void)_invalidateTransition;
- (void)_invalidateTransitionCompletion;
- (bool)_isViewModeSupported:(long long)arg1;
- (void)_setNeedsUpdate;
- (void)_startTransition:(id)arg1;
- (void)_updateTransition;
- (void)_updateTransitionCompletion;
- (id)currentViewModeTransition;
- (id)delegate;
- (id)init;
- (id)initWithModel:(id)arg1;
- (void)invalidatePresentingGeometry;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)pendingViewModeTransition;
- (long long)presentedViewMode;
- (void)setCurrentViewModeTransition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingViewModeTransition:(id)arg1;
- (void)setPresentedViewMode:(long long)arg1;
- (void)updateIfNeeded;
- (id)updater;

@end
