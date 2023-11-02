
@interface PKAuxiliaryCapabilityRequirementKeyMaterial : NSObject {
    NSArray * _contents;
    NSArray * _rootAttestation;
}

@property (nonatomic, retain) NSArray *contents;
@property (nonatomic, retain) NSArray *rootAttestation;

- (void).cxx_destruct;
- (id)contents;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithKeyMaterialContents:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAuxiliaryCapabilityRequirementKey:(id)arg1;
- (id)rootAttestation;
- (void)setContents:(id)arg1;
- (void)setRootAttestation:(id)arg1;

@end
