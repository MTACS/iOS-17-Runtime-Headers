
@interface VNEntityIdentificationModelPrediction : NSObject <NSCopying, NSSecureCoding> {
    float  _confidence;
    <NSObject><NSCopying><NSSecureCoding> * _entityUniqueIdentifier;
    VNObservation<VNEntityIdentificationModelObservation> * _observation;
}

@property (readonly) float confidence;
@property (readonly, copy) <NSObject><NSCopying><NSSecureCoding> *entityUniqueIdentifier;
@property (readonly) VNObservation<VNEntityIdentificationModelObservation> *observation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityUniqueIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObservation:(id)arg1 entityUniqueIdentifier:(id)arg2 confidence:(float)arg3;
- (bool)isEqual:(id)arg1;
- (id)observation;

@end
