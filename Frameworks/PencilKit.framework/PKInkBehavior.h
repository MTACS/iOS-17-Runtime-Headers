
@interface PKInkBehavior : NSObject {
    PKInkAnimationDescriptor * _animationDescriptor;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { 
            struct PKOutputFunction {} *__value_; 
        } __end_cap_; 
    }  _aspectRatioOutput;
    double  _baseAlpha;
    double  _blendAlpha;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { 
            struct PKOutputFunction {} *__value_; 
        } __end_cap_; 
    }  _brushOpacityOutput;
    NSMutableArray * _cachedAspectRatioFunctions;
    NSMutableArray * _cachedEdgeWidthFunctions;
    NSMutableArray * _cachedOpacityFunctions;
    NSMutableArray * _cachedRadius2Functions;
    NSMutableArray * _cachedRadiusFunctions;
    double  _defaultWidth;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { 
            struct PKOutputFunction {} *__value_; 
        } __end_cap_; 
    }  _edgeWidthOutput;
    PKInkFeatheringDescriptor * _featheringDescriptor;
    NSString * _identifier;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _inkTransform;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { 
            struct PKOutputFunction {} *__value_; 
        } __end_cap_; 
    }  _opacityOutput;
    PKInkFeatheringDescriptor * _pencilFeatheringDescriptor;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { 
            struct PKOutputFunction {} *__value_; 
        } __end_cap_; 
    }  _radius2Output;
    struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { 
        struct PKOutputFunction {} *__begin_; 
        struct PKOutputFunction {} *__end_; 
        struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { 
            struct PKOutputFunction {} *__value_; 
        } __end_cap_; 
    }  _radiusOutput;
    PKInkRenderingDescriptor * _renderingDescriptor;
    double  _rulerOffsetConstant;
    double  _rulerOffsetScale;
    bool  _showBrushIndicator;
    PKInkSmoothingDescriptor * _smoothingDescriptor;
    bool  _supportsCombiningStrokes;
    double  _targetMultiple;
    NSArray * _uiWidths;
    bool  _useUnclampedWeight;
    bool  _usesAzimuthOrAltitude;
    NSString * _variant;
    unsigned long long  _version;
    struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { 
        struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { 
            struct PKFunction {} *__value_; 
        } __ptr_; 
    }  _weightFunction;
}

@property (nonatomic, retain) PKInkAnimationDescriptor *animationDescriptor;
@property (nonatomic) double baseAlpha;
@property (nonatomic) double blendAlpha;
@property (nonatomic) double defaultWidth;
@property (nonatomic, retain) PKInkFeatheringDescriptor *featheringDescriptor;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSArray *inkFunctions;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } inkTransform;
@property (nonatomic, readonly) bool isEraser;
@property (nonatomic, readonly) PKInkParticleDescriptor *particleDescriptor;
@property (nonatomic, retain) PKInkFeatheringDescriptor *pencilFeatheringDescriptor;
@property (nonatomic, readonly) PKInkRenderingDescriptor *renderingDescriptor;
@property (nonatomic, readonly) PKInkParticleDescriptor *secondaryParticleDescriptor;
@property (nonatomic, retain) PKInkSmoothingDescriptor *smoothingDescriptor;
@property (nonatomic) bool supportsCombiningStrokes;
@property (nonatomic) double targetMultiple;
@property (nonatomic, copy) NSArray *uiWidths;
@property (nonatomic) bool useUnclampedWeight;
@property (nonatomic, readonly) NSString *variant;
@property (nonatomic, readonly) unsigned long long version;

+ (double)inkRadiusOverride;
+ (id)loadInkV2WithURL:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_calculateUsesAzimuthOrAltitude;
- (void)addNewInkFunction:(id)arg1;
- (id)animationDescriptor;
- (double)baseAlpha;
- (double)blendAlpha;
- (double)defaultWidth;
- (id)description;
- (id)featheringDescriptor;
- (id)identifier;
- (id)initWithRenderingDescriptor:(id)arg1 blendAlpha:(double)arg2 targetMultiple:(double)arg3 baseAlpha:(double)arg4 inkTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 useUnclampedWeight:(bool)arg6 smoothingDescriptor:(id)arg7 featheringDescriptor:(id)arg8 pencilFeatheringDescriptor:(id)arg9 animationDescriptor:(id)arg10 identifier:(id)arg11 version:(unsigned long long)arg12 variant:(id)arg13 uiWidths:(id)arg14 defaultWidth:(double)arg15 showBrushIndicator:(bool)arg16 supportsCombiningStrokes:(bool)arg17 rulerOffsetScale:(double)arg18 rulerOffsetConstant:(double)arg19 weightFunction:(id)arg20 inkFunctions:(id)arg21;
- (id)initWithRenderingDescriptor:(id)arg1 blendAlpha:(double)arg2 targetMultiple:(double)arg3 baseAlpha:(double)arg4 inkTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 useUnclampedWeight:(bool)arg6 smoothingDescriptor:(id)arg7 featheringDescriptor:(id)arg8 pencilFeatheringDescriptor:(id)arg9 animationDescriptor:(id)arg10 identifier:(id)arg11 version:(unsigned long long)arg12 variant:(id)arg13 uiWidths:(id)arg14 defaultWidth:(double)arg15 showBrushIndicator:(bool)arg16 supportsCombiningStrokes:(bool)arg17 rulerOffsetScale:(double)arg18 rulerOffsetConstant:(double)arg19 weightFunction:(void*)arg20 radiusOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction {} *x_3_1_1; } x3; })arg21 radius2Output:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction {} *x_3_1_1; } x3; })arg22 opacityOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction {} *x_3_1_1; } x3; })arg23 edgeWidthOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction {} *x_3_1_1; } x3; })arg24 aspectRatioOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction {} *x_3_1_1; } x3; })arg25 brushOpacityOutput:(struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::allocator<PKOutputFunction>> { struct PKOutputFunction {} *x_3_1_1; } x3; })arg26;
- (id)initWithRenderingDescriptor:(id)arg1 variant:(id)arg2;
- (void)inkFunctionDidChange:(id)arg1;
- (id)inkFunctions;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })inkTransform;
- (bool)isEraser;
- (id)mutableCopy;
- (id)particleDescriptor;
- (id)pencilFeatheringDescriptor;
- (void)removeInkFunction:(id)arg1;
- (id)renderingDescriptor;
- (id)secondaryParticleDescriptor;
- (void)setAnimationDescriptor:(id)arg1;
- (void)setBaseAlpha:(double)arg1;
- (void)setBlendAlpha:(double)arg1;
- (void)setDefaultWidth:(double)arg1;
- (void)setFeatheringDescriptor:(id)arg1;
- (void)setInkTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPencilFeatheringDescriptor:(id)arg1;
- (void)setSmoothingDescriptor:(id)arg1;
- (void)setSupportsCombiningStrokes:(bool)arg1;
- (void)setTargetMultiple:(double)arg1;
- (void)setUiWidths:(id)arg1;
- (void)setUseUnclampedWeight:(bool)arg1;
- (id)smoothingDescriptor;
- (bool)supportsCombiningStrokes;
- (double)targetMultiple;
- (id)uiWidths;
- (bool)useUnclampedWeight;
- (id)variant;
- (unsigned long long)version;

@end
