
@interface CLSSocialService : NSObject {
    unsigned long long  _intent;
    NSMutableDictionary * _proxy;
    NSURL * _proxyURL;
}

@property (readonly) unsigned long long intent;
@property (copy) NSURL *proxyURL;

+ (id)defaultFileName;
+ (id)socialService;

- (void).cxx_destruct;
- (bool)flushProxy;
- (id)init;
- (id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2;
- (unsigned long long)intent;
- (void)invalidateMemoryCaches;
- (id)proxiedValueForKey:(id)arg1;
- (id)proxyURL;
- (void)setProxiedValue:(id)arg1 forKey:(id)arg2;
- (void)setProxyURL:(id)arg1;
- (void)updateProxy;

@end
