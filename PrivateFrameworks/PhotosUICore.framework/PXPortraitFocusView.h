
@interface PXPortraitFocusView : UIView {
    <PXPortraitFocusViewDelegate> * _focusViewDelegate;
    NUMediaView * _mediaView;
}

@property (nonatomic) <PXPortraitFocusViewDelegate> *focusViewDelegate;
@property (nonatomic, readonly) NUMediaView *mediaView;

- (void).cxx_destruct;
- (void)animateNextRender;
- (void)focusPointChanged:(struct CGPoint { double x1; double x2; })arg1;
- (id)focusViewDelegate;
- (id)initWithMediaView:(id)arg1;
- (id)mediaView;
- (void)setFocusViewDelegate:(id)arg1;

@end
