
@protocol KGGraphStore <KGMutableGraphImplementation>

@required

+ (bool)copyFromURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
+ (bool)destroyAtURL:(NSURL *)arg1 error:(id*)arg2;
+ (bool)migrateFromURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
+ (NSString *)persistentStoreFileExtension;

- (void)close;
- (bool)copyToURL:(NSURL *)arg1 error:(id*)arg2;
- (unsigned long long)graphVersion;
- (bool)openWithMode:(unsigned long long)arg1 error:(id*)arg2;
- (void)setGraphVersion:(unsigned long long)arg1;
- (NSURL *)url;

@end
