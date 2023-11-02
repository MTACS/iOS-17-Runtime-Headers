
@interface GTFileWriterSessionCompressed : NSObject <GTFileWriterSession> {
    struct { 
        char *dst_ptr; 
        unsigned long long dst_size; 
        char *src_ptr; 
        unsigned long long src_size; 
        void *state; 
    }  _compressionStream;
    char * _decompressorOutput;
    unsigned long long  _decompressorOutputSize;
    GTFileWriterSessionUncompressed * _uncompressedSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sessionWithFileEntries:(id)arg1 relativeToURL:(id)arg2 options:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)_finalizeCompressedFileData:(id*)arg1;
- (bool)_writeCompressedFileData:(const char *)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (bool)finish:(id*)arg1;
- (id)initWithFileEntries:(id)arg1 relativeToURL:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)writeFileData:(id)arg1 completionHandler:(id /* block */)arg2;

@end
