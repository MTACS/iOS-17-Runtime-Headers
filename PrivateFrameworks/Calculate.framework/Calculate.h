
@interface Calculate : NSObject

+ (void)_lock;
+ (void)_resetGlobals;
+ (void)_unlock;
+ (id)evaluate:(id)arg1 options:(id)arg2;
+ (id)evaluate:(id)arg1 options:(id)arg2 needsUpdate:(bool*)arg3;
+ (id)evaluate:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;

@end
