
@interface _UTTaggedType : UTType

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)_childTypes;
- (unsigned long long)_getEnclosureColors:(struct UTHardwareColor { unsigned char x1; unsigned char x2[3]; union { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_3_1_1; int x_3_1_2; } x3; }*)arg1 count:(unsigned long long)arg2;
- (bool)_isCoreType;
- (bool)_isExported;
- (bool)_isImported;
- (bool)_isWildcard;
- (id)_localizedDescriptionDictionary;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)arg1;
- (id)_parentTypes;
- (id)_preferredTagOfClass:(id)arg1;
- (id)_subtypes;
- (id)_typeRecord;
- (Class)classForCoder;
- (bool)conformsToType:(id)arg1;
- (id)identifier;
- (bool)isDeclared;
- (bool)isDynamic;
- (bool)isPublicType;
- (id)localizedDescription;
- (id)referenceURL;
- (id)supertypes;
- (id)tags;
- (id)version;

@end
