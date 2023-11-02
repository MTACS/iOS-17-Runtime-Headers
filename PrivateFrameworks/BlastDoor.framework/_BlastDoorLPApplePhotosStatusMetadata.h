
@interface _BlastDoorLPApplePhotosStatusMetadata : _BlastDoorLPSpecializationMetadata {
    NSAttributedString * _status;
}

@property (nonatomic, copy) NSAttributedString *status;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
