
@interface SXLineComponentView : SXComponentView {
    SXSolidBorderView * _borderView;
    CALayer * _strokeLayer;
}

@property (nonatomic, retain) SXSolidBorderView *borderView;
@property (nonatomic, retain) CALayer *strokeLayer;

- (void).cxx_destruct;
- (id)borderView;
- (void)discardContents;
- (void)loadComponent:(id)arg1;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; bool x3; })arg1;
- (void)renderContents;
- (void)setBorderView:(id)arg1;
- (void)setStrokeLayer:(id)arg1;
- (id)strokeLayer;
- (bool)userInteractable;

@end
