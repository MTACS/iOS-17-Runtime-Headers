
@interface PBFGenericDisplayContext : NSObject <PBFDisplayContext> {
    long long  _accessibilityContrast;
    unsigned long long  _cachedHash;
    long long  _interfaceOrientation;
    NSString * _pbf_displayContextPersistenceIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceBounds;
    double  _scale;
    unsigned long long  _significantEventsCounter;
    long long  _userInterfaceStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long pbf_accessibilityContrast;
@property (nonatomic, readonly, copy) NSString *pbf_displayContextPersistenceIdentifier;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pbf_frame;
@property (nonatomic, readonly) long long pbf_interfaceOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pbf_referenceBounds;
@property (nonatomic, readonly) double pbf_scale;
@property (nonatomic, readonly) unsigned long long pbf_significantEventsCounter;
@property (nonatomic, readonly) long long pbf_userInterfaceStyle;
@property (readonly) Class superclass;

+ (id)displayContextForDisplayConfiguration:(id)arg1;
+ (id)displayContextForDisplayIdentifier:(id)arg1;
+ (id)displayContextForPersistenceIdentifier:(id)arg1;
+ (id)displayContextForScreen:(id)arg1;
+ (id)displayContextForScreen:(id)arg1 traitCollection:(id)arg2;
+ (id)genericDisplayContextWithDisplayContext:(id)arg1;
+ (id)mainScreen;
+ (id)mainScreenDisplayContextsForKnownOrientations;

- (void).cxx_destruct;
- (id)description;
- (id)displayContextWithUpdatedAccessibilityContrast:(long long)arg1;
- (id)displayContextWithUpdatedInterfaceOrientation:(long long)arg1;
- (id)displayContextWithUpdatedSignificantEventsCounter:(unsigned long long)arg1;
- (id)displayContextWithUpdatedUserInterfaceStyle:(long long)arg1;
- (bool)geometryIsEqualTo:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 interfaceOrientation:(long long)arg3 sigEventsCounter:(unsigned long long)arg4 userInterfaceStyle:(long long)arg5 accessibilityContrast:(long long)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDisplayContext:(id)arg1;
- (long long)pbf_accessibilityContrast;
- (id)pbf_displayContextPersistenceIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pbf_frame;
- (long long)pbf_interfaceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pbf_referenceBounds;
- (double)pbf_scale;
- (unsigned long long)pbf_significantEventsCounter;
- (long long)pbf_userInterfaceStyle;

@end
