
@interface FFDefaultFileWriter : NSObject <FFFileWriter> {
    NSDictionary * _dirAttributes;
    NSDictionary * _fileAttributes;
}

@property (nonatomic, readonly) NSDictionary *dirAttributes;
@property (nonatomic, readonly) NSDictionary *fileAttributes;

- (void).cxx_destruct;
- (bool)createDirectoryAtURL:(id)arg1 error:(id*)arg2;
- (id)dirAttributes;
- (id)fileAttributes;
- (id)init;
- (bool)writeData:(id)arg1 toFile:(id)arg2 error:(id*)arg3;

@end
