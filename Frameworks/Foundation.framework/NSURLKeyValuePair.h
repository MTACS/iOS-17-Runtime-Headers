
@interface NSURLKeyValuePair : NSObject {
    unsigned long long  hash;
    id  key;
    id  value;
}

+ (id)pair;
+ (id)pairWithKey:(id)arg1 value:(id)arg2;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
