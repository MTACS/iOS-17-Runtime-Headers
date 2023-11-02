
@interface PKZipArchiver : NSObject

- (void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)unzipStream:(id)arg1 toURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)zippedDataForURL:(id)arg1;

@end
