
@interface REMStoreInvocationValueStorage : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _valueStorage;
}

@property (nonatomic, retain) NSMutableDictionary *valueStorage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setValueStorage:(id)arg1;
- (void)storeProperty:(id)arg1 forKey:(id)arg2;
- (id)storedPropertyForKey:(id)arg1;
- (id)valueStorage;

@end
