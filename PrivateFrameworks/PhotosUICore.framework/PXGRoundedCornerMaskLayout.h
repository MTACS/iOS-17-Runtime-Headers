
@interface PXGRoundedCornerMaskLayout : PXGLayout <PXGPathSource, PXGSolidColorSource> {
    bool  _continuousCorners;
    double  _cornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    double  _leftMaskWidth;
    UIColor * _maskColor;
    double  _maskScale;
    long long  _mediaVersion;
    double  _rightMaskWidth;
    struct _PXGSpriteIndexRange { 
        unsigned int location; 
        unsigned int length; 
    }  _sideMaskSpriteIndexRange;
    PXGPath * _topLeftPath;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic) bool continuousCorners;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) double leftMaskWidth;
@property (nonatomic, retain) UIColor *maskColor;
@property (nonatomic) double maskScale;
@property (nonatomic) double rightMaskWidth;
@property (readonly) Class superclass;
@property (nonatomic, copy) PXGPath *topLeftPath;

- (void).cxx_destruct;
- (void)_invalidateContent;
- (void)_invalidatePath;
- (void)_updateContent;
- (void)_updatePath;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)contentSizeDidChange;
- (bool)continuousCorners;
- (double)cornerRadius;
- (void)displayScaleDidChange;
- (id)initWithCornerRadius:(double)arg1 continuousCorners:(bool)arg2 maskColor:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (double)leftMaskWidth;
- (id)maskColor;
- (double)maskScale;
- (id)pathForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)referenceSizeDidChange;
- (double)rightMaskWidth;
- (void)setContinuousCorners:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLeftMaskWidth:(double)arg1;
- (void)setMaskColor:(id)arg1;
- (void)setMaskScale:(double)arg1;
- (void)setRightMaskWidth:(double)arg1;
- (void)setTopLeftPath:(id)arg1;
- (id)topLeftPath;
- (void)update;

@end
