
@interface HFCacheEntry : NSObject {
    unsigned long long  _cost;
    id  _key;
    id  _object;
}

@property (nonatomic, readonly) unsigned long long cost;
@property (nonatomic, readonly) id key;
@property (nonatomic, readonly) id object;

- (void).cxx_destruct;
- (unsigned long long)cost;
- (id)description;
- (id)initWithKey:(id)arg1 object:(id)arg2 cost:(unsigned long long)arg3;
- (id)key;
- (id)object;

@end
