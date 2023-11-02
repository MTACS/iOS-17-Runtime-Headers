
@interface _LSSynthesizedExtensionPointRecord : LSExtensionPointRecord {
    NSString * _identifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SDKDictionary;
- (unsigned int)TCCPolicy;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x1; unsigned char x2[3]; unsigned int x3; unsigned int x4; unsigned char x5[16]; BOOL x6[0]; }*)arg2 length:(unsigned long long)arg3;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)extensionPointType;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)name;
- (id)parentAppRecord;
- (unsigned int)platform;
- (id)version;

@end
