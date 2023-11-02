
@interface ASCLockupPresenter : NSObject {
    ASCPresenterContext * _context;
    ASCLockupViewGroup * _group;
    ASCLockup * _lockup;
    ASCAppearMetricsPresenter * _metricsPresenter;
    <ASCLockupPresenterObserver> * _observer;
    ASCOfferPresenter * _offerPresenter;
    AMSMutablePromise * _pendingRequestedLockup;
    ASCSignpostSpan * _pendingViewRender;
    ASCLockupRequest * _request;
    bool  _showsPlaceholderContent;
    <ASCLockupPresenterView> * _view;
    id /* block */  _viewRenderSpanProvider;
}

@property (nonatomic, readonly) ASCPresenterContext *context;
@property (nonatomic, retain) ASCLockupViewGroup *group;
@property (nonatomic, copy) ASCLockup *lockup;
@property (nonatomic, readonly) ASCAppearMetricsPresenter *metricsPresenter;
@property (nonatomic) <ASCLockupPresenterObserver> *observer;
@property (nonatomic, readonly) ASCOfferPresenter *offerPresenter;
@property (nonatomic, retain) AMSMutablePromise *pendingRequestedLockup;
@property (nonatomic, retain) ASCSignpostSpan *pendingViewRender;
@property (nonatomic, readonly) bool prefersRightToLeftViewLayout;
@property (nonatomic, copy) ASCLockupRequest *request;
@property (nonatomic) bool showsPlaceholderContent;
@property (nonatomic, readonly) <ASCLockupPresenterView> *view;
@property (nonatomic, copy) id /* block */ viewRenderSpanProvider;

- (void).cxx_destruct;
- (void)beginViewRender;
- (void)clearContent;
- (id)context;
- (void)daemonDidRebootstrap:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)endViewRender;
- (id)group;
- (void)iconArtwork:(id)arg1 didFailFetchWithError:(id)arg2;
- (void)iconArtwork:(id)arg1 didFetchImage:(id)arg2;
- (id)initWithView:(id)arg1 offerPresenter:(id)arg2 metricsPresenter:(id)arg3;
- (id)initWithView:(id)arg1 offerPresenter:(id)arg2 metricsPresenter:(id)arg3 context:(id)arg4;
- (id)lockup;
- (id)metricsPresenter;
- (id)observer;
- (id)offerPresenter;
- (id)pendingRequestedLockup;
- (id)pendingViewRender;
- (void)performFollowUpWork:(id /* block */)arg1;
- (void)performIconFetch;
- (void)performLockupFetch;
- (bool)prefersRightToLeftViewLayout;
- (void)reloadDefaultContent;
- (id)request;
- (void)request:(id)arg1 didCompleteWithLockup:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestWillFetchLockup:(id)arg1;
- (void)retryGroup:(id)arg1;
- (bool)retryRequestIfNeeded;
- (void)setGroup:(id)arg1;
- (void)setLockup:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setPendingRequestedLockup:(id)arg1;
- (void)setPendingViewRender:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setShowsPlaceholderContent:(bool)arg1;
- (void)setViewRenderSpanProvider:(id /* block */)arg1;
- (void)showPlaceholderContent;
- (bool)showsPlaceholderContent;
- (id)view;
- (id /* block */)viewRenderSpanProvider;

@end
