
@interface WebSecurityOrigin : NSObject {
    <WebQuotaManager> * _applicationCacheQuotaManager;
    <WebQuotaManager> * _databaseQuotaManager;
    struct WebSecurityOriginPrivate { } * _private;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)arg1;

- (void*)_core;
- (id)_initWithString:(id)arg1;
- (id)_initWithWebCoreSecurityOrigin:(void*)arg1;
- (id)applicationCacheQuotaManager;
- (id)databaseIdentifier;
- (id)databaseQuotaManager;
- (void)dealloc;
- (id)host;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned short)port;
- (id)protocol;
- (unsigned long long)quota;
- (void)setQuota:(unsigned long long)arg1;
- (id)stringValue;
- (id)toString;
- (unsigned long long)usage;

@end
