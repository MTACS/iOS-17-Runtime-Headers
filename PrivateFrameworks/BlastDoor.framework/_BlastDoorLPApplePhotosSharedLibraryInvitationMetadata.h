
@interface _BlastDoorLPApplePhotosSharedLibraryInvitationMetadata : _BlastDoorLPSpecializationMetadata {
    NSString * _message;
    NSString * _originatorDisplayName;
}

@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *originatorDisplayName;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)message;
- (id)originatorDisplayName;
- (void)setMessage:(id)arg1;
- (void)setOriginatorDisplayName:(id)arg1;

@end
