
@interface AVTSingleAvatarController : NSObject <AVTAvatarDisplayingController, AVTAvatarTransitionModel> {
    AVTViewSession * _avtViewSession;
    <AVTTransition> * _currentTransition;
    <AVTAvatarRecord> * _displayedRecord;
    <AVTUILogger> * _logger;
    AVTRenderingScope * _renderingScope;
    _AVTAvatarRecordImageProvider * _thumbnailRenderer;
    AVTImageTransitioningContainerView * _transitioningContainer;
    AVTAdaptativeLayoutView * _view;
    <AVTAvatarDisplayingControllerDelegate> * delegate;
    <AVTPresenterDelegate> * presenterDelegate;
}

@property (nonatomic, retain) AVTViewSession *avtViewSession;
@property (nonatomic, retain) <AVTTransition> *currentTransition;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarDisplayingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <AVTAvatarRecord> *displayedRecord;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic) <AVTPresenterDelegate> *presenterDelegate;
@property (nonatomic, readonly) AVTRenderingScope *renderingScope;
@property (readonly) Class superclass;
@property (nonatomic, retain) _AVTAvatarRecordImageProvider *thumbnailRenderer;
@property (nonatomic, retain) AVTImageTransitioningContainerView *transitioningContainer;
@property (nonatomic, retain) AVTAdaptativeLayoutView *view;

- (void).cxx_destruct;
- (void)applyBaseAlpha;
- (void)applyFullAlpha;
- (id)avtViewSession;
- (id)currentTransition;
- (id)delegate;
- (void)displayAvatarForRecord:(id)arg1 animated:(bool)arg2;
- (id)displayedRecord;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2;
- (bool)isViewLoaded;
- (id)liveView;
- (void)loadView;
- (id)logger;
- (void)prepareToTransitionToVisible:(bool)arg1 completionHandler:(id /* block */*)arg2;
- (void)prepareViewWithLayout:(id)arg1;
- (id)presenterDelegate;
- (void)reloadData;
- (id)renderingScope;
- (void)setAvtViewSession:(id)arg1;
- (void)setCurrentTransition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedRecord:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;
- (void)setThumbnailRenderer:(id)arg1;
- (void)setTransitioningContainer:(id)arg1;
- (void)setView:(id)arg1;
- (void)stopUsingAVTViewSessionSynchronously:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)thumbnailRenderer;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;
- (void)transitionToOtherDisplayedRecord;
- (void)transitionToShowingDisplayedRecordWithCompletionHandler:(id /* block */)arg1;
- (id)transitioningContainer;
- (void)updateImageViewWithAVTViewSnapshot;
- (void)updateImageViewWithDisplayedRecord;
- (void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2;
- (id)view;
- (void)viewDidLoad;

@end
