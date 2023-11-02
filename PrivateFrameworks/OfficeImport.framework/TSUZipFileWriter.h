
@interface TSUZipFileWriter : TSUZipWriter {
    <TSURandomWriteChannel> * _writeChannel;
}

+ (void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (id)writeChannel;

@end
