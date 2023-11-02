
@interface TRIClientTreatmentArtifact : NSObject <NSCopying> {
    NSData * _encodedTreatmentDefinition;
    NSString * _encodedTreatmentDefinitionSignature;
    NSData * _publicCertificate;
}

@property (nonatomic, readonly) NSData *encodedTreatmentDefinition;
@property (nonatomic, readonly) NSString *encodedTreatmentDefinitionSignature;
@property (nonatomic, readonly) NSData *publicCertificate;

+ (id)artifactWithEncodedTreatmentDefinition:(id)arg1 encodedTreatmentDefinitionSignature:(id)arg2 publicCertificate:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithReplacementEncodedTreatmentDefinition:(id)arg1;
- (id)copyWithReplacementEncodedTreatmentDefinitionSignature:(id)arg1;
- (id)copyWithReplacementPublicCertificate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodedTreatmentDefinition;
- (id)encodedTreatmentDefinitionSignature;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEncodedTreatmentDefinition:(id)arg1 encodedTreatmentDefinitionSignature:(id)arg2 publicCertificate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToArtifact:(id)arg1;
- (bool)isValidWithTreatmentId:(id)arg1;
- (id)publicCertificate;

@end
