
@interface DEDExtensionIdentifierManager : NSObject <DEDSecureArchiving, NSSecureCoding> {
    NSMutableDictionary * _identifierTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *identifierTable;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)allIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierForExtensionIdentifier:(id)arg1;
- (id)identifierTable;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionIdentifiers:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (bool)isKnownIdentifier:(id)arg1;
- (id)knownIdentifiersForExtensionIdentifier:(id)arg1;
- (void)reset;
- (void)revokeIdentifier:(id)arg1;
- (void)setIdentifierTable:(id)arg1;

@end
