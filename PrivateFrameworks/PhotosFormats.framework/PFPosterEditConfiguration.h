
@interface PFPosterEditConfiguration : NSObject <NSCopying, NSSecureCoding, PFPosterConfigurationAnalyticsSupport> {
    bool  _isDepthAvailable;
    bool  _isDepthEnabled;
    bool  _isLandscapeDepthEnabled;
    bool  _isPerspectiveZoomEnabled;
    bool  _isSettlingEffectAvailable;
    bool  _isSettlingEffectEnabled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedLandscapeVisibleFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedVisibleFrame;
    PFParallaxLayerStyle * _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDepthAvailable;
@property (nonatomic) bool isDepthEnabled;
@property (nonatomic) bool isLandscapeDepthEnabled;
@property (nonatomic) bool isPerspectiveZoomEnabled;
@property (nonatomic) bool isSettlingEffectAvailable;
@property (nonatomic) bool isSettlingEffectEnabled;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedLandscapeVisibleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedVisibleFrame;
@property (nonatomic, retain) PFParallaxLayerStyle *style;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsPayload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDepthAvailable;
- (bool)isDepthEnabled;
- (bool)isLandscapeDepthEnabled;
- (bool)isPerspectiveZoomEnabled;
- (bool)isSettlingEffectAvailable;
- (bool)isSettlingEffectEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedLandscapeVisibleFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedVisibleFrame;
- (void)setIsDepthAvailable:(bool)arg1;
- (void)setIsDepthEnabled:(bool)arg1;
- (void)setIsLandscapeDepthEnabled:(bool)arg1;
- (void)setIsPerspectiveZoomEnabled:(bool)arg1;
- (void)setIsSettlingEffectAvailable:(bool)arg1;
- (void)setIsSettlingEffectEnabled:(bool)arg1;
- (void)setNormalizedLandscapeVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNormalizedVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStyle:(id)arg1;
- (id)style;

@end
