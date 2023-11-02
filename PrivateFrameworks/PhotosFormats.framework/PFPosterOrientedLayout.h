
@interface PFPosterOrientedLayout : NSObject {
    unsigned long long  _clockIntersection;
    NSString * _clockLayerOrder;
    NSArray * _debugLayouts;
    struct CGSize { 
        double width; 
        double height; 
    }  _deviceResolution;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inactiveFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _parallaxPadding;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _timeFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleFrame;
}

@property (nonatomic, readonly) bool canApplyParallax;
@property (nonatomic, readonly) unsigned long long clockIntersection;
@property (nonatomic, readonly) NSString *clockLayerOrder;
@property (nonatomic, readonly) PFParallaxLayoutConfiguration *configuration;
@property (nonatomic, readonly, copy) NSArray *debugLayouts;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } deviceResolution;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } extendedImageExtent;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } extendedImageSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inactiveFrame;
@property (nonatomic, readonly) bool isUsingHeadroom;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedVisibleFrame;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } parallaxInactiveFrame;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } parallaxPadding;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } parallaxVisibleFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } timeFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleFrame;

+ (id)layoutWithDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (bool)canApplyParallax;
- (unsigned long long)clockIntersection;
- (id)clockLayerOrder;
- (id)configuration;
- (id)debugDescription;
- (id)debugLayouts;
- (id)debugSwiftCode;
- (id)description;
- (struct CGSize { double x1; double x2; })deviceResolution;
- (id)dictionaryRepresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extendedImageExtent;
- (struct CGSize { double x1; double x2; })extendedImageSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageExtent;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inactiveFrame;
- (id)initWithImageSize:(struct CGSize { double x1; double x2; })arg1 deviceResolution:(struct CGSize { double x1; double x2; })arg2 parallaxPadding:(struct CGSize { double x1; double x2; })arg3 visibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 inactiveFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 timeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 clockLayerOrder:(id)arg7 clockIntersection:(unsigned long long)arg8 debugLayouts:(id)arg9;
- (bool)isUsingHeadroom;
- (id)layoutByConformingGenericConfigurationToDevice:(id)arg1;
- (id)layoutByUpdatingClockIntersection:(unsigned long long)arg1;
- (id)layoutByUpdatingClockLayerOrder:(id)arg1;
- (id)layoutByUpdatingConfiguration:(id)arg1;
- (id)layoutByUpdatingImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)layoutByUpdatingInactiveFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutByUpdatingNormalizedVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutByUpdatingVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutByUpgradingToConfiguration:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedVisibleFrame;
- (long long)orientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })parallaxInactiveFrame;
- (struct CGSize { double x1; double x2; })parallaxPadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })parallaxVisibleFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenExtent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })timeFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;

@end
