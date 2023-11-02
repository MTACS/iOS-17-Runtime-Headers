
@interface PXMessagesStackPlaybackControlView : UIView <PXChangeObserver, PXGReusableView> {
    _PXMessagesStackPlayButton * _button;
    long long  _itemIndex;
    PXMessagesStackPlaybackControlUserData * _userData;
    PXGDisplayAssetVideoPresentationController * _videoController;
    PXMessagesStackPlaybackControlViewModel * _viewModel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  clippingRect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clippingRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldReuseWhenInvisible;
@property (readonly) Class superclass;
@property (nonatomic, copy) PXMessagesStackPlaybackControlUserData *userData;
@property (nonatomic, retain) PXGDisplayAssetVideoPresentationController *videoController;
@property (nonatomic, retain) PXMessagesStackPlaybackControlViewModel *viewModel;

- (void).cxx_destruct;
- (void)_handleButton:(id)arg1;
- (bool)_shouldPauseOnTap;
- (void)_updateButtonVisibility;
- (bool)_wantsButton;
- (void)becomeReusable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (bool)handleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUserData:(id)arg1;
- (void)setVideoController:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)userData;
- (id)videoController;
- (id)viewModel;

@end
