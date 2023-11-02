
@interface PTSerialization : NSObject

+ (id)_errorFromAtomError:(id)arg1;
+ (id)_errorFromAtomStream:(id)arg1;
+ (id)_errorFromAtomWriter:(id)arg1;
+ (id)_errorNotSerializable;
+ (id)_errorUnsupportedVersion;
+ (id)_errorWithCode:(long long)arg1;
+ (bool)_supportedOptions:(id)arg1 forObject:(id)arg2;
+ (Class)classForType:(unsigned int)arg1;
+ (id)dataFromObject:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)infoForType:(unsigned int)arg1;
+ (bool)isValidObject:(id)arg1;
+ (id)objectFromData:(id)arg1 error:(id*)arg2;
+ (bool)registerSerializationClass:(Class)arg1;
+ (void)registerType:(unsigned int)arg1 providerClass:(Class)arg2;
+ (void)registerTypeInfo:(id)arg1;
+ (unsigned long long)sizeOfSerializedObject:(id)arg1 options:(id)arg2;
+ (bool)writeObject:(id)arg1 toData:(id)arg2 options:(id)arg3 error:(id*)arg4;

@end
