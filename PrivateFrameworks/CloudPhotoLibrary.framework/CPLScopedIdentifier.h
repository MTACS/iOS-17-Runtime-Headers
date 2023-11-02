
@interface CPLScopedIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _scopeIdentifier;
    long long  _scopeIndex;
}

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *scopeIdentifier;
@property (nonatomic) long long scopeIndex;

+ (id)descriptionWithScopeIdentifier:(id)arg1 identifier:(id)arg2;
+ (id)scopedIdentifierWithString:(id)arg1 includeScopeIndex:(bool)arg2;
+ (id)scopedIdentifierWithString:(id)arg1 includeScopeIndex:(bool)arg2 defaultScopeIdentifier:(id)arg3;
+ (id)scopedIdentifiersFromArrayOfUnknownIdentifiers:(id)arg1;
+ (id)scopedIdentifiersFromDictionaryOfUnknownIdentifiers:(id)arg1;
+ (id)scopedIdentifiersFromSetOfUnknownIdentifiers:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)unscopedIdentifiersFromArrayOfScopedIdentifiers:(id)arg1;
+ (id)unscopedIdentifiersFromDictionaryOfScopedIdentifiers:(id)arg1;
+ (id)unscopedIdentifiersFromSetOfScopedIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cplSpecialHash;
- (bool)cplSpecialIsEqual:(id)arg1;
- (id)description;
- (id)descriptionWithNoScopeIndex;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initInMainScopeWithIdentifier:(id)arg1;
- (id)initRelativeToScopedIdentifier:(id)arg1 identifier:(id)arg2;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScopeIdentifier:(id)arg1 identifier:(id)arg2;
- (id)initWithScopeIdentifier:(id)arg1 identifier:(id)arg2 scopeIndex:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isInMainScope;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)redactedDescription;
- (id)safeFilename;
- (id)scopeIdentifier;
- (long long)scopeIndex;
- (void)setScopeIndex:(long long)arg1;

@end
