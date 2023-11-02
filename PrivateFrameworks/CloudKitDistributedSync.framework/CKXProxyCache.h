
@interface CKXProxyCache : NSObject {
    NSMapTable * _cachedProxies;
    NSMutableArray * _scopedProxies;
    long long  _totalProxiesCreated;
    long long  _totalProxiesReclaimed;
    long long  _totalProxiesRetainedOutOfScope;
}

@property (nonatomic, retain) NSMapTable *cachedProxies;
@property (nonatomic, retain) NSMutableArray *scopedProxies;
@property (nonatomic) long long totalProxiesCreated;
@property (nonatomic) long long totalProxiesReclaimed;
@property (nonatomic) long long totalProxiesRetainedOutOfScope;

- (void).cxx_destruct;
- (void)_putBackProxyWithoutCheckingScope:(id)arg1;
- (id)cachedProxies;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)proxyForClass:(Class)arg1 withScope:(long long)arg2;
- (void)putBackAllProxiesWithScope:(long long)arg1;
- (id)scopedProxies;
- (void)setCachedProxies:(id)arg1;
- (void)setScopedProxies:(id)arg1;
- (void)setTotalProxiesCreated:(long long)arg1;
- (void)setTotalProxiesReclaimed:(long long)arg1;
- (void)setTotalProxiesRetainedOutOfScope:(long long)arg1;
- (long long)totalProxiesCreated;
- (long long)totalProxiesReclaimed;
- (long long)totalProxiesRetainedOutOfScope;

@end
