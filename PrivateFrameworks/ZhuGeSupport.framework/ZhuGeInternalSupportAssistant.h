
@interface ZhuGeInternalSupportAssistant : ZhuGeSupportAssistant

+ (id)armoryClassName;
+ (id)cacheList;
+ (id)classList;
+ (void*)dylibHandler;
+ (void)executeCacheRefresh;
+ (void*)getDylibHandlerWithError:(id*)arg1;
+ (id)getInternalSupportPath;
+ (id)getXpcProxyWithError:(id*)arg1;
+ (bool)isInternalAssistant;
+ (struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; }*)recursiveMutex;
+ (void)registerCacheRefresh:(id)arg1;
+ (id)serviceXpcName;
+ (void)setCacheList:(id)arg1;
+ (void)setDylibHandler:(void*)arg1;
+ (void)setXpcProxy:(id)arg1;
+ (id)xpcProxy;

@end
