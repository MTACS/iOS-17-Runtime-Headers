
@interface MRUCoverSheetViewController : UIViewController <MRUCoordinatedUpdateControllerDelegate, MRUNowPlayingViewControllerDelegate, MTVisualStylingRequiring, UIGestureRecognizerDelegate> {
    MRUCoordinatedUpdateController * _coordinatedUpdateController;
    <MRUCoverSheetViewControllerDelegate> * _delegate;
    MediaControlsInteractionRecognizer * _interactionRecognizer;
    MRUNowPlayingViewController * _nowPlayingViewController;
    id /* block */  _preferredContentSizeBlock;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, retain) MRUCoordinatedUpdateController *coordinatedUpdateController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUCoverSheetViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MediaControlsInteractionRecognizer *interactionRecognizer;
@property (nonatomic, readonly) long long layout;
@property (nonatomic, retain) MRUNowPlayingViewController *nowPlayingViewController;
@property (nonatomic, copy) id /* block */ preferredContentSizeBlock;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) MRUCoverSheetView *view;
@property (nonatomic, retain) MRUCoverSheetView *viewIfLoaded;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_childViewControllersForAlwaysOnTimelines;
- (id)coordinatedUpdateController;
- (void)coordinatedUpdateController:(id)arg1 processCoordinatedUpdates:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (void)didReceiveInteraction:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)interactionRecognizer;
- (long long)layout;
- (void)loadView;
- (id)nowPlayingViewController;
- (void)nowPlayingViewController:(id)arg1 didChangeSizeWithAnimations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id /* block */)preferredContentSizeBlock;
- (id)requiredVisualStyleCategories;
- (void)setCoordinatedUpdateController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInteractionRecognizer:(id)arg1;
- (void)setNowPlayingViewController:(id)arg1;
- (void)setPreferredContentSizeBlock:(id /* block */)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (id)stylingProvider;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePreferredContentSize;
- (void)updateRestrictedRects;
- (void)updateVisualStyling;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
