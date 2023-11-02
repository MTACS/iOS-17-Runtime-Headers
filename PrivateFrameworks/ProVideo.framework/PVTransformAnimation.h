
@interface PVTransformAnimation : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _animationData;
    double  _aspectRatio;
    struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; } * _liveTransform;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _presentationTimeRange;
}

@property (nonatomic, readonly) NSArray *animationData;
@property (nonatomic) double aspectRatio;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } presentationTimeRange;

+ (bool)getTransformInfoFromAnimation:(id)arg1 atLocalTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 outInfo:(out struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; }*)arg3;
+ (bool)getTransformInfoFromAnimation:(id)arg1 atLocalTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 renderSize:(struct CGSize { double x1; double x2; })arg3 contentMode:(int)arg4 invertY:(bool)arg5 outInfo:(out struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; }*)arg6;
+ (bool)getTransformInfoFromAnimation:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 outInfo:(out struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; }*)arg3;
+ (bool)getTransformInfoFromAnimation:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 renderSize:(struct CGSize { double x1; double x2; })arg3 contentMode:(int)arg4 invertY:(bool)arg5 outInfo:(out struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; }*)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit:(id)arg1 liveTransform:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; }*)arg2 presentationTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (id)animationData;
- (id)animationInfoFromData:(id)arg1;
- (double)aspectRatio;
- (struct CGSize { double x1; double x2; })basisForRenderSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(int)arg2;
- (struct CGSize { double x1; double x2; })basisForRenderSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(int)arg2 invertY:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataFromAnimationInfo:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAnimation:(id)arg1;
- (id)initWithAnimation:(id)arg1 liveTransform:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; }*)arg2 presentationTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (id)initWithAnimation:(id)arg1 simplify:(bool)arg2 tolerance:(double)arg3 smoothness:(unsigned int)arg4;
- (id)initWithAnimationInfo:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLiveTransform:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; }*)arg1;
- (bool)isEqual:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })presentationTimeRange;
- (void)setAspectRatio:(double)arg1;
- (void)setPresentationTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })transformInfoAtLocalTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })transformInfoAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
