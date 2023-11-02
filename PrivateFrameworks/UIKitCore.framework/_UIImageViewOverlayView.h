
@interface _UIImageViewOverlayView : UIView {
    <_UIImageViewOverlayViewDelegate> * _overlayViewDelegate;
}

@property (nonatomic) <_UIImageViewOverlayViewDelegate> *overlayViewDelegate;

- (void).cxx_destruct;
- (id)overlayViewDelegate;
- (void)setClipsToBounds:(bool)arg1;
- (void)setOverlayViewDelegate:(id)arg1;

@end
