
@protocol CNFileManager <NSObject>

@required

- (CNFuture *)asyncDataWithContentsOfURL:(NSURL *)arg1;
- (CNFuture *)asyncWriteData:(NSData *)arg1 toURL:(NSURL *)arg2 options:(unsigned long long)arg3;
- (CNResult *)contentsOfDirectoryAtURL:(NSURL *)arg1 includingPropertiesForKeys:(NSArray *)arg2 options:(unsigned long long)arg3;
- (CNResult *)createDirectoryAtURL:(NSURL *)arg1 withIntermediateDirectories:(bool)arg2 attributes:(NSDictionary *)arg3;
- (CNResult *)dataWithContentsOfURL:(NSURL *)arg1;
- (bool)fileExistsAtURL:(NSURL *)arg1;
- (bool)fileExistsAtURL:(NSURL *)arg1 isDirectory:(bool*)arg2;
- (bool)getValue:(id*)arg1 forExtendendAttribute:(NSString *)arg2 url:(NSURL *)arg3 error:(id*)arg4;
- (CNObservable *)observableWithContentsOfURL:(NSURL *)arg1;
- (CNResult *)removeExtendedAttribute:(NSString *)arg1 atURL:(NSURL *)arg2;
- (CNResult *)removeItemAtURL:(NSURL *)arg1;
- (CNResult *)setValue:(NSString *)arg1 forExtendedAttribute:(NSString *)arg2 atURL:(NSURL *)arg3;
- (CNResult *)valueForExtendedAttribute:(NSString *)arg1 atURL:(NSURL *)arg2;
- (CNResult *)writeData:(NSData *)arg1 toURL:(NSURL *)arg2 options:(unsigned long long)arg3;

@end
