
@interface _CNCacheFixedTTLBoundingStrategy : NSObject <CNCacheBoundingStrategy> {
    unsigned long long  _renewalOptions;
    <CNTimeProvider> * _timeProvider;
    NSMutableDictionary * _timestamps;
    double  _ttl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long renewalOptions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CNTimeProvider> *timeProvider;
@property (nonatomic, readonly) NSMutableDictionary *timestamps;
@property (nonatomic, readonly) double ttl;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithTTL:(double)arg1;
- (id)initWithTTL:(double)arg1 renewalOptions:(unsigned long long)arg2 timeProvider:(id)arg3;
- (unsigned long long)renewalOptions;
- (bool)shouldEvictKey:(id)arg1;
- (id)timeProvider;
- (id)timestamps;
- (double)ttl;
- (void)updateTimestampForKey:(id)arg1;
- (void)willAccessKey:(id)arg1;
- (void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id*)arg3;

@end
