
@interface FFDropFileWriter : NSObject <FFFileWriter>

- (bool)createDirectoryAtURL:(id)arg1 error:(id*)arg2;
- (bool)writeData:(id)arg1 toFile:(id)arg2 error:(id*)arg3;

@end
