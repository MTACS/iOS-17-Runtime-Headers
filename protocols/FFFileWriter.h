
@protocol FFFileWriter

@required

- (bool)createDirectoryAtURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)writeData:(NSDictionary *)arg1 toFile:(NSURL *)arg2 error:(id*)arg3;

@end
