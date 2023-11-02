
@interface _PFStoryRecipeDisplayAssetNormalizationDataV1 : NSObject <_PFStoryRecipeDisplayAssetNormalizationData> {
    struct { 
        unsigned char version; 
        unsigned char score; 
        unsigned char tempTintInputTemperature; 
        unsigned char tempTintInputTint; 
        unsigned char smartToneInputContrast; 
        unsigned char smartToneInputBlack; 
        unsigned char smartToneInputExposure; 
        unsigned char smartToneInputHighlights; 
        unsigned char highKeyInputStrength; 
        unsigned char smartColorInputVibrancy; 
        unsigned char smartColorInputCast; 
        unsigned char unused; 
    }  _data;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *highKeyProperties;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) const struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; }*sliderNetPackedData;
@property (nonatomic, readonly) NSDictionary *smartColorProperties;
@property (nonatomic, readonly) NSDictionary *smartToneProperties;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *tempTintProperties;
@property (nonatomic, readonly) long long version;

+ (id)limits;

- (unsigned long long)hash;
- (id)highKeyProperties;
- (id)initWithSliderNetPackedDataV1:(const struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; }*)arg1;
- (bool)isEqual:(id)arg1;
- (double)score;
- (const struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; }*)sliderNetPackedData;
- (id)smartColorProperties;
- (id)smartToneProperties;
- (id)tempTintProperties;
- (long long)version;

@end
