
@interface NSStringDrawingContext : NSObject <NSLayoutManagerDelegate> {
    CUICatalog * _CUICatalog;
    CUIStyleEffectConfiguration * _CUIStyleEffects;
    double  _actualScaleFactor;
    double  _actualTrackingAdjustment;
    double  _baselineOffset;
    double  _firstBaselineOffset;
    id  _layout;
    id /* block */  _linkTextAttributesProvider;
    unsigned long long  _maximumNumberOfLines;
    double  _minimumScaleFactor;
    double  _minimumTrackingAdjustment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _multilineDeviceMetricsRect;
    unsigned long long  _numberOfLineFragments;
    double  _scaledBaselineOffset;
    double  _scaledLineHeight;
    struct { 
        unsigned int _wantsNumberOfLineFragments : 1; 
        unsigned int _wrapsForTruncationMode : 1; 
        unsigned int _wantsBaselineOffset : 1; 
        unsigned int _wantsScaledBaselineOffset : 1; 
        unsigned int _wantsScaledLineHeight : 1; 
        unsigned int _drawsDebugBaselines : 1; 
        unsigned int _wantsMultipleDeviceMetrics : 1; 
        unsigned int _cachesLayout : 1; 
        unsigned int _usesSimpleTextEffects : 1; 
        unsigned int _activeRenderers : 4; 
        unsigned int _applicationPlatformContext : 3; 
    }  _sdcFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _totalBounds;
}

@property (nonatomic) unsigned long long activeRenderers;
@property (nonatomic) double actualScaleFactor;
@property (nonatomic, readonly) double actualTrackingAdjustment;
@property (nonatomic) double actualTrackingAdjustment;
@property (nonatomic) double baselineOffset;
@property (nonatomic) bool cachesLayout;
@property (nonatomic, retain) CUICatalog *cuiCatalog;
@property (nonatomic, retain) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawsDebugBaselines;
@property (nonatomic) double firstBaselineOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id layout;
@property (copy) id /* block */ linkTextAttributesProvider;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) double minimumTrackingAdjustment;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } multilineDeviceMetricsRect;
@property (nonatomic) unsigned long long numberOfLineFragments;
@property (nonatomic) double scaledBaselineOffset;
@property (nonatomic) double scaledLineHeight;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } totalBounds;
@property (nonatomic) bool usesSimpleTextEffects;
@property (nonatomic) bool wantsBaselineOffset;
@property (nonatomic) bool wantsMultilineDeviceMetrics;
@property (nonatomic) bool wantsNumberOfLineFragments;
@property (nonatomic) bool wantsScaledBaselineOffset;
@property (nonatomic) bool wantsScaledLineHeight;
@property (nonatomic) bool wrapsForTruncationMode;

- (unsigned long long)activeRenderers;
- (double)actualScaleFactor;
- (double)actualTrackingAdjustment;
- (long long)applicationFrameworkContext;
- (double)baselineOffset;
- (bool)cachesLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cuiCatalog;
- (id)cuiStyleEffects;
- (void)dealloc;
- (id)description;
- (bool)drawsDebugBaselines;
- (double)firstBaselineOffset;
- (id)init;
- (id)layout;
- (id)layoutManager:(id)arg1 linkAttributesForAttributes:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (id /* block */)linkTextAttributesProvider;
- (unsigned long long)maximumNumberOfLines;
- (double)minimumScaleFactor;
- (double)minimumTrackingAdjustment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })multilineDeviceMetricsRect;
- (unsigned long long)numberOfLineFragments;
- (double)scaledBaselineOffset;
- (double)scaledLineHeight;
- (void)setActiveRenderers:(unsigned long long)arg1;
- (void)setActualScaleFactor:(double)arg1;
- (void)setActualTrackingAdjustment:(double)arg1;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (void)setBaselineOffset:(double)arg1;
- (void)setCachesLayout:(bool)arg1;
- (void)setCuiCatalog:(id)arg1;
- (void)setCuiStyleEffects:(id)arg1;
- (void)setDrawsDebugBaselines:(bool)arg1;
- (void)setFirstBaselineOffset:(double)arg1;
- (void)setLayout:(id)arg1;
- (void)setLinkTextAttributesProvider:(id /* block */)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setMinimumTrackingAdjustment:(double)arg1;
- (void)setMultilineDeviceMetricsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNumberOfLineFragments:(unsigned long long)arg1;
- (void)setScaledBaselineOffset:(double)arg1;
- (void)setScaledLineHeight:(double)arg1;
- (void)setTotalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUsesSimpleTextEffects:(bool)arg1;
- (void)setWantsBaselineOffset:(bool)arg1;
- (void)setWantsMultilineDeviceMetrics:(bool)arg1;
- (void)setWantsNumberOfLineFragments:(bool)arg1;
- (void)setWantsScaledBaselineOffset:(bool)arg1;
- (void)setWantsScaledLineHeight:(bool)arg1;
- (void)setWrapsForTruncationMode:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })totalBounds;
- (bool)usesSimpleTextEffects;
- (bool)wantsBaselineOffset;
- (bool)wantsMultilineDeviceMetrics;
- (bool)wantsNumberOfLineFragments;
- (bool)wantsScaledBaselineOffset;
- (bool)wantsScaledLineHeight;
- (bool)wrapsForTruncationMode;

@end
