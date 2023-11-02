
@interface PVInstructionGraphSourceNode : PVInstructionGraphNode {
    bool  _isOverlayTrack;
    int  _textureWrapMode;
    AVTimedMetadataGroup * _timedMetadataGroup;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    PVTransformAnimation * _transformAnimation;
    int  _transformAnimationContentMode;
}

@property (nonatomic) bool isOverlayTrack;
@property (nonatomic) int textureWrapMode;
@property (nonatomic, retain) AVTimedMetadataGroup *timedMetadataGroup;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, retain) PVTransformAnimation *transformAnimation;
@property (nonatomic) int transformAnimationContentMode;

- (void).cxx_destruct;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })applyWrapModeToInput:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1;
- (id)getAllSourceNodes;
- (id)init;
- (id)instructionGraphNodeDescription;
- (bool)isOverlayTrack;
- (bool)isPortrait;
- (void)setIsOverlayTrack:(bool)arg1;
- (void)setTextureWrapMode:(int)arg1;
- (void)setTimedMetadataGroup:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTransformAnimation:(id)arg1;
- (void)setTransformAnimationContentMode:(int)arg1;
- (int)textureWrapMode;
- (id)timedMetadataGroup;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)transformAnimation;
- (int)transformAnimationContentMode;

@end
