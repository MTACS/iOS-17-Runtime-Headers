
@interface HDUserDomainConceptPersistableProcessingState : NSObject <NSSecureCoding> {
    long long  _anchor;
    long long  _maximumPropertyType;
    long long  _ontologyVersion;
}

@property (nonatomic, readonly) long long anchor;
@property (nonatomic, readonly) long long maximumPropertyType;
@property (nonatomic, readonly) long long ontologyVersion;

+ (bool)fetchFromKeyValueDomain:(id)arg1 stateOut:(id*)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (long long)anchor;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAnchor:(long long)arg1 ontologyVersion:(long long)arg2 maximumPropertyType:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (long long)maximumPropertyType;
- (long long)ontologyVersion;
- (bool)persistInKeyValueDomain:(id)arg1 error:(id*)arg2;

@end
