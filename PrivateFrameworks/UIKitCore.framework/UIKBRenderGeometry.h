
@interface UIKBRenderGeometry : NSObject <NSCopying> {
    unsigned long long  _concaveCorner;
    struct CGSize { 
        double width; 
        double height; 
    }  _concaveCornerOffset;
    bool  _detachedVariants;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _displayFrame;
    long long  _flickDirection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layeredBackgroundPaddedFrame;
    double  _layeredBackgroundRoundRectRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layeredForegroundPaddedFrame;
    double  _layeredForegroundRoundRectRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _paddedFrame;
    int  _popupBias;
    long long  _popupDirection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _popupSource;
    unsigned long long  _roundRectCorners;
    double  _roundRectRadius;
    NSValue * _splitLeftRect;
    NSValue * _splitRightRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _symbolFrame;
    bool  _tallPopup;
}

@property (nonatomic) unsigned long long concaveCorner;
@property (nonatomic) struct CGSize { double x1; double x2; } concaveCornerOffset;
@property (nonatomic) bool detachedVariants;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } displayFrame;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } displayInsets;
@property (nonatomic) long long flickDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layeredBackgroundPaddedFrame;
@property (nonatomic) double layeredBackgroundRoundRectRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layeredForegroundPaddedFrame;
@property (nonatomic) double layeredForegroundRoundRectRadius;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } paddedFrame;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paddedInsets;
@property (nonatomic) int popupBias;
@property (nonatomic) long long popupDirection;
@property (nonatomic) struct CGPoint { double x1; double x2; } popupSource;
@property (nonatomic) unsigned long long roundRectCorners;
@property (nonatomic) double roundRectRadius;
@property (nonatomic, retain) NSValue *splitLeftRect;
@property (nonatomic, retain) NSValue *splitRightRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } symbolFrame;
@property (nonatomic) bool tallPopup;

+ (id)geometryWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 paddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)geometryWithShape:(id)arg1;
+ (id)sortedGeometries:(id)arg1 leftToRight:(bool)arg2;

- (void).cxx_destruct;
- (id)_copyForDirection:(long long)arg1 positionFactor:(double)arg2 inwardSizeFactor:(double)arg3 outwardSizeFactor:(double)arg4 perpendicularSizeFactor:(double)arg5 sizeAspectRatio:(double)arg6 scale:(double)arg7;
- (void)adjustForConsistentGapsWithSize:(struct CGSize { double x1; double x2; })arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (unsigned long long)adjustForTranslucentGapsInFrameWithSize_10Key:(struct CGSize { double x1; double x2; })arg1 centerX:(double)arg2 bottomEdge:(bool)arg3 topEdge:(bool)arg4;
- (unsigned long long)adjustForTranslucentGapsWithSize:(struct CGSize { double x1; double x2; })arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)adjustToTopWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)applyInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)applyOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)applyShadowInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (unsigned long long)concaveCorner;
- (struct CGSize { double x1; double x2; })concaveCornerOffset;
- (id)copyForFlickDirection:(long long)arg1 scale:(double)arg2;
- (id)copyForPopupDirection:(long long)arg1 scale:(double)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)detachedVariants;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })displayFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })displayInsets;
- (long long)flickDirection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)iPadVariantGeometries:(unsigned long long)arg1 rowLimit:(long long)arg2;
- (id)iPhoneVariantGeometries:(unsigned long long)arg1 annotationIndex:(unsigned long long)arg2;
- (id)initWithShape:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layeredBackgroundPaddedFrame;
- (double)layeredBackgroundRoundRectRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layeredForegroundPaddedFrame;
- (double)layeredForegroundRoundRectRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)makeIntegralWithScale:(double)arg1;
- (void)overlayWithGeometry:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddedInsets;
- (int)popupBias;
- (long long)popupDirection;
- (struct CGPoint { double x1; double x2; })popupSource;
- (unsigned long long)roundRectCorners;
- (double)roundRectRadius;
- (void)setConcaveCorner:(unsigned long long)arg1;
- (void)setConcaveCornerOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setDetachedVariants:(bool)arg1;
- (void)setDisplayFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFlickDirection:(long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayeredBackgroundPaddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayeredBackgroundRoundRectRadius:(double)arg1;
- (void)setLayeredForegroundPaddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayeredForegroundRoundRectRadius:(double)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPaddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPopupBias:(int)arg1;
- (void)setPopupDirection:(long long)arg1;
- (void)setPopupSource:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRoundRectCorners:(unsigned long long)arg1;
- (void)setRoundRectRadius:(double)arg1;
- (void)setSplitLeftRect:(id)arg1;
- (void)setSplitRightRect:(id)arg1;
- (void)setSymbolFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTallPopup:(bool)arg1;
- (id)similarShape;
- (id)splitLeftRect;
- (id)splitRightRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })symbolFrame;
- (bool)tallPopup;
- (id)watchVariantGeometries:(unsigned long long)arg1 annotationIndex:(unsigned long long)arg2;

@end
