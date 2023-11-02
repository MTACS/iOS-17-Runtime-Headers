
@interface _EXValuesQuery : _EXQuery {
    NSString * _extensionPointIdentifier;
    struct { 
        unsigned int val[8]; 
    }  _hostAuditToken;
    unsigned int  _platform;
    NSPredicate * _predicate;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionPointIdentifier;
- (id)extensionPointRecords;
- (unsigned long long)hash;
- (struct { unsigned int x1[8]; })hostAuditToken;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionPointIdentifier:(id)arg1;
- (id)initWithExtensionPointIdentifier:(id)arg1 predicate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQuery:(id)arg1;
- (bool)matchesRecord:(id)arg1;
- (unsigned int)platform;
- (id)predicate;
- (void)setExtensionPointIdentifier:(id)arg1;
- (void)setHostAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setPlatform:(unsigned int)arg1;
- (void)setPredicate:(id)arg1;

@end
