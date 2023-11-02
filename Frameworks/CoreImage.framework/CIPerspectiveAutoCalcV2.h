
@interface CIPerspectiveAutoCalcV2 : CIPerspectiveAutoCalc {
    struct float3x3 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  K;
    struct float3x3 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  T;
    CIImage * gradMap;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** gradMapBmp;
    unsigned long long  gradMapH;
    unsigned long long  gradMapRb;
    unsigned long long  gradMapW;
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CI::Perspective::Line *, std::allocator<CI::Perspective::Line>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  hClusterInliers;
    struct vector<LineCostProxy, std::allocator<LineCostProxy>> { 
        struct LineCostProxy {} *__begin_; 
        struct LineCostProxy {} *__end_; 
        struct __compressed_pair<LineCostProxy *, std::allocator<LineCostProxy>> { 
            struct LineCostProxy {} *__value_; 
        } __end_cap_; 
    }  hClusterInliersProxies;
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CI::Perspective::Line *, std::allocator<CI::Perspective::Line>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  hClusterOutliers;
    struct vector<LineCostProxy, std::allocator<LineCostProxy>> { 
        struct LineCostProxy {} *__begin_; 
        struct LineCostProxy {} *__end_; 
        struct __compressed_pair<LineCostProxy *, std::allocator<LineCostProxy>> { 
            struct LineCostProxy {} *__value_; 
        } __end_cap_; 
    }  hClusterOutliersProxies;
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CI::Perspective::Line *, std::allocator<CI::Perspective::Line>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  hLines;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* initialSimplexVerticesXYZ;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* initialSimplexVerticesXZ;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* initialSimplexVerticesYZ;
    struct float3x3 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  invK;
    struct float3x3 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  invT;
    struct Solution { 
        float rX; 
        float rY; 
        float rZ; 
        float cost; 
    }  solution;
    int  solutionType;
    double  unlimitedPitch;
    double  unlimitedRoll;
    double  unlimitedYaw;
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CI::Perspective::Line *, std::allocator<CI::Perspective::Line>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  vClusterInliers;
    struct vector<LineCostProxy, std::allocator<LineCostProxy>> { 
        struct LineCostProxy {} *__begin_; 
        struct LineCostProxy {} *__end_; 
        struct __compressed_pair<LineCostProxy *, std::allocator<LineCostProxy>> { 
            struct LineCostProxy {} *__value_; 
        } __end_cap_; 
    }  vClusterInliersProxies;
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CI::Perspective::Line *, std::allocator<CI::Perspective::Line>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  vClusterOutliers;
    struct vector<LineCostProxy, std::allocator<LineCostProxy>> { 
        struct LineCostProxy {} *__begin_; 
        struct LineCostProxy {} *__end_; 
        struct __compressed_pair<LineCostProxy *, std::allocator<LineCostProxy>> { 
            struct LineCostProxy {} *__value_; 
        } __end_cap_; 
    }  vClusterOutliersProxies;
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CI::Perspective::Line *, std::allocator<CI::Perspective::Line>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  vLines;
}

@property (readonly) double unlimitedPitch;
@property (readonly) double unlimitedRoll;
@property (readonly) double unlimitedYaw;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clusterLineSegments;
- (bool)compute;
- (void)computeConfidence;
- (void)createGradientMap;
- (void)dealloc;
- (float)evaluateCost;
- (float)evaluateCostXZ;
- (float)evaluateCostYZ;
- (void)extractLineSegments;
- (id)initWithContext:(id)arg1 image:(id)arg2 config:(const struct { double x1; double x2; double x3; double x4; double x5; double x6; id x7; }*)arg3;
- (void)normalizeGradientMap;
- (void)runOptimization;
- (void)setupCostFunction;
- (void)standardizeImage;
- (void)thresholdGradientMap;
- (double)unlimitedPitch;
- (double)unlimitedRoll;
- (double)unlimitedYaw;

@end
