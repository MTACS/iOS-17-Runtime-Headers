
@interface GEOMapsSuggestionsCache : NSObject

+ (id)defaultCacheDir;
+ (id)defaultPathForProcessName:(id)arg1;
+ (id)defaultSuppressedEntriesPath;
+ (void)pruneOldCacheAtPath:(id)arg1;

@end
