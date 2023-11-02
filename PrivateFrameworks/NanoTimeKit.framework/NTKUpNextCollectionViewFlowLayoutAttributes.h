
@interface NTKUpNextCollectionViewFlowLayoutAttributes : UICollectionViewLayoutAttributes {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _computedFrame;
    double  _darkeningAlphaUniform;
    bool  _fullyVisibleToUser;
    long long  _layoutMode;
    bool  _notVisibleToUser;
    double  _scale;
    double  _shadowAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unitFrameOnScreen;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } computedFrame;
@property (nonatomic) double darkeningAlphaUniform;
@property (nonatomic) bool fullyVisibleToUser;
@property (nonatomic) long long layoutMode;
@property (nonatomic) bool notVisibleToUser;
@property (nonatomic) double scale;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unitFrameOnScreen;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computedFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)darkeningAlphaUniform;
- (bool)fullyVisibleToUser;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)layoutMode;
- (bool)notVisibleToUser;
- (double)scale;
- (void)setComputedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDarkeningAlphaUniform:(double)arg1;
- (void)setFullyVisibleToUser:(bool)arg1;
- (void)setLayoutMode:(long long)arg1;
- (void)setNotVisibleToUser:(bool)arg1;
- (void)setScale:(double)arg1;
- (void)setShadowAlpha:(double)arg1;
- (void)setUnitFrameOnScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)shadowAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unitFrameOnScreen;

@end
