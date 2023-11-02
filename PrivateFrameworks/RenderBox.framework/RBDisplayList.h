
@interface RBDisplayList : NSObject <RBDisplayListContents, _RBDisplayListContents> {
    unsigned int  _active_states;
    struct objc_ptr<void (^)(_RBDrawingState *, unsigned long)>="_p"@? {}  _cgStyleHandler;
    struct vector<std::pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *>, 1UL, unsigned int> { 
        unsigned char _p[16]; 
        void *_p; 
        unsigned int _size; 
        unsigned int _capacity; 
    }  _contexts;
    double  _deviceScale;
    struct DisplayList { 
        unsigned int _crop_seed; 
        unsigned int _layer_id; 
        struct refcounted_ptr<RB::DisplayList::Contents> { 
            struct Contents {} *_p; 
        } _contents; 
        struct Pool<RB::DisplayList::State, const RB::Malloc> { 
            struct Item {} *_freelist; 
        } _state_pool; 
        struct Pool<RB::DisplayList::LayerState, RB::Heap> { 
            struct Item {} *_freelist; 
        } _layer_state_pool; 
        struct LayerState {} *_active_layer; 
        struct State { 
            struct State {} *_next; 
            void *_context; 
            struct AffineTransform { 
                /* Warning: Unrecognized filer type: '"' using 'void*' */ void*ab; 
            } _ctm; 
            struct Identity { 
                unsigned int identifier; 
                struct UUID { 
                    unsigned char bytes[16]; 
                } ns; 
            } _identity; 
            struct refcounted_ptr<const RB::Transition> { 
                struct Transition {} *_p; 
            } _transition; 
            struct ClipNode {} *_clip; 
            struct Style {} *_style; 
            struct AffineTransform {} *_copied_ctm; 
            struct Metadata {} *_copied_metadata; 
            struct Bounds { 
                void*origin; 
            } _crop; 
            unsigned int _layer_id; 
            unsigned int _crop_seed; 
            struct optional_float { 
                float _value_or_nan; 
            } _numeric_value; 
            struct optional<RB::ColorSpace> { 
                union { 
                    BOOL __null_state_; 
                    unsigned char __val_; 
                } ; 
                bool __engaged_; 
            } _default_color_space; 
            struct TextIdentity {} *_text_identity; 
        } _root_state; 
        struct LayerState { 
            struct Layer {} *_layer; 
            struct LayerState {} *_next_layer; 
            struct Rect { 
                void*origin; 
            } _crop; 
            unsigned int _crop_seed; 
        } _root_layer_state; 
        struct State {} *_state; 
        bool _optimized; 
    }  _list;
    unsigned int  _profile;
    struct unique_ptr<RB::XML::Document, std::default_delete<RB::XML::Document>> { 
        struct __compressed_pair<RB::XML::Document *, std::default_delete<RB::XML::Document>> { 
            struct Document {} *__value_; 
        } __ptr_; 
    }  _xml_document;
}

@property (nonatomic, copy) id /* block */ CGStyleHandler;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } CTM;
@property (nonatomic, readonly) const void*_rb_contents;
@property (nonatomic, readonly) const void*_rb_xml_document;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clipBoundingBox;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int defaultColorSpace;
@property (readonly, copy) NSString *description;
@property (nonatomic) double deviceScale;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int identifier;
@property (nonatomic, readonly, copy) NSUUID *identifierNamespace;
@property (nonatomic) bool linearColors;
@property (nonatomic) unsigned int profile;
@property (readonly) Class superclass;
@property (nonatomic, copy) RBTransition *transition;
@property (nonatomic, readonly, copy) NSString *xmlDescription;

+ (id)decodedObjectWithData:(id)arg1 delegate:(id)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id /* block */)CGStyleHandler;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CTM;
- (void)_drawInState:(struct _RBDrawingState { }*)arg1 alpha:(float)arg2;
- (const void*)_rb_contents;
- (const void*)_rb_xml_document;
- (void)addAffineTransformStyle:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)addAlphaGradientFilterWithStopCount:(long long)arg1 colors:(const struct { float x1; float x2; float x3; float x4; }*)arg2 colorSpace:(int)arg3 locations:(const double*)arg4 flags:(unsigned int)arg5;
- (void)addAlphaMultiplyFilterWithColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)addAlphaMultiplyFilterWithColor:(struct { float x1; float x2; float x3; float x4; })arg1 colorSpace:(int)arg2 flags:(unsigned int)arg3;
- (void)addAlphaThresholdFilterWithAlpha:(float)arg1 color:(struct { float x1; float x2; float x3; float x4; })arg2 colorSpace:(int)arg3;
- (void)addAlphaThresholdFilterWithMinAlpha:(float)arg1 maxAlpha:(float)arg2 color:(struct { float x1; float x2; float x3; float x4; })arg3 colorSpace:(int)arg4;
- (void)addAnimationStyle:(id)arg1 id:(struct { unsigned char x1[16]; })arg2;
- (void)addBlurFilterWithRadius:(double)arg1;
- (void)addBlurFilterWithRadius:(double)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 flags:(unsigned int)arg3;
- (void)addBlurFilterWithRadius:(double)arg1 flags:(unsigned int)arg2;
- (void)addBlurFilterWithRadius:(double)arg1 opaque:(bool)arg2;
- (void)addBrightnessFilterWithAmount:(float)arg1;
- (void)addBrightnessFilterWithAmount:(float)arg1 flags:(unsigned int)arg2;
- (void)addColorInvertFilter;
- (void)addColorInvertFilterWithAmount:(float)arg1 flags:(unsigned int)arg2;
- (void)addColorMatrixFilterWithArray:(float)arg1;
- (void)addColorMatrixFilterWithArray:(float)arg1 flags:(unsigned int)arg2;
- (void)addColorMonochromeFilterWithAmount:(float)arg1 color:(struct { float x1; float x2; float x3; float x4; })arg2 bias:(float)arg3;
- (void)addColorMonochromeFilterWithAmount:(float)arg1 color:(struct { float x1; float x2; float x3; float x4; })arg2 colorSpace:(int)arg3 bias:(float)arg4 flags:(unsigned int)arg5;
- (void)addColorMultiplyFilterWithColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)addColorMultiplyFilterWithColor:(struct { float x1; float x2; float x3; float x4; })arg1 colorSpace:(int)arg2 flags:(unsigned int)arg3;
- (void)addContrastFilterWithAmount:(float)arg1;
- (void)addContrastFilterWithAmount:(float)arg1 flags:(unsigned int)arg2;
- (void)addFilterWithShader:(id)arg1 border:(struct CGSize { double x1; double x2; })arg2 bounds:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 flags:(unsigned int)arg4;
- (void)addGrayscaleFilterWithAmount:(float)arg1;
- (void)addGrayscaleFilterWithAmount:(float)arg1 flags:(unsigned int)arg2;
- (void)addHueRotationFilterWithAngle:(double)arg1;
- (void)addHueRotationFilterWithAngle:(double)arg1 flags:(unsigned int)arg2;
- (void)addLuminanceCurveFilterWithCurve:(float)arg1 color:(struct { float x1; float x2; float x3; float x4; })arg2 colorSpace:(int)arg3 flags:(unsigned int)arg4;
- (void)addLuminanceToAlphaFilter;
- (void)addLuminanceToAlphaFilterWithFlags:(unsigned int)arg1;
- (void)addPathProjectionStyleWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 path:(struct RBPath { void *x1; struct RBPathCallbacks {} *x2; })arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 flags:(unsigned int)arg5;
- (void)addPredicateStyle:(id)arg1;
- (void)addProjectionStyleWithArray:(float)arg1;
- (void)addRGBACurvesFilterWithCurves:(float)arg1 flags:(unsigned int)arg2;
- (void)addRotation3DStyleWithAngle:(double)arg1 axis:(struct { float x1; float x2; float x3; })arg2 anchor:(struct { float x1; float x2; float x3; })arg3 perspective:(double)arg4 flipWidth:(double)arg5;
- (void)addRotationStyleWithAngle:(double)arg1 anchor:(struct CGPoint { double x1; double x2; })arg2;
- (void)addSaturationFilterWithAmount:(float)arg1;
- (void)addSaturationFilterWithAmount:(float)arg1 flags:(unsigned int)arg2;
- (void)addScaleStyleWithScale:(struct CGSize { double x1; double x2; })arg1 anchor:(struct CGPoint { double x1; double x2; })arg2;
- (void)addShadowStyleWithRadius:(double)arg1 offset:(struct CGSize { double x1; double x2; })arg2 color:(struct { float x1; float x2; float x3; float x4; })arg3 colorSpace:(int)arg4 blendMode:(int)arg5 flags:(unsigned int)arg6;
- (void)addShadowStyleWithRadius:(double)arg1 offset:(struct CGSize { double x1; double x2; })arg2 color:(struct { float x1; float x2; float x3; float x4; })arg3 mode:(unsigned int)arg4;
- (void)addTransformStyle:(id)arg1;
- (void)addTranslationStyleWithOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)addVariableBlurFilterWithRadius:(double)arg1 mask:(id)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 flags:(unsigned int)arg4;
- (void)addVariableBlurLayerWithAlpha:(float)arg1 scale:(double)arg2 radius:(double)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 flags:(unsigned int)arg5;
- (struct CGContext { }*)beginCGContextWithAlpha:(float)arg1;
- (struct CGContext { }*)beginCGContextWithAlpha:(float)arg1 flags:(unsigned int)arg2;
- (void)beginLayer;
- (void)beginLayerWithFlags:(unsigned int)arg1;
- (void)beginRecordingXML;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (void)clear;
- (void)clearCaches;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipBoundingBox;
- (void)clipLayerWithAlpha:(float)arg1 mode:(int)arg2;
- (void)clipShape:(id)arg1 alpha:(float)arg2 mode:(int)arg3;
- (void)clipShape:(id)arg1 mode:(int)arg2;
- (void)concat:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (void)dealloc;
- (id)debugDescription;
- (int)defaultColorSpace;
- (double)deviceScale;
- (void)drawDisplayList:(id)arg1;
- (void)drawDisplayList:(id)arg1 alpha:(float)arg2;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(float)arg2 blendMode:(int)arg3 flags:(unsigned int)arg4 operation:(id /* block */)arg5;
- (void)drawInState:(struct _RBDrawingState { }*)arg1;
- (void)drawLayerWithAlpha:(float)arg1 blendMode:(int)arg2;
- (void)drawShape:(id)arg1 fill:(id)arg2 alpha:(float)arg3 blendMode:(int)arg4;
- (id)encodedDataForDelegate:(id)arg1 error:(id*)arg2;
- (void)endCGContext;
- (unsigned int)identifier;
- (id)identifierNamespace;
- (id)init;
- (bool)isEmpty;
- (bool)linearColors;
- (id)moveContents;
- (unsigned int)profile;
- (void)renderInContext:(struct CGContext { }*)arg1 options:(id)arg2;
- (void)restore;
- (void)rotateBy:(double)arg1;
- (void)save;
- (void)scaleByX:(double)arg1 Y:(double)arg2;
- (void)setCGStyleHandler:(id /* block */)arg1;
- (void)setCTM:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDefaultColorSpace:(int)arg1;
- (void)setDeviceScale:(double)arg1;
- (void)setIdentifier:(unsigned int)arg1 namespace:(id)arg2;
- (void)setLinearColors:(bool)arg1;
- (void)setProfile:(unsigned int)arg1;
- (void)setTransition:(id)arg1;
- (void)setValue:(id)arg1 forAttribute:(unsigned int)arg2;
- (id)transition;
- (void)translateByX:(double)arg1 Y:(double)arg2;
- (id)valueForAttribute:(unsigned int)arg1;
- (id)xmlDescription;

@end
