
@interface VMUObjectIdentifierDriverKitSupport : NSObject {
    VMUObjectIdentifier * _objectIdentifier;
    NSArray * _privateFieldsOfLocalDriverKitOSObject;
    NSArray * _privateFieldsOfRemoteDriverKitOSObject;
    unsigned int  _task;
    unsigned long long  _vtableOffsetOfLegacyOSObject;
    unsigned long long  _vtableOffsetOfLocalDriverKitOSObject;
    unsigned long long  _vtableOffsetOfRemoteDriverKitOSObject;
    unsigned long long * _vtableOffsets;
    unsigned int  _vtableOffsetsCount;
}

- (void).cxx_destruct;
- (id)_fieldsFromStructureLayout:(struct { unsigned long long x1; unsigned long long x2; char *x3; unsigned long long x4; unsigned long long x5; struct _IntrospectedObjectField { char *x_6_1_1; char *x_6_1_2; unsigned long long x_6_1_3; unsigned long long x_6_1_4; unsigned long long x_6_1_5; } x6[0]; }*)arg1 withOffset:(unsigned long long)arg2;
- (id)_fieldsOfLegacyOSObject:(id)arg1;
- (id)_fieldsOfLocalDriverKitOSObject:(id)arg1;
- (id)_fieldsOfOSObject:(id)arg1 startOffset:(unsigned long long)arg2;
- (id)_fieldsOfRemoteDriverKitOSObject:(id)arg1;
- (id)_labelForDriverKitOSClassLoadInformation:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)_labelForDriverKitOSMetaClass:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)classInfoForDriverKitMemory:(void*)arg1 length:(unsigned long long)arg2 atOffset:(unsigned long long)arg3 translatedIsa:(unsigned long long)arg4 symbol:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg5;
- (id)classInfoForDriverKitOSClassScan;
- (id)classInfoForDriverKitOSMetaClass;
- (id)classInfoForDriverKitOSMetaClassPrivate;
- (void)dealloc;
- (id)driverKitClassInfoForMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)initWithObjectIdentifier:(id)arg1;
- (id)labelForDriverKitMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 class:(id)arg4;

@end
