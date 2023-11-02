
@interface SRAmbientLightSample : NSObject <NSSecureCoding, SRSampleExporting, SRSampling> {
    struct { 
        float x; 
        float y; 
    }  _chromaticity;
    NSMeasurement * _lux;
    long long  _placement;
    long long  _type;
}

@property (readonly) struct { float x1; float x2; } chromaticity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSMeasurement *lux;
@property (readonly) long long placement;
@property (readonly, copy) NSString *placementString;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *typeString;

+ (bool)supportsSecureCoding;

- (id)binarySampleRepresentation;
- (struct { float x1; float x2; })chromaticity;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithSRALSSampleStruct:(struct { long long x1; long long x2; float x3; struct { float x_4_1_1; float x_4_1_2; } x4; }*)arg1;
- (id)lux;
- (long long)placement;
- (id)placementString;
- (id)sr_dictionaryRepresentation;
- (id)typeString;

@end
