
@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder> {
    bool  _decodedHeader;
    NSString * _filename;
    bool  _finishedInflating;
    unsigned long long  _modificationTime;
    bool  _pad;
    struct { 
        char *dst_ptr; 
        unsigned long long dst_size; 
        char *src_ptr; 
        unsigned long long src_size; 
        void *state; 
    }  _stream;
    bool  _streamInitialized;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)decodeData:(id)arg1;
- (bool)decodeDownloadData:(id)arg1 dataForkData:(id*)arg2 resourceForkData:(id*)arg3;
- (id)fileAttributes;
- (id)filenameWithOriginalFilename:(id)arg1;
- (bool)finishDownloadDecoding;
- (id)init;
- (bool)isFinishedDecoding;

@end
