
@interface GEOMobileAssetResourceManager : NSObject

+ (id)sharedManager;

- (void)fetchResourceOfType:(unsigned long long)arg1 extraParameters:(id)arg2 options:(unsigned long long)arg3 result:(id /* block */)arg4;
- (void)notifyResourceIsCorrupt:(id)arg1;
- (void)updateNow;

@end
