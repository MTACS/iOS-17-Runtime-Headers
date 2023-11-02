
@interface PFParallaxLayoutConfiguration : NSObject <NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inactiveTimeRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _parallaxPadding;
    double  _screenScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _screenSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _timeRect;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inactiveTimeRect;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } parallaxPadding;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } parallaxPaddingPct;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } screenSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } timeOverlapCheckBottom;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } timeOverlapCheckTop;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } timeRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unsafeRect;

+ (id)bestConfigurationForScreenSize:(struct CGSize { double x1; double x2; })arg1 screenScale:(double)arg2 orientation:(long long)arg3;
+ (id)bestConfigurationForScreenSize:(struct CGSize { double x1; double x2; })arg1 screenScale:(double)arg2 startingWithConfiguration:(id)arg3 orientation:(long long)arg4;
+ (id)deviceConfigurationForOrientation:(long long)arg1;
+ (id)genericConfigurationForOrientation:(long long)arg1;
+ (id)genericPadConfigurationForOrientation:(long long)arg1;
+ (id)layoutConfigurationFromDictionary:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inactiveTimeRect;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithScreenSize:(struct CGSize { double x1; double x2; })arg1 screenScale:(double)arg2 denormalizedYDownTimeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 parallaxPadding:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithScreenSize:(struct CGSize { double x1; double x2; })arg1 screenScale:(double)arg2 normalizedTimeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 parallaxPadding:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithScreenSize:(struct CGSize { double x1; double x2; })arg1 screenScale:(double)arg2 normalizedYDownTimeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 parallaxPadding:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithScreenSize:(struct CGSize { double x1; double x2; })arg1 screenScale:(double)arg2 timeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inactiveTimeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 parallaxPadding:(struct CGSize { double x1; double x2; })arg5;
- (id)initWithScreenSize:(struct CGSize { double x1; double x2; })arg1 timeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inactiveTimeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 parallaxPadding:(struct CGSize { double x1; double x2; })arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLayoutConfiguration:(id)arg1;
- (struct CGSize { double x1; double x2; })parallaxPadding;
- (struct CGSize { double x1; double x2; })parallaxPaddingPct;
- (double)screenScale;
- (struct CGSize { double x1; double x2; })screenSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })timeOverlapCheckBottom;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })timeOverlapCheckTop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })timeRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unsafeRect;

@end
