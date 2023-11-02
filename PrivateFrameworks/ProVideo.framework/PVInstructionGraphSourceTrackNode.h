
@interface PVInstructionGraphSourceTrackNode : PVInstructionGraphSourceNode {
    struct CGSize { 
        double width; 
        double height; 
    }  _clipNaturalSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    int  _dataTrackID;
    int  _depthTrackID;
    int  _fillMode;
    int  _metadataTrackID;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _sourceTrackloaded;
    <PVStabilizationDelegate> * _stabilizationDelegate;
    bool  _stabilizationDelegateRespondsToDidStabilize;
    int  _trackID;
    id  _userContext;
}

@property (nonatomic) struct CGSize { double x1; double x2; } clipNaturalSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic) int dataTrackID;
@property (nonatomic) int depthTrackID;
@property (nonatomic) int fillMode;
@property (nonatomic) int metadataTrackID;
@property (nonatomic, retain) <PVStabilizationDelegate> *stabilizationDelegate;
@property (nonatomic) bool stabilizationDelegateRespondsToDidStabilize;
@property (nonatomic) int trackID;
@property (nonatomic, retain) id userContext;

+ (id)newSourceTrackNode:(int)arg1 animation:(id)arg2 fillMode:(int)arg3 clipNaturalSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)newSourceTrackNode:(int)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 clipNaturalSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)newSourceTrackNodeWithStabilizationDelegate:(id)arg1 userContext:(id)arg2 trackID:(int)arg3 dataTrackID:(int)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 clipNaturalSize:(struct CGSize { double x1; double x2; })arg6;
+ (id)newSourceTrackNodeWithStabilizationDelegate:(id)arg1 userContext:(id)arg2 trackID:(int)arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 clipNaturalSize:(struct CGSize { double x1; double x2; })arg5;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })clipNaturalSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (int)dataTrackID;
- (int)depthTrackID;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1;
- (int)fillMode;
- (id)init;
- (struct PCRect<double> { double x1; double x2; double x3; double x4; })inputSizeForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)instructionGraphNodeDescription;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })internalHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackInputs:(const void*)arg2 renderer:(const void*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (bool)isPassthru;
- (bool)isPortrait;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg1 returnLoadedEffects:(id)arg2;
- (int)metadataTrackID;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransformForPVEffect:(id)arg1 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg2;
- (id)requiredSourceSampleDataTrackIDs;
- (id)requiredSourceTrackIDs;
- (void)setClipNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataTrackID:(int)arg1;
- (void)setDepthTrackID:(int)arg1;
- (void)setFillMode:(int)arg1;
- (void)setMetadataTrackID:(int)arg1;
- (void)setStabilizationDelegate:(id)arg1;
- (void)setStabilizationDelegateRespondsToDidStabilize:(bool)arg1;
- (void)setTrackID:(int)arg1;
- (void)setUserContext:(id)arg1;
- (id)stabilizationDelegate;
- (bool)stabilizationDelegateRespondsToDidStabilize;
- (int)trackID;
- (void)unloadIGNode;
- (id)userContext;

@end
