
@interface PUCropAspect : NSObject {
    bool  _allowOrientationChange;
    double  _height;
    NSString * _localizedName;
    double  _width;
}

@property (nonatomic) bool allowOrientationChange;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) double ratio;
@property (nonatomic, readonly) double width;

+ (id)allAspectsWithOriginalSize:(struct CGSize { double x1; double x2; })arg1 currentSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)originalAspectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_initWithWidth:(double)arg1 height:(double)arg2 localizedName:(id)arg3;
- (bool)allowOrientationChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 boundingAngle:(double)arg3 minSize:(struct CGSize { double x1; double x2; })arg4;
- (id)description;
- (unsigned long long)hash;
- (double)height;
- (double)heightForWidth:(double)arg1;
- (id)init;
- (id)initWithWidth:(double)arg1 height:(double)arg2;
- (id)inverseAspect;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCropAspect:(id)arg1;
- (bool)isEquivalentToCropAspect:(id)arg1;
- (bool)isFreeformCrop;
- (id)localizedName;
- (double)ratio;
- (void)setAllowOrientationChange:(bool)arg1;
- (double)width;
- (double)widthForHeight:(double)arg1;

@end
