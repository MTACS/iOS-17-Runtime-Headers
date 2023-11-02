
@interface OspreyZlibDataDecompressor : NSObject {
    unsigned char  _inflateBuffer;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    }  _inflateStream;
}

- (void)dealloc;
- (id)decompressedDataForData:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithOptions:(long long)arg1;

@end
