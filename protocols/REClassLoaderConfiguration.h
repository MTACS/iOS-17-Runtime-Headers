
@protocol REClassLoaderConfiguration <NSObject>

@required

- (Class)desiredClassForLoader;
- (Class)desiredClassFromBundle:(REBundleConfiguration *)arg1 forKey:(NSString *)arg2;

@optional

- (bool)shouldLoadBundleClass:(Class)arg1 forKey:(NSString *)arg2;

@end
