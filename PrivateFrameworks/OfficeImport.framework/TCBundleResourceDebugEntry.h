
@interface TCBundleResourceDebugEntry : NSObject {
    unsigned long long  mCacheCount;
    unsigned long long  mUncachedCount;
}

+ (void)addEntry:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(bool)arg4;
+ (void)dumpUsage;

@end
