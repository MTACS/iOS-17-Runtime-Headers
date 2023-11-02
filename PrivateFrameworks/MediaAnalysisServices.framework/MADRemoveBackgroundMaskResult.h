
@interface MADRemoveBackgroundMaskResult : MADResult {
    NSIndexSet * _allInstances;
    NSNumber * _animatedStickerScore;
    float  _confidence;
    struct CF<CGImage *> { 
        struct CGImage {} *value_; 
    }  _instanceMaskImage;
    struct CF<__CVBuffer *> { 
        struct __CVBuffer {} *value_; 
    }  _instanceMaskPixelBuffer;
    IOSurface * _instanceMaskSurface;
    NSDictionary * _perInstanceMaskSurfaces;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRegionOfInterest;
}

@property (nonatomic, readonly) NSIndexSet *allInstances;
@property (nonatomic, readonly) NSNumber *animatedStickerScore;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) struct CGImage { }*instanceMaskImage;
@property (nonatomic, readonly) struct __CVBuffer { }*instanceMaskPixelBuffer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRegionOfInterest;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allInstances;
- (id)animatedStickerScore;
- (float)confidence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstances:(id)arg1 instanceMaskSurface:(id)arg2 perInstanceMaskSurfaces:(id)arg3 sourceRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 confidence:(float)arg5 animatedStickerScore:(id)arg6;
- (struct CGImage { }*)instanceMaskImage;
- (struct __CVBuffer { }*)instanceMaskPixelBuffer;
- (id)maskImagesForInstances:(id)arg1 error:(id*)arg2;
- (id)maskPixelBuffersForInstances:(id)arg1 error:(id*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRegionOfInterest;

@end
