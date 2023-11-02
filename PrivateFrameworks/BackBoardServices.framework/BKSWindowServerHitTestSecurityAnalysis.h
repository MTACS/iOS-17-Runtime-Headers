
@interface BKSWindowServerHitTestSecurityAnalysis : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying> {
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _cumulativeLayerTransform;
    float  _cumulativeOpacity;
    bool  _hasInsecureFilter;
    unsigned int  _occlusionMask;
    float  _occlusionPercentage;
    long long  _occlusionType;
    bool  _parentsHaveInsecureLayerProperties;
}

@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } cumulativeLayerTransform;
@property (nonatomic, readonly) float cumulativeOpacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasInsecureFilter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int occlusionMask;
@property (nonatomic, readonly) float occlusionPercentage;
@property (nonatomic, readonly) long long occlusionType;
@property (nonatomic, readonly) bool parentsHaveInsecureLayerProperties;
@property (readonly) Class superclass;

+ (id)build:(id /* block */)arg1;
+ (id)new;
+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })cumulativeLayerTransform;
- (float)cumulativeOpacity;
- (id)description;
- (bool)hasInsecureFilter;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)occlusionMask;
- (float)occlusionPercentage;
- (long long)occlusionType;
- (bool)parentsHaveInsecureLayerProperties;

@end
