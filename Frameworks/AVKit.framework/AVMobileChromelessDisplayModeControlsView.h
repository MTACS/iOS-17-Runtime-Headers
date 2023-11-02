
@interface AVMobileChromelessDisplayModeControlsView : AVView {
    <AVMobileChromelessDisplayModeControlsViewDelegate> * _delegate;
    AVButton * _fullScreenButton;
    unsigned long long  _fullscreenIcon;
    bool  _includesFullscreenControl;
    bool  _includesPictureInPictureControl;
    AVButton * _pictureInPictureButton;
    AVMobileChromelessControlsStyleSheet * _styleSheet;
}

@property (nonatomic) <AVMobileChromelessDisplayModeControlsViewDelegate> *delegate;
@property (nonatomic, readonly) AVButton *fullScreenButton;
@property (nonatomic) unsigned long long fullscreenIcon;
@property (nonatomic) bool includesFullscreenControl;
@property (nonatomic) bool includesPictureInPictureControl;
@property (nonatomic, readonly) AVButton *pictureInPictureButton;
@property (nonatomic, retain) AVMobileChromelessControlsStyleSheet *styleSheet;

- (void).cxx_destruct;
- (void)_addDisplayModeControlViews:(id)arg1;
- (void)_updateFullscreenControlIcon;
- (id)delegate;
- (id)fullScreenButton;
- (void)fullScreenButtonWasPressed;
- (unsigned long long)fullscreenIcon;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)includesFullscreenControl;
- (bool)includesPictureInPictureControl;
- (id)initWithStyleSheet:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)pictureInPictureButton;
- (void)pictureInPictureControlWasPressed;
- (void)setDelegate:(id)arg1;
- (void)setFullscreenIcon:(unsigned long long)arg1;
- (void)setIncludesFullscreenControl:(bool)arg1;
- (void)setIncludesPictureInPictureControl:(bool)arg1;
- (void)setStyleSheet:(id)arg1;
- (id)styleSheet;

@end
