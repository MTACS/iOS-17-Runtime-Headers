
@interface PVInstructionGraphSourceCompositeNode : PVInstructionGraphSourceNode {
    bool  _canPreprocess;
    bool  _canRender;
    PVColorSpace * _colorSpace;
    PVCompositeDelegateEffect * _delegateEffect;
    PVInstructionGraphNode * _graphNode;
    PVImageBuffer * _imageBuffer;
    NSString * _imageKey;
    <PVImageSeqDelegate> * _imageSeqDelegate;
    NSURL * _imageURL;
    NSDictionary * _inputMap;
    NSObject * _metadata;
    int  _nodeType;
    unsigned int  _outputFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    <PVCompositeDelegate> * _renderDelegate;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  _renderManager;
    int  _trackID;
    id  _userContext;
}

@property (nonatomic) bool canPreprocess;
@property (nonatomic) bool canRender;
@property (nonatomic, retain) PVColorSpace *colorSpace;
@property (nonatomic, retain) PVCompositeDelegateEffect *delegateEffect;
@property (nonatomic, retain) PVInstructionGraphNode *graphNode;
@property (nonatomic, retain) PVImageBuffer *imageBuffer;
@property (nonatomic, retain) NSString *imageKey;
@property (nonatomic, retain) <PVImageSeqDelegate> *imageSeqDelegate;
@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic, retain) NSDictionary *inputMap;
@property (nonatomic, retain) NSObject *metadata;
@property (nonatomic) int nodeType;
@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic, retain) <PVCompositeDelegate> *renderDelegate;
@property (nonatomic) int trackID;
@property (nonatomic, retain) id userContext;

+ (id)newSourceCompositeNodeWithDelegate:(id)arg1 inputs:(id)arg2 metadata:(id)arg3 outputSize:(struct CGSize { double x1; double x2; })arg4 outputFormat:(unsigned int)arg5;
+ (id)newSourceCompositeNodeWithDelegate:(id)arg1 inputs:(id)arg2 userContext:(id)arg3 outputSize:(struct CGSize { double x1; double x2; })arg4 outputFormat:(unsigned int)arg5;
+ (id)newSourceCompositeNodeWithGraphNode:(id)arg1 outputSize:(struct CGSize { double x1; double x2; })arg2 outputFormat:(unsigned int)arg3;
+ (id)newSourceCompositeNodeWithPVImageBuffer:(id)arg1;
+ (id)newSourceCompositeNodeWithTrack:(int)arg1 outputSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)newSourceCompositeNodeWithURL:(id)arg1 key:(id)arg2 imageDelegate:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDotTreeLinks:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (bool)canPreprocess;
- (bool)canRender;
- (id)colorSpace;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })conformInputImage:(id)arg1 colorSpace:(id)arg2 renderer:(const void*)arg3 currentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg5;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })conformNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1 toSize:(struct HGRect { int x1; int x2; int x3; int x4; })arg2;
- (id)delegateEffect;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (id)getAllSourceNodes;
- (id)graphNode;
- (id)imageBuffer;
- (id)imageKey;
- (id)imageSeqDelegate;
- (id)imageURL;
- (id)init;
- (id)inputMap;
- (struct PCRect<double> { double x1; double x2; double x3; double x4; })inputSizeForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)instructionGraphNodeDescription;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })internalHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackInputs:(const void*)arg2 renderer:(const void*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1 returnLoadedEffects:(id)arg2;
- (id)metadata;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })nodeForCompositeTrackMap:(const void*)arg1;
- (int)nodeType;
- (unsigned int)outputFormat;
- (struct CGSize { double x1; double x2; })outputSize;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransformForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)renderDelegate;
- (id)requiredSourceTrackIDs;
- (void)setCanPreprocess:(bool)arg1;
- (void)setCanRender:(bool)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setDelegateEffect:(id)arg1;
- (void)setGraphNode:(id)arg1;
- (void)setImageBuffer:(id)arg1;
- (void)setImageKey:(id)arg1;
- (void)setImageSeqDelegate:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setInputMap:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNodeType:(int)arg1;
- (void)setOutputFormat:(unsigned int)arg1;
- (void)setOutputSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRenderDelegate:(id)arg1;
- (void)setTrackID:(int)arg1;
- (void)setUserContext:(id)arg1;
- (int)trackID;
- (void)unloadIGNode;
- (id)userContext;

@end
