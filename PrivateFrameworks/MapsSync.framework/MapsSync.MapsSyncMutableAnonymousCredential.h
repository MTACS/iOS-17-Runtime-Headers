
@interface MapsSync.MapsSyncMutableAnonymousCredential : MapsSync.MapsSyncMutableBaseItem {
    void _proxyObject;
}

@property (nonatomic, copy) NSData *anonymousId;
@property (nonatomic, copy) NSData *mapsToken;
@property (nonatomic, copy) NSDate *mapsTokenCreatedAt;
@property (nonatomic) unsigned long long mapsTokenTTL;

- (void).cxx_destruct;
- (id)anonymousId;
- (id)initWithProxyObject:(id)arg1;
- (id)mapsToken;
- (id)mapsTokenCreatedAt;
- (unsigned long long)mapsTokenTTL;
- (void)setAnonymousId:(id)arg1;
- (void)setMapsToken:(id)arg1;
- (void)setMapsTokenCreatedAt:(id)arg1;
- (void)setMapsTokenTTL:(unsigned long long)arg1;

@end
