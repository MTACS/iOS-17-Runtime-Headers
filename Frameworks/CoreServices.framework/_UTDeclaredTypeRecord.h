
@interface _UTDeclaredTypeRecord : UTTypeRecord {
    LSBundleRecord * _weakDeclaringBundleRecord;
}

@property (readonly) LSBundleRecord *_declaringBundleRecord;
@property (readonly) unsigned int _rawFlags;

+ (id)_propertyClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_LSRecord_resolve__declaringBundleBookmark;
- (void)_LSRecord_resolve__declaringBundleRecord;
- (void)_LSRecord_resolve__delegatePath;
- (void)_LSRecord_resolve__localizedDescription;
- (void)_LSRecord_resolve__rawFlags;
- (void)_LSRecord_resolve_childTypeIdentifiers;
- (void)_LSRecord_resolve_declaration;
- (void)_LSRecord_resolve_identifier;
- (void)_LSRecord_resolve_parentTypeIdentifiers;
- (void)_LSRecord_resolve_pedigree;
- (void)_LSRecord_resolve_referenceURL;
- (void)_LSRecord_resolve_tagSpecification;
- (void)_LSRecord_resolve_version;
- (id)_declaringBundleBookmark;
- (id)_declaringBundleBookmarkWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (id)_declaringBundleRecord;
- (id)_declaringBundleRecordWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (id)_delegatePath;
- (id)_delegatePathWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (void)_detachFromContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (void)_enumerateRelatedTypeStructuresWithContext:(struct LSContext { id x1; }*)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(id /* block */)arg4;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x1; }*)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(id /* block */)arg4;
- (id)_localizedDescription;
- (id)_localizedDescriptionWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (unsigned int)_rawFlags;
- (unsigned int)_rawFlagsWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (id)childTypeIdentifiers;
- (id)childTypeIdentifiersWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (bool)conformsToTypeIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)declaration;
- (id)declarationWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (id)declaringBundleRecord;
- (id)identifier;
- (id)identifierWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (bool)isActive;
- (bool)isCoreType;
- (bool)isDeclared;
- (bool)isDynamic;
- (bool)isExported;
- (bool)isImported;
- (bool)isInPublicDomain;
- (bool)isWildcard;
- (id)parentTypeIdentifiers;
- (id)parentTypeIdentifiersWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (id)pedigree;
- (id)pedigreeWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (id)referenceURL;
- (id)referenceURLWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (id)tagSpecification;
- (id)tagSpecificationWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (id)version;
- (id)versionWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;

@end
