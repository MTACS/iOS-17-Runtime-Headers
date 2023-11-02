
@protocol TSUResourceCache <NSObject>

@required

- (void)cacheResourceAtURL:(void *)arg1 forInfo:(void *)arg2 copy:(void *)arg3 completionQueue:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: NSURL *, <TSUResourceInfo> *, bool, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)cachedResourceExistsForInfo:(id <TSUResourceInfo>)arg1;
- (void)purge;

@end
