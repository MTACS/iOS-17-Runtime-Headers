
@interface _UTDynamicTypeRecord : UTTypeRecord {
    NSString * _identifier;
}

+ (id)_propertyClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_LSRecord_resolve_pedigree;
- (id)_declaringBundleBookmark;
- (id)_delegatePath;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x1; }*)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(id /* block */)arg4;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 dynamicUTI:(id)arg2;
- (id)_localizedDescription;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (id)childTypeIdentifiers;
- (bool)conformsToTypeIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)declaration;
- (id)declaringBundleRecord;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (bool)isChildOfTypeIdentifier:(id)arg1;
- (bool)isCoreType;
- (bool)isDeclared;
- (bool)isDynamic;
- (bool)isExported;
- (bool)isImported;
- (bool)isInPublicDomain;
- (bool)isWildcard;
- (id)parentTypeIdentifiers;
- (id)pedigree;
- (id)pedigreeWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (id)preferredTagOfClass:(id)arg1;
- (id)referenceURL;
- (id)tagSpecification;
- (id)version;

@end
