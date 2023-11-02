
@interface HDUserDomainConceptProcessingState : NSObject <NSCopying> {
    long long  _anchor;
    long long  _maximumPropertyType;
    HKOntologyVersion * _ontologyVersion;
}

@property (nonatomic, readonly) long long anchor;
@property (nonatomic, readonly) long long maximumPropertyType;
@property (nonatomic, readonly, copy) HKOntologyVersion *ontologyVersion;

+ (id)fetchFromKeyValueDomain:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (long long)anchor;
- (id)copyByUpdatingAnchor:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAnchor:(long long)arg1 ontologyVersion:(id)arg2 maximumPropertyType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)maximumPropertyType;
- (id)ontologyVersion;
- (bool)persistInKeyValueDomain:(id)arg1 error:(id*)arg2;

@end
