
@interface PXGAnimatorLayout : NSObject {
    PXGAnimator * _animator;
    struct PXGCameraConfiguration { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } viewMatrix; 
        struct { 
            void*columns[4]; 
        } billboardMatrix; 
    }  _cameraConfiguration;
    PXGLayout * _inputLayout;
}

@property (nonatomic, readonly) PXGAnimator *animator;
@property (nonatomic) struct PXGCameraConfiguration { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; } cameraConfiguration;
@property (nonatomic, retain) PXGLayout *inputLayout;

- (void).cxx_destruct;
- (id)animator;
- (struct PXGCameraConfiguration { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; })cameraConfiguration;
- (struct CGSize { double x1; double x2; })contentSize;
- (unsigned int)convertSpriteIndex:(unsigned int)arg1 fromLayout:(id)arg2;
- (void)enumerateDescendantsLayoutsUsingBlock:(id /* block */)arg1;
- (void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)fences;
- (id)init;
- (id)initWithAnimator:(id)arg1;
- (id)inputLayout;
- (bool)isSpriteIndex:(unsigned int)arg1 decoratingSpriteWithIndex:(out unsigned int*)arg2;
- (id)leafSublayoutForSpriteIndex:(unsigned int)arg1;
- (unsigned int)numberOfSprites;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)removeAllFences;
- (id)rootLayout;
- (void)setCameraConfiguration:(struct PXGCameraConfiguration { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; struct { void*x_2_1_1[4]; } x2; })arg1;
- (void)setInputLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
