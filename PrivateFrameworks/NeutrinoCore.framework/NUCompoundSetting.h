
@interface NUCompoundSetting : NUSetting {
    NSDictionary * _properties;
}

@property (readonly) NSDictionary *properties;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;
+ (id)supportedAttributes;

- (void).cxx_destruct;
- (id)copy:(id)arg1;
- (id)description;
- (id)deserialize:(id)arg1 error:(out id*)arg2;
- (void)enumerateProperties:(id /* block */)arg1;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (id)initWithProperties:(id)arg1 attributes:(id)arg2;
- (bool)isValid:(out id*)arg1;
- (id)modelForProperty:(id)arg1;
- (id)properties;
- (id)serialize:(id)arg1 error:(out id*)arg2;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (bool)validate:(id)arg1 error:(out id*)arg2;
- (bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3;

@end
