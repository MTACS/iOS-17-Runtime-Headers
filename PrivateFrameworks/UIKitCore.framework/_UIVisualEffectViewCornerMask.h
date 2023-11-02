
@interface _UIVisualEffectViewCornerMask : NSObject <NSCopying> {
    unsigned long long  _appliedCorners;
    bool  _continuous;
    bool  _effectsEdges;
    UIImage * _image;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageCenter;
    double  _radius;
}

@property (nonatomic, readonly) double radius;

+ (void)_applyZeroMaskToLayer:(id)arg1;
+ (id)continuousCornerMaskWithRadius:(double)arg1;
+ (id)cornerMaskWithRadius:(double)arg1;
+ (id)cornerMaskWithRadius:(double)arg1 continuous:(bool)arg2 cornerMask:(unsigned long long)arg3;
+ (id)imageCornerMaskWithImage:(id)arg1 radius:(double)arg2;

- (void).cxx_destruct;
- (void)_applyToLayer:(id)arg1;
- (id)_clone;
- (bool)_isCornerWithRadius:(double)arg1 continuous:(bool)arg2 mask:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cornerMaskAppliedToCorners:(unsigned long long)arg1;
- (id)cornerMaskEffectingEdges:(bool)arg1;
- (bool)cornersAreContinuous;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)radius;

@end
