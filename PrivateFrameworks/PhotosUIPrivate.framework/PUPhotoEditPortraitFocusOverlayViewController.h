
@interface PUPhotoEditPortraitFocusOverlayViewController : UIViewController <PXPortraitFocusViewDelegate> {
    <PUPhotoEditToolControllerDelegate> * _delegate;
    NUMediaView * _mediaView;
    <PUPhotoEditPortraitFocusDelegate> * _portraitFocusDelegate;
    PXUIPortraitFocusView * _portraitFocusView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoEditToolControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PUPhotoEditPortraitFocusDelegate> *portraitFocusDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentFocusRect;
- (id)delegate;
- (void)focusPointChanged:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithMediaView:(id)arg1 delegate:(id)arg2;
- (void)loadView;
- (void)mediaViewIsReady;
- (id)portraitFocusDelegate;
- (void)setDelegate:(id)arg1;
- (void)setPortraitFocusDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
