
@interface RMModelPayloadBase : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _unknownPayloadKeys;
}

@property (nonatomic, copy) NSSet *unknownPayloadKeys;

+ (bool)isSupportedForPlatform:(long long)arg1 scope:(long long)arg2 enrollmentType:(long long)arg3;
+ (id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
+ (id)loadData:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
+ (id)supportedOS;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_loadObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 usingKey:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 payloadValue:(id*)arg6 error:(id*)arg7;
- (void)_serializeItemIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(bool)arg4 isDefaultValue:(bool)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createNestedObjectWithClass:(Class)arg1 serializationType:(short)arg2 parentKey:(id)arg3 payload:(id)arg4 error:(id*)arg5;
- (void)encodeWithCoder:(id)arg1;
- (bool)getModelObjectFromDictionary:(id)arg1 usingKey:(id)arg2 classType:(Class)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 payloadValue:(id*)arg7 error:(id*)arg8;
- (id)initWithCoder:(id)arg1;
- (bool)loadArrayFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 classType:(Class)arg4 nested:(bool)arg5 isRequired:(bool)arg6 defaultValue:(id)arg7 serializationType:(short)arg8 error:(id*)arg9;
- (bool)loadArrayFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 validator:(id /* block */)arg4 isRequired:(bool)arg5 defaultValue:(id)arg6 error:(id*)arg7;
- (bool)loadBooleanFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 error:(id*)arg6;
- (bool)loadDataFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 error:(id*)arg7;
- (bool)loadDateFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 error:(id*)arg7;
- (bool)loadDictionaryFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 classType:(Class)arg4 isRequired:(bool)arg5 defaultValue:(id)arg6 serializationType:(short)arg7 error:(id*)arg8;
- (bool)loadFloatFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 error:(id*)arg6;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (bool)loadIntegerFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 error:(id*)arg6;
- (bool)loadStringFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 error:(id*)arg6;
- (void)mergeUnknownKeysFrom:(id)arg1 parentKey:(id)arg2;
- (void)serializeArrayIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 itemSerializer:(id /* block */)arg4 isRequired:(bool)arg5 defaultValue:(id)arg6;
- (id)serializeAsDataWithType:(short)arg1 error:(id*)arg2;
- (void)serializeBooleanIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5;
- (void)serializeDataIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 serializationType:(short)arg6;
- (void)serializeDateIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5 serializationType:(short)arg6;
- (void)serializeDictionaryIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 dictSerializer:(id /* block */)arg4 isRequired:(bool)arg5 defaultValue:(id)arg6;
- (void)serializeFloatIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5;
- (void)serializeIntegerIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5;
- (void)serializeStringIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(bool)arg4 defaultValue:(id)arg5;
- (id)serializeWithType:(short)arg1;
- (void)setUnknownPayloadKeys:(id)arg1;
- (id)unknownPayloadKeys;

@end
