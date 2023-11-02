
@interface MapsSync.MapsSyncBatch : NSObject

+ (void)commitWithItems:(id)arg1 completion:(id /* block */)arg2;
+ (void)deleteWithItems:(id)arg1 completion:(id /* block */)arg2;
+ (void)mapObjectsByContextWithItems:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)init;

@end
