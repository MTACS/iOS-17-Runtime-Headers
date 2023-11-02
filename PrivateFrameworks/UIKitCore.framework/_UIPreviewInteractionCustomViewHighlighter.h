
@interface _UIPreviewInteractionCustomViewHighlighter : NSObject <_UIPreviewInteractionHighlighting> {
    UIView * _customView;
    bool  _customViewFlipsHorizontalAxis;
}

@property (nonatomic, retain) UIView *customView;
@property (nonatomic) bool customViewFlipsHorizontalAxis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)customView;
- (bool)customViewFlipsHorizontalAxis;
- (void)finalizeHighlightForPreviewingContext:(id)arg1;
- (id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3;
- (void)prepareHighlightWithPreviewingContext:(id)arg1;
- (void)setCustomView:(id)arg1;
- (void)setCustomViewFlipsHorizontalAxis:(bool)arg1;

@end
