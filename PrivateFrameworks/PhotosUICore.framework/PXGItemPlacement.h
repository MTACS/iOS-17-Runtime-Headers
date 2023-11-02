
@interface PXGItemPlacement : NSObject <NSCopying, PXGMutableItemPlacement> {
    double  _alpha;
    double  _chromeAlpha;
    PXGItemPlacementContext * _context;
    NSObject<UICoordinateSpace> * _coordinateSpace;
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
    <PXDisplayAsset> * _displayedAsset;
    struct { 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } t; 
    }  _displayedAssetContentsRect;
    PXGLayout * _layout;
    double  _legibilityOverlayAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedDisplayedAssetRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedSubtitleRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedTitleRect;
    PXGItemPlacement * _otherItemsPlacement;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    long long  _rectReference;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rectVelocity;
    NSMutableArray * _registeredSourceIdentifiers;
    double  _scrubberAlpha;
    float  _soundVolume;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) PXGItemPlacement *adjustedPreferredPlacement;
@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double chromeAlpha;
@property (nonatomic, readonly) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } cornerRadius;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) <PXDisplayAsset> *displayedAsset;
@property (nonatomic, readonly) struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; } displayedAssetContentsRect;
@property (nonatomic, readonly) bool hasGeometry;
@property (nonatomic, readonly) double legibilityOverlayAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedDisplayedAssetRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedSubtitleRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedTitleRect;
@property (nonatomic, readonly) PXGItemPlacement *otherItemsPlacement;
@property (nonatomic, readonly) PXRegionOfInterest *regionOfInterest;
@property (nonatomic, readonly) double scrubberAlpha;
@property (nonatomic, readonly) float soundVolume;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (void)adjustPreferredPlacementInSourceWithIdentifier:(id)arg1 configuration:(id /* block */)arg2;
- (id)adjustedPreferredPlacement;
- (double)alpha;
- (double)chromeAlpha;
- (id)copyWithConfiguration:(id /* block */)arg1;
- (id)copyWithRegionOfInterest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })cornerRadius;
- (id)diagnosticDescription;
- (id)displayedAsset;
- (struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; })displayedAssetContentsRect;
- (bool)hasGeometry;
- (id)init;
- (id)initWithContext:(id)arg1 configuration:(id /* block */)arg2;
- (double)legibilityOverlayAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedDisplayedAssetRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedSubtitleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedTitleRect;
- (id)otherItemsPlacement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInCoordinateSpace:(id)arg1 velocity:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInLayout:(id)arg1 velocity:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)regionOfInterest;
- (void)registerSourceIdentifier:(id)arg1;
- (double)scrubberAlpha;
- (void)setAlpha:(double)arg1;
- (void)setChromeAlpha:(double)arg1;
- (void)setCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (void)setDisplayedAsset:(id)arg1;
- (void)setDisplayedAssetContentsRect:(struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; })arg1;
- (void)setLegibilityOverlayAlpha:(double)arg1;
- (void)setNormalizedDisplayedAssetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNormalizedSubtitleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNormalizedTitleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOtherItemsPlacement:(id)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 velocity:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inCoordinateSpace:(id)arg3;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 velocity:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inLayout:(id)arg3;
- (void)setScrubberAlpha:(double)arg1;
- (void)setSoundVolume:(float)arg1;
- (float)soundVolume;
- (id)uuid;

@end
