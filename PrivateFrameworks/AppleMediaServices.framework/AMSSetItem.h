
@interface AMSSetItem : NSObject {
    NSString * _hashKey;
    id  _object;
}

@property (nonatomic, readonly) NSString *hashKey;
@property (nonatomic, readonly) id object;

+ (id)setItemWithObject:(id)arg1 hashKey:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)hashKey;
- (id)initWithObject:(id)arg1 hashKey:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)object;

@end
