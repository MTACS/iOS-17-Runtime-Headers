
@interface PVInstructionGraphEffectNode : PVInstructionGraphNode {
    bool  _applyRenderTransformAfterEffect;
    bool  _bypassOutOfRangeEffects;
    PVEffect * _effect;
    struct map<unsigned int, PVInstructionGraphNode *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, PVInstructionGraphNode *>>> { 
        struct __tree<std::__value_type<unsigned int, PVInstructionGraphNode *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, PVInstructionGraphNode *>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, PVInstructionGraphNode *>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, PVInstructionGraphNode *>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, PVInstructionGraphNode *>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _inputMap;
}

@property (nonatomic) bool applyRenderTransformAfterEffect;
@property (nonatomic) bool bypassOutOfRangeEffects;
@property (nonatomic, retain) PVEffect *effect;

+ (id)newEffectNodeToAddTitle:(id)arg1 effect:(id)arg2;
+ (id)newEffectNodeToFilterInput:(id)arg1 effect:(id)arg2;
+ (id)newEffectNodeToOverlayInputs:(id)arg1 inputIDs:(id)arg2 effect:(id)arg3;
+ (id)newEffectNodeToTransitionFrom:(id)arg1 to:(id)arg2 effect:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDotTreeLinks:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (bool)applyRenderTransformAfterEffect;
- (void)buildEffectInputMap:(void*)arg1 forTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 trackInputs:(const void*)arg3 renderer:(const void*)arg4 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg5;
- (bool)bypassOutOfRangeEffects;
- (struct PVIGHGNodeCacheKey { unsigned long long x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; id x3; })contextHGNodeCacheKeyAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (id)effect;
- (id)getAllSourceNodes;
- (id)init;
- (struct PCRect<double> { double x1; double x2; double x3; double x4; })inputSizeForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)instructionGraphNodeDescription;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })internalHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackInputs:(const void*)arg2 renderer:(const void*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1 returnLoadedEffects:(id)arg2;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransformForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)requiredSourceSampleDataTrackIDs;
- (id)requiredSourceTrackIDs;
- (void)setApplyRenderTransformAfterEffect:(bool)arg1;
- (void)setBypassOutOfRangeEffects:(bool)arg1;
- (void)setEffect:(id)arg1;
- (void)setInputNode:(id)arg1 forInputID:(unsigned int)arg2;
- (void)unloadIGNode;

@end
