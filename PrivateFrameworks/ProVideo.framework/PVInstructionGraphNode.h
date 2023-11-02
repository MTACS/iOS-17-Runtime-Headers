
@interface PVInstructionGraphNode : NSObject {
    bool  _isDebugDrawingEnabled;
    unsigned long long  _uuid;
}

@property (nonatomic) bool isDebugDrawingEnabled;

- (struct PVIGHGNodeCacheKey { unsigned long long x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; id x3; })contextHGNodeCacheKeyAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)description;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (id)getAllSourceNodes;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })hgNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackInputs:(const void*)arg2 renderer:(const void*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (id)init;
- (struct PCRect<double> { double x1; double x2; double x3; double x4; })inputSizeForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)instructionGraphNodeDescription;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })internalHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackInputs:(const void*)arg2 renderer:(const void*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (bool)isDebugDrawingEnabled;
- (bool)isPassthru;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1 returnLoadedEffects:(id)arg2;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransformForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)requiredSourceSampleDataTrackIDs;
- (id)requiredSourceTrackIDs;
- (void)setIsDebugDrawingEnabled:(bool)arg1;
- (void)unloadIGNode;

@end
