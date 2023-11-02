
@interface JFXOverlayEffectAnimationConfiguration : NSObject {
    JFXOverlayEffectFrame * _endFrame;
    JFXOverlayEffectFrame * _startFrame;
}

@property (nonatomic, readonly) JFXOverlayEffectFrame *endFrame;
@property (nonatomic, readonly) JFXOverlayEffectFrame *startFrame;

- (void).cxx_destruct;
- (id)endFrame;
- (id)initWithStartFrame:(id)arg1 endFrame:(id)arg2;
- (id)startFrame;

@end
