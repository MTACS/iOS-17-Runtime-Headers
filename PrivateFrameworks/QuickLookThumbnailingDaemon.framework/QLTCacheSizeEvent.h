
@interface QLTCacheSizeEvent : NSObject <QLTAnalyticsEventProtocol> {
    unsigned long long  _cacheSize;
}

@property (readonly) unsigned long long cacheSize;
@property (readonly) NSString *name;
@property (readonly) id /* block */ propertiesBuilder;

- (id)build;
- (unsigned long long)cacheSize;
- (id)initWithCacheSize:(unsigned long long)arg1;
- (id)name;
- (id /* block */)propertiesBuilder;

@end
