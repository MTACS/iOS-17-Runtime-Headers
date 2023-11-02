
@interface PXGGeneratedLayout : PXGItemsLayout <PXGDiagnosticsProvider> {
    struct { 
        union { 
            struct { 
                float topLeft; 
                float topRight; 
                float bottomLeft; 
                float bottomRight; 
            } ; 
            float byIndex[4]; 
        } ; 
    }  _cornerRadius;
    long long  _defaultSpriteTag;
    PXLayoutGenerator * _generator;
    struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; } * _generatorGeometryBuffer;
    long long  _generatorGeometryBufferCount;
    PXGLayoutGuide * _headerLayoutGuide;
    double  _interitemSpacing;
    bool  _isUpdatingSprites;
    long long  _keyItemIndex;
    long long  _keyItemSpriteTag;
    unsigned char  _mediaKind;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    bool  _useSaliency;
}

@property (nonatomic) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultSpriteTag;
@property (nonatomic) <PXGGeneratedLayoutDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *diagnosticDescription;
@property (nonatomic, readonly) PXLayoutGenerator *generator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXGLayoutGuide *headerLayoutGuide;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long keyItemIndex;
@property (nonatomic) long long keyItemSpriteTag;
@property (nonatomic) unsigned char mediaKind;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (readonly) Class superclass;
@property (nonatomic) bool useSaliency;

- (void).cxx_destruct;
- (void)_resizeGeometryBufferForSpriteCount:(long long)arg1;
- (void)_updateContentSize;
- (void)_updateGenerator;
- (void)_updateSprites;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })cornerRadius;
- (void)dealloc;
- (long long)defaultSpriteTag;
- (id)diagnosticDescription;
- (void)didApplySpriteChangeDetails:(id)arg1;
- (void)displayScaleDidChange;
- (void)enumerateItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)generator;
- (void)getSpriteZPosition:(out float*)arg1 clippingRect:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forSpriteKind:(long long)arg3;
- (id)headerLayoutGuide;
- (id)init;
- (double)interitemSpacing;
- (long long)keyItemIndex;
- (long long)keyItemSpriteTag;
- (unsigned char)mediaKind;
- (void)metricsDidChange;
- (id)newGenerator;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)referenceSizeDidChange;
- (void)setCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (void)setDefaultSpriteTag:(long long)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setKeyItemIndex:(long long)arg1;
- (void)setKeyItemSpriteTag:(long long)arg1;
- (void)setMediaKind:(unsigned char)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUseSaliency:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeForItem:(long long)arg1;
- (void)spritesDidUpdate;
- (void)update;
- (bool)useSaliency;

@end
