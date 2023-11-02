
@interface CAEDRMetadata : NSObject <NSCopying, NSSecureCoding> {
    struct _CAEDRMetadataPrivate { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned short x_1_1_7; unsigned short x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; id x3; bool x4; float x5; } * _priv;
}

+ (id)HDR10MetadataWithDisplayInfo:(id)arg1 contentInfo:(id)arg2 opticalOutputScale:(float)arg3;
+ (id)HDR10MetadataWithMinLuminance:(float)arg1 maxLuminance:(float)arg2 opticalOutputScale:(float)arg3;
+ (id)HLGMetadata;
+ (id)HLGMetadataWithAmbientViewingEnvironment:(id)arg1;
+ (bool)isAvailable;
+ (void)setMetadata:(id)arg1 onSurface:(struct __IOSurface { }*)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBT2100HLG;
- (id)initWithCoder:(id)arg1;
- (id)initWithMasteringDisplayMinNits:(float)arg1 maxNits:(float)arg2 opticalOutputScale:(float)arg3;
- (id)initWithSEIAmbientViewingEnvironment:(id)arg1;
- (id)initWithSEIMasteringDisplayData:(id)arg1 contentLightLevelData:(id)arg2;
- (id)initWithSEIMasteringDisplayData:(id)arg1 contentLightLevelData:(id)arg2 opticalOutputScale:(float)arg3;

@end
