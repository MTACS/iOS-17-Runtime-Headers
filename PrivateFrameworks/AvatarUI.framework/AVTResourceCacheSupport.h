
@interface AVTResourceCacheSupport : NSObject

+ (id /* block */)resourceFromCache:(id)arg1 forItem:(id)arg2 scope:(id)arg3 preflightCacheMissHandler:(id /* block */)arg4 cacheMissHandler:(id /* block */)arg5 cacheMissQueue:(id)arg6 taskScheduler:(id)arg7 callbackQueue:(id)arg8 resourceHandler:(id /* block */)arg9;
+ (id /* block */)resourceFromCache:(id)arg1 forItem:(id)arg2 scope:(id)arg3 preflightCacheMissHandler:(id /* block */)arg4 cacheMissWithCompletionHandler:(id /* block */)arg5 cacheMissQueue:(id)arg6 taskScheduler:(id)arg7 callbackQueue:(id)arg8 resourceHandler:(id /* block */)arg9;

@end
