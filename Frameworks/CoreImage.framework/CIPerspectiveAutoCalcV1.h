
@interface CIPerspectiveAutoCalcV1 : CIPerspectiveAutoCalc {
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
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*a; 
    }  hGuide0;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*a; 
    }  hGuide1;
    float  hGuidesAOE;
    bool  hGuidesValid;
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CI::Perspective::Line *, std::allocator<CI::Perspective::Line>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  hLineCluster;
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CI::Perspective::Line *, std::allocator<CI::Perspective::Line>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  hLines;
    struct float3x3 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  invK;
    struct float3x3 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  invT;
    double  minimumPitchCorrectionAreaCoverage;
    double  minimumYawCorrectionAreaCoverage;
    float  pitchCorrectionAreaCoverage;
    struct PseudoRand { 
        unsigned int u; 
        unsigned int v; 
    }  pseudoRando;
    float  rX;
    float  rY;
    float  rZ;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*a; 
    }  vGuide0;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*a; 
    }  vGuide1;
    float  vGuidesAOE;
    bool  vGuidesValid;
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CI::Perspective::Line *, std::allocator<CI::Perspective::Line>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  vLineCluster;
    struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CI::Perspective::Line *, std::allocator<CI::Perspective::Line>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  vLines;
    float  yawCorrectionAreaCoverage;
}

@property double minimumPitchCorrectionAreaCoverage;
@property double minimumYawCorrectionAreaCoverage;
@property (readonly) float pitchCorrectionAreaCoverage;
@property (readonly) float yawCorrectionAreaCoverage;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clusterLineSegments;
- (bool)compute;
- (void)computeGuides;
- (void)computeTransform;
- (double)confidence;
- (void)createGradientMap;
- (void)dealloc;
- (void)extractLineSegments;
- (id)initWithContext:(id)arg1 image:(id)arg2 config:(const struct { double x1; double x2; double x3; double x4; double x5; double x6; id x7; }*)arg3;
- (double)minimumPitchCorrectionAreaCoverage;
- (double)minimumYawCorrectionAreaCoverage;
- (void)normalizeGradientMap;
- (float)pitchCorrectionAreaCoverage;
- (void)rangeLimitGradientMap;
- (void)setMinimumPitchCorrectionAreaCoverage:(double)arg1;
- (void)setMinimumYawCorrectionAreaCoverage:(double)arg1;
- (void)standardizeImage;
- (void)thresholdGradientMap;
- (float)yawCorrectionAreaCoverage;

@end
