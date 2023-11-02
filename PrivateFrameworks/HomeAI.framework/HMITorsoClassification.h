
@interface HMITorsoClassification : HMFObject <NSSecureCoding> {
    double  _confidence;
    NSUUID * _personUUID;
    NSUUID * _sourceUUID;
}

@property (readonly) double confidence;
@property (readonly) NSUUID *personUUID;
@property (readonly) NSUUID *sourceUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (double)confidence;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonUUID:(id)arg1 sourceUUID:(id)arg2 confidence:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)personUUID;
- (id)sourceUUID;

@end
