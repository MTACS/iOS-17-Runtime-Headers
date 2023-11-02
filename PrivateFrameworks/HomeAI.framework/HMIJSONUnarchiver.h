
@interface HMIJSONUnarchiver : NSCoder {
    NSDictionary * _classMap;
    id  _container;
}

@property (retain) NSDictionary *classMap;
@property (readonly) id container;

+ (id)objectWithJSONData:(id)arg1 classMap:(id)arg2;
+ (id)objectWithJSONObject:(id)arg1 classMap:(id)arg2;
+ (id)objectWithJSONObjectString:(id)arg1 classMap:(id)arg2;

- (void).cxx_destruct;
- (id)_objectWithJSONObject:(id)arg1 allowedClasses:(id)arg2;
- (bool)allowsKeyedCoding;
- (id)classMap;
- (id)container;
- (bool)decodeBoolForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)initWithJSONObject:(id)arg1;
- (void)setClassMap:(id)arg1;

@end
