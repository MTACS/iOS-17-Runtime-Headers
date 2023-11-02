
@interface PXGSingleViewLayout : PXGLayout <PXGViewSource> {
    NSIndexSet * _axSpriteIndexes;
    unsigned short  _contentSpriteMediaVersion;
    UIView * _contentView;
    Class  _contentViewClass;
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
    <PXGSingleViewLayoutDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    long long  _style;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    float  _zPosition;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) Class contentViewClass;
@property (nonatomic) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGSingleViewLayoutDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int viewSpriteIndex;
@property (nonatomic, readonly) PXGSpriteReference *viewSpriteReference;
@property (nonatomic) float zPosition;

- (void).cxx_destruct;
- (void)_invalidateContent;
- (void)_invalidateMediaVersion;
- (void)_updateContent;
- (void)alphaDidChange;
- (void)appearStateDidChange;
- (id)axSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)contentView;
- (Class)contentViewClass;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })cornerRadius;
- (void)dealloc;
- (id)delegate;
- (void)didUpdate;
- (void)displayScaleDidChange;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (id)init;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)referenceSizeDidChange;
- (void)setContentView:(id)arg1;
- (void)setContentViewClass:(Class)arg1;
- (void)setCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setStyle:(long long)arg1;
- (void)setZPosition:(float)arg1;
- (long long)style;
- (void)update;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)viewContentDidChange;
- (void)viewSizeDidChange;
- (unsigned int)viewSpriteIndex;
- (id)viewSpriteReference;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)willUpdate;
- (float)zPosition;

@end
