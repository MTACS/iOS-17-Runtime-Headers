
@protocol FFFileReader

@required

- (NSArray *)contentsOfDirectoryAtURL:(NSURL *)arg1 error:(id*)arg2;
- (NSDictionary *)dictionaryWithContentsOfURL:(NSURL *)arg1 error:(id*)arg2;

@end
