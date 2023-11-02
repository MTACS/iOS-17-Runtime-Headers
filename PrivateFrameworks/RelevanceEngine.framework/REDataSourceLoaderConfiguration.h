
@interface REDataSourceLoaderConfiguration : NSObject <REClassLoaderConfiguration>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (Class)desiredClassForLoader;
- (Class)desiredClassFromBundle:(id)arg1 forKey:(id)arg2;
- (bool)shouldLoadBundleClass:(Class)arg1 forKey:(id)arg2;

@end
