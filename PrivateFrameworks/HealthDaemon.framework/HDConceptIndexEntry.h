
@interface HDConceptIndexEntry : NSObject {
    unsigned long long  _compoundIndex;
    long long  _conceptIdentifier;
    long long  _conceptVersion;
    NSString * _keyPath;
    HKOntologyVersion * _ontologyVersion;
    NSUUID * _sampleUUID;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long compoundIndex;
@property (nonatomic, readonly) long long conceptIdentifier;
@property (nonatomic, readonly) long long conceptVersion;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly, copy) HKOntologyVersion *ontologyVersion;
@property (nonatomic, readonly, copy) NSUUID *sampleUUID;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (unsigned long long)compoundIndex;
- (long long)conceptIdentifier;
- (long long)conceptVersion;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSampleUUID:(id)arg1 conceptIdentifier:(long long)arg2 conceptVersion:(long long)arg3 keyPath:(id)arg4 compoundIndex:(unsigned long long)arg5 type:(unsigned long long)arg6 ontologyVersion:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (id)ontologyVersion;
- (id)sampleUUID;
- (unsigned long long)type;

@end
