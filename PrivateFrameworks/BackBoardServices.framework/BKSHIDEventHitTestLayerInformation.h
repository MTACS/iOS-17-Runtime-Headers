
@interface BKSHIDEventHitTestLayerInformation : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying> {
    float  _backgroundAverage;
    float  _backgroundAverageContrastThreshold;
    float  _backgroundStandardDeviation;
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
    }  _cumulativeContentsTransform;
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
    bool  _detectedOcclusion;
    bool  _hasInsecureFilter;
    unsigned long long  _validMask;
}

@property (nonatomic, readonly) float backgroundAverage;
@property (nonatomic, readonly) float backgroundAverageContrastThreshold;
@property (nonatomic, readonly) float backgroundStandardDeviation;
@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } cumulativeContentsTransform;
@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } cumulativeLayerTransform;
@property (nonatomic, readonly) float cumulativeOpacity;
@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } cumulativeTransform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool detectedOcclusion;
@property (nonatomic, readonly) bool hasInsecureFilter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *maximumBackgroundColor;
@property (nonatomic, readonly, copy) NSArray *minimumBackgroundColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long validMask;

+ (id)build:(id /* block */)arg1;
+ (id)new;
+ (id)protobufSchema;

- (void)_updateCCHmacContext:(struct { unsigned int x1[96]; }*)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (float)backgroundAverage;
- (float)backgroundAverageContrastThreshold;
- (float)backgroundStandardDeviation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })cumulativeContentsTransform;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })cumulativeLayerTransform;
- (float)cumulativeOpacity;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })cumulativeTransform;
- (id)description;
- (bool)detectedOcclusion;
- (bool)hasInsecureFilter;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (bool)isEqual:(id)arg1;
- (id)maximumBackgroundColor;
- (id)minimumBackgroundColor;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)validMask;

@end
