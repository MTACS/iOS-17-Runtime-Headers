
@interface PFCameraAdjustments : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _cinematicVideoRenderingVersion;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    bool  _depthEnabled;
    NSString * _effectFilterName;
    NSString * _portraitEffectFilterName;
    AVApplePortraitMetadata * _portraitMetadata;
}

@property (nonatomic, readonly) unsigned long long cinematicVideoRenderingVersion;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (getter=isDepthEnabled, nonatomic, readonly) bool depthEnabled;
@property (nonatomic, readonly, copy) NSString *effectFilterName;
@property (nonatomic, readonly) bool hasCrop;
@property (nonatomic, readonly, copy) NSString *portraitEffectFilterName;
@property (nonatomic, readonly) AVApplePortraitMetadata *portraitMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canBeRenderedByCapturePipelineWithVideoComplement:(bool)arg1;
- (unsigned long long)cinematicVideoRenderingVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)effectFilterName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCrop;
- (id)initWithAdjustments:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffectFilter:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isDepthEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)portraitEffectFilterName;
- (id)portraitMetadata;

@end
