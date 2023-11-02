
@interface UTTypeRecord : LSRecord

@property (readonly) NSString *_IS_primaryFilenameExtension;
@property (readonly) NSData *_declaringBundleBookmark;
@property (readonly) NSString *_delegatePath;
@property (readonly) _LSLocalizedStringRecord *_localizedDescription;
@property (getter=isActive, readonly) bool active;
@property (readonly) NSSet *childTypeIdentifiers;
@property (nonatomic, readonly) id compatibilityObject;
@property (getter=isCoreType, readonly) bool coreType;
@property (readonly) LSPropertyList *declaration;
@property (getter=isDeclared, readonly) bool declared;
@property (readonly) LSBundleRecord *declaringBundleRecord;
@property (getter=isDynamic, readonly) bool dynamic;
@property (getter=isExported, readonly) bool exported;
@property (readonly) NSDictionary *iconDictionary;
@property (readonly) NSURL *iconResourceBundleURL;
@property (readonly) NSString *identifier;
@property (getter=isImported, readonly) bool imported;
@property (getter=isInPublicDomain, readonly) bool inPublicDomain;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSDictionary *localizedDescriptionDictionary;
@property (readonly) NSOrderedSet *parentTypeIdentifiers;
@property (readonly) NSSet *pedigree;
@property (readonly) NSURL *referenceURL;
@property (readonly) LSPropertyList *tagSpecification;
@property (readonly) NSNumber *version;
@property (getter=isWildcard, readonly) bool wildcard;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)_propertyClasses;
+ (bool)_typeIdentifier:(id)arg1 conformsToTypeIdentifier:(id)arg2;
+ (id)_typeRecordWithContext:(struct LSContext { id x1; }*)arg1 forPromiseAtNode:(id)arg2 error:(id*)arg3;
+ (id)_typeRecordWithContext:(struct LSContext { id x1; }*)arg1 forPromiseResourceValues:(id)arg2 error:(id*)arg3;
+ (id)_typeRecordWithContext:(struct LSContext { id x1; }*)arg1 identifier:(id)arg2 allowUndeclared:(bool)arg3;
+ (id)_typeRecordWithIdentifier:(id)arg1 allowUndeclared:(bool)arg2;
+ (id)enumerator;
+ (id)typeRecordForImportedTypeWithIdentifier:(id)arg1 conformingToIdentifier:(id)arg2;
+ (id)typeRecordForPromiseAtURL:(id)arg1 error:(id*)arg2;
+ (id)typeRecordWithIdentifier:(id)arg1;
+ (id)typeRecordWithPotentiallyUndeclaredIdentifier:(id)arg1;
+ (id)typeRecordWithTag:(id)arg1 ofClass:(id)arg2;
+ (id)typeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3;
+ (id)typeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToTypeRecord:(id)arg3;
+ (id)typeRecordsWithIdentifiers:(id)arg1;
+ (id)typeRecordsWithTag:(id)arg1 ofClass:(id)arg2;
+ (id)typeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3;
+ (id)typeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToTypeRecord:(id)arg3;

- (void)_LSRecord_resolve_iconDictionary;
- (void)_LSRecord_resolve_iconResourceBundleURL;
- (id)_declaringBundleBookmark;
- (id)_delegatePath;
- (void)_detachFromContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x1; }*)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(id /* block */)arg4;
- (void)_enumerateRelatedTypesWithMaximumDegreeOfSeparation:(long long)arg1 block:(id /* block */)arg2;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x1; unsigned char x2[3]; unsigned int x3; unsigned int x4; unsigned char x5[16]; BOOL x6[0]; }*)arg2 length:(unsigned long long)arg3;
- (id)_localizedDescription;
- (id)childTypeIdentifiers;
- (bool)conformsToTypeIdentifier:(id)arg1;
- (bool)conformsToTypeRecord:(id)arg1;
- (id)debugDescription;
- (id)declaration;
- (id)declaringBundleRecord;
- (void)enumerateChildTypesWithBlock:(id /* block */)arg1;
- (void)enumerateDescendantsWithBlock:(id /* block */)arg1;
- (void)enumerateParentTypesWithBlock:(id /* block */)arg1;
- (void)enumeratePedigreeWithBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)iconDictionary;
- (id)iconDictionaryWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (id)iconResourceBundleURL;
- (id)iconResourceBundleURLWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg4;
- (id)identifier;
- (bool)isActive;
- (bool)isChildOfTypeIdentifier:(id)arg1;
- (bool)isCoreType;
- (bool)isDeclared;
- (bool)isDynamic;
- (bool)isEqual:(id)arg1;
- (bool)isExported;
- (bool)isImported;
- (bool)isInPublicDomain;
- (bool)isWildcard;
- (id)localizedDescription;
- (id)localizedDescriptionDictionary;
- (id)localizedDescriptionWithPreferredLocalizations:(id)arg1;
- (id)parentTypeIdentifiers;
- (id)pedigree;
- (id)preferredTagOfClass:(id)arg1;
- (id)referenceURL;
- (id)tagSpecification;
- (id)version;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (id)_IS_tagFromTypeCode:(unsigned int)arg1;
+ (unsigned int)_IS_typeCodeFromTag:(id)arg1;

- (id)_ICP_filenameExtensions;
- (bool)_IS_allows1016Sufix;
- (bool)_IS_allowsArbitraryExtensionAsText;
- (id)_IS_iconProvidingRecordAcceptingWildCard:(bool)arg1;
- (id)_IS_primaryFilenameExtension;
- (id)_IS_symbolHeroName;
- (id)_IS_symbolName;
- (id)_IS_symbolNameForVariantKey:(id)arg1;
- (id)_IS_symbolProvidingRecord;
- (id)_IS_symbolProvidingRecordWithVariantKey:(id)arg1 allowNonVariantMatch:(bool)arg2;
- (id)_IS_symbolProvidingRecordWithVariantKey:(id)arg1 allowNonVariantMatch:(bool)arg2 preferHeroOverBaseSymbol:(bool)arg3;

@end
