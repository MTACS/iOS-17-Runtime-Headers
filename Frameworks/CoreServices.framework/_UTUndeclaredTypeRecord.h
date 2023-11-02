
@interface _UTUndeclaredTypeRecord : UTTypeRecord {
    NSString * _identifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x1; }*)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(id /* block */)arg4;
- (void)_enumerateRelatedTypesWithMaximumDegreeOfSeparation:(long long)arg1 block:(id /* block */)arg2;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 identifier:(id)arg2;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (id)awakeAfterUsingCoder:(id)arg1;
- (bool)conformsToTypeIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)declaration;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isInPublicDomain;
- (id)version;

@end
