
@interface HMIJSONArchiver : NSCoder {
    id  _container;
    long long  _options;
}

@property (readonly) NSString *objectJSON;
@property (readonly) NSString *objectPrettyJSON;
@property long long options;

+ (id)JSONObjectStringWithObject:(id)arg1;
+ (id)JSONObjectStringWithObject:(id)arg1 pretty:(bool)arg2 options:(long long)arg3;
+ (id)JSONObjectWithObject:(id)arg1 options:(long long)arg2;

- (void).cxx_destruct;
- (id)_JSONObjectWithObject:(id)arg1 options:(long long)arg2;
- (void)_addClassToContainer:(Class)arg1;
- (void)_addValueToContainer:(id)arg1 forKey:(id)arg2;
- (bool)_containerIsArray;
- (id)_valueForNumber:(id)arg1;
- (bool)allowsKeyedCoding;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithArray;
- (id)initWithDictionary;
- (id)object;
- (id)objectJSON;
- (id)objectPrettyJSON;
- (long long)options;
- (void)setOptions:(long long)arg1;

@end
