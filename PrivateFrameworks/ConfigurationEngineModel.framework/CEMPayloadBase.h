
@interface CEMPayloadBase : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _unknownPayloadKeys;
}

@property (readonly, copy) NSSet *unknownPayloadKeys;

+ (id)load:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_loadObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 withKey:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 error:(id*)arg6;
- (void)_serializeItemIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(bool)arg4 isDefaultValue:(bool)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createNestedObjectWithClass:(Class)arg1 withParentKey:(id)arg2 withPayload:(id)arg3 error:(id*)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loadArrayFromDictionary:(id)arg1 withKey:(id)arg2 classType:(Class)arg3 nested:(bool)arg4 isRequired:(bool)arg5 defaultValue:(id)arg6 error:(id*)arg7;
- (id)loadArrayFromDictionary:(id)arg1 withKey:(id)arg2 validator:(id /* block */)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 error:(id*)arg6;
- (id)loadBooleanFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(bool)arg3 defaultValue:(id)arg4 error:(id*)arg5;
- (id)loadDataFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(bool)arg3 defaultValue:(id)arg4 error:(id*)arg5;
- (id)loadDateFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(bool)arg3 defaultValue:(id)arg4 error:(id*)arg5;
- (id)loadDictionaryFromDictionary:(id)arg1 withKey:(id)arg2 classType:(Class)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 error:(id*)arg6;
- (id)loadFloatFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(bool)arg3 defaultValue:(id)arg4 error:(id*)arg5;
- (id)loadIntegerFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(bool)arg3 defaultValue:(id)arg4 error:(id*)arg5;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)loadStringFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(bool)arg3 defaultValue:(id)arg4 error:(id*)arg5;
- (void)mergeUnknownKeysFrom:(id)arg1 withParentKey:(id)arg2;
- (void)serializeArrayIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 itemSerializer:(id /* block */)arg4 isRequired:(bool)arg5 defaultValue:(id)arg6;
- (void)serializeAssetIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 assetProvider:(id)arg4 transformType:(id)arg5 isRequired:(bool)arg6 defaultValue:(id)arg7;
- (void)serializeBooleanIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5;
- (void)serializeDataIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5;
- (void)serializeDateIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5;
- (void)serializeDictionaryIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 dictSerializer:(id /* block */)arg4 isRequired:(bool)arg5 defaultValue:(id)arg6;
- (void)serializeFloatIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5;
- (void)serializeIntegerIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5;
- (id)serializePayload;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)serializeStringIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5;
- (id)unknownPayloadKeys;

@end
