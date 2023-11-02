
@interface VKCImageDataDetectorViewQuadInfo : NSObject {
    VKQuad * _buttonQuad;
    UIBezierPath * _combinedElementHighlightPath;
    VKQuad * _ddBottomQuad;
}

@property (nonatomic, retain) VKQuad *buttonQuad;
@property (nonatomic, retain) UIBezierPath *combinedElementHighlightPath;
@property (nonatomic, retain) VKQuad *ddBottomQuad;

- (void).cxx_destruct;
- (id)buttonQuad;
- (id)combinedElementHighlightPath;
- (id)ddBottomQuad;
- (void)setButtonQuad:(id)arg1;
- (void)setCombinedElementHighlightPath:(id)arg1;
- (void)setDdBottomQuad:(id)arg1;

@end
