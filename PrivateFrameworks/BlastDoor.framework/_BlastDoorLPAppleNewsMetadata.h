
@interface _BlastDoorLPAppleNewsMetadata : _BlastDoorLPSpecializationMetadata {
    NSString * _source;
    NSString * _title;
}

@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *title;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)source;
- (id)title;

@end
