
@interface NUNIAstronomyLocationDotConfiguration : NSObject {
    double  _defaultInnerDotDiameter;
    double  _defaultOuterDotDiameter;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultSize;
    double  _screenScale;
}

@property (nonatomic) double defaultInnerDotDiameter;
@property (nonatomic) double defaultOuterDotDiameter;
@property (nonatomic) struct CGSize { double x1; double x2; } defaultSize;
@property (nonatomic) double screenScale;

+ (double)_defaultInnerDotDiameterForDevice:(id)arg1;
+ (double)_defaultOuterDotDiameterForDevice:(id)arg1;
+ (struct CGSize { double x1; double x2; })_defaultSizeForDevice:(id)arg1;

- (double)defaultInnerDotDiameter;
- (double)defaultOuterDotDiameter;
- (struct CGSize { double x1; double x2; })defaultSize;
- (id)init;
- (double)screenScale;
- (void)setDefaultInnerDotDiameter:(double)arg1;
- (void)setDefaultOuterDotDiameter:(double)arg1;
- (void)setDefaultSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScreenScale:(double)arg1;

@end
