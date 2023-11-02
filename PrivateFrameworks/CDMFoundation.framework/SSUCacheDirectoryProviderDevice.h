
@interface SSUCacheDirectoryProviderDevice : NSObject <SSUCacheDirectoryProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createDirectoryAttributes;
+ (id)getUserCacheDirectoriesList;

- (id)lookupOrCreateCacheDirectory:(id*)arg1;

@end
