
@interface ASCLockupMediaPresenter : NSObject <ASCVideoViewDelegate> {
    <ASCLockupMediaPresenterBackgroundView> * _backgroundView;
    ASCPresenterContext * _context;
    ASCLockup * _lockup;
    <ASCLockupMediaPresenterObserver> * _observer;
    ASCPendingPromises * _pendingArtworkPromises;
    <ASCLockupMediaPresenterView> * _view;
}

@property (nonatomic) <ASCLockupMediaPresenterBackgroundView> *backgroundView;
@property (nonatomic, readonly) ASCPresenterContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) ASCLockup *lockup;
@property (nonatomic) <ASCLockupMediaPresenterObserver> *observer;
@property (nonatomic, readonly) ASCPendingPromises *pendingArtworkPromises;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <ASCLockupMediaPresenterView> *view;

+ (id)log;

- (void).cxx_destruct;
- (id)artworkForLockup:(id)arg1;
- (id)backgroundView;
- (id)context;
- (void)dealloc;
- (id)initWithView:(id)arg1 lockupPresenter:(id)arg2;
- (id)initWithView:(id)arg1 lockupPresenter:(id)arg2 context:(id)arg3;
- (id)lockup;
- (void)lockupPresenterDidChange:(id)arg1;
- (id)observer;
- (id)pendingArtworkPromises;
- (void)performFollowUpWork:(id /* block */)arg1;
- (void)performScreenshotsFetch;
- (void)screenshotArtwork:(id)arg1 didFailFetchWithError:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)screenshotArtwork:(id)arg1 didFetchImage:(id)arg2 atIndex:(long long)arg3;
- (void)setBackgroundView:(id)arg1;
- (void)setLockup:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)videoView:(id)arg1 videoStateDidChange:(long long)arg2;
- (id)videoViewForLockup:(id)arg1;
- (id)view;
- (void)viewDidLayoutSubviews;

@end
