
@interface VNFeaturePrintObservation : VNObservation

@property (readonly) NSData *data;
@property (readonly) unsigned long long elementCount;
@property (readonly) unsigned long long elementType;

+ (bool)supportsSecureCoding;

- (bool)computeDistance:(float*)arg1 toFeaturePrintObservation:(id)arg2 error:(id*)arg3;
- (float)computeDistanceToFeaturePrintObservation:(id)arg1 error:(id*)arg2;
- (id)data;
- (unsigned long long)elementCount;
- (unsigned long long)elementType;

@end
