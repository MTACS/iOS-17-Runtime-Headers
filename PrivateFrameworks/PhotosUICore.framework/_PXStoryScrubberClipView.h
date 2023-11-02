
@interface _PXStoryScrubberClipView : PXGFocusEffectView {
    UIView * _dimOverlayView;
    UIView * _highlightOverlayView;
}

@property (nonatomic, retain) UIView *dimOverlayView;
@property (nonatomic, retain) UIView *highlightOverlayView;
@property (nonatomic, copy) _PXStoryScrubberClipViewConfiguration *userData;

- (void).cxx_destruct;
- (id)dimOverlayView;
- (id)highlightOverlayView;
- (void)layoutSubviews;
- (void)setDimOverlayView:(id)arg1;
- (void)setHighlightOverlayView:(id)arg1;

@end
