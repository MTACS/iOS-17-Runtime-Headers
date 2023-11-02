
@interface PVInstructionGraphRectangleMaskNode : PVInstructionGraphNode {
    PVInstructionGraphNode * _inputNode;
    bool  _isInverted;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedMaskRect;
}

@property (nonatomic, retain) PVInstructionGraphNode *inputNode;
@property (nonatomic) bool isInverted;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedMaskRect;

+ (id)newMaskNode:(id)arg1 normalizedMaskRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })denormalizedMaskRectInSize:(struct CGSize { double x1; double x2; })arg1;
- (id)getAllSourceNodes;
- (id)initWithInputNode:(id)arg1 normalizedMaskRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)inputNode;
- (struct PCRect<double> { double x1; double x2; double x3; double x4; })inputSizeForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })internalHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackInputs:(const void*)arg2 renderer:(const void*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (bool)isInverted;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1 returnLoadedEffects:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedMaskRect;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransformForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)requiredSourceTrackIDs;
- (void)setInputNode:(id)arg1;
- (void)setIsInverted:(bool)arg1;
- (void)setNormalizedMaskRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)unloadIGNode;

@end
