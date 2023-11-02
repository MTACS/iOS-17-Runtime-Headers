
@interface _NSDataCompressor : NSObject {
    unsigned char  _buffer;
    id /* block */  _dataHandler;
    int  _operation;
    int  _status;
    struct { 
        char *dst_ptr; 
        unsigned long long dst_size; 
        char *src_ptr; 
        unsigned long long src_size; 
        void *state; 
    }  _stream;
}

- (void)dealloc;
- (bool)finishProcessing;
- (id)initWithAlgorithm:(int)arg1 operation:(int)arg2 dataHandler:(id /* block */)arg3;
- (bool)processBytes:(char *)arg1 size:(unsigned long long)arg2;
- (bool)processBytes:(char *)arg1 size:(unsigned long long)arg2 flags:(int)arg3;

@end
