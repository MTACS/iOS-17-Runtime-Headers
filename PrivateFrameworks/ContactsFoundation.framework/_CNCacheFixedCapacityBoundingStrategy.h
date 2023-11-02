
@interface _CNCacheFixedCapacityBoundingStrategy : NSObject <CNCacheBoundingStrategy> {
    unsigned long long  _capacity;
    CNQueue * _keys;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNQueue *keys;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)capacity;
- (id)description;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)keys;
- (bool)shouldEvictKey:(id)arg1;
- (void)willAccessKey:(id)arg1;
- (void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id*)arg3;

@end
