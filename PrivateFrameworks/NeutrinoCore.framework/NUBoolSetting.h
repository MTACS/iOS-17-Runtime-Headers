
@interface NUBoolSetting : NUSetting

@property (readonly) NSNumber *defaultValue;
@property (readonly) NSNumber *identityValue;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;

- (id)defaultValue;
- (id)identityValue;
- (bool)isValid:(out id*)arg1;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (bool)validate:(id)arg1 error:(out id*)arg2;

@end
