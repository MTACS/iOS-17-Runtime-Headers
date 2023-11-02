
@interface HMDCHIPHomeStorage : HMFObject <HMFLogging, NSCopying, NSSecureCoding> {
    NSNumber * _fabricID;
    NSData * _intermediateCertificate;
    NSDictionary * _keyValueStore;
    NSNumber * _lastNodeID;
    NSData * _operationalCertificate;
    NSData * _rootCertificate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *fabricID;
@property (readonly) unsigned long long hash;
@property (copy) NSData *intermediateCertificate;
@property (copy) NSDictionary *keyValueStore;
@property (copy) NSNumber *lastNodeID;
@property (copy) NSData *operationalCertificate;
@property (copy) NSData *rootCertificate;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fabricID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intermediateCertificate;
- (bool)isEqual:(id)arg1;
- (id)keyValueStore;
- (id)lastNodeID;
- (id)logIdentifier;
- (id)operationalCertificate;
- (id)rootCertificate;
- (void)setFabricID:(id)arg1;
- (void)setIntermediateCertificate:(id)arg1;
- (void)setKeyValueStore:(id)arg1;
- (void)setLastNodeID:(id)arg1;
- (void)setOperationalCertificate:(id)arg1;
- (void)setRootCertificate:(id)arg1;
- (void)updateHomeModel:(id)arg1;
- (bool)updateUsingHomeModel:(id)arg1;

@end
