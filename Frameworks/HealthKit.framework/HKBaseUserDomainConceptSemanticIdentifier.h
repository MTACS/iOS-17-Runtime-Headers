
@interface HKBaseUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier {
    NSUUID * _UUID;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;

+ (id)semanticIdentifierWithComponents:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (id)init;
- (id)initWithTypeIdentifier:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)stringValue;

@end
