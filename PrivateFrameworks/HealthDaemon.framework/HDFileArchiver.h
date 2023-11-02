
@interface HDFileArchiver : NSObject {
    NSURL * _destinationDirectoryURL;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _nullBuffer;
    NSURL * _prefixURL;
    struct archive { } * _reader;
    NSURL * _sourceURL;
    struct archive { } * _writer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)compressFileAtURL:(id)arg1 to:(id)arg2 strippingPathPrefix:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (bool)decompressArchiveAt:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (id)init;

@end
