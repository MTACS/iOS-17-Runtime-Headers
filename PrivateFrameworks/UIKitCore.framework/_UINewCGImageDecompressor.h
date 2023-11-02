
@interface _UINewCGImageDecompressor : _UICGImageDecompressor {
    struct CMPhotoDecompressionContainer { } * _container;
    struct { 
        unsigned int started : 1; 
        unsigned int finished : 1; 
        unsigned int error : 1; 
    }  _flags;
    id  _imageOrError;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSObject<OS_dispatch_semaphore> * _sema;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

+ (struct CMPhotoDecompressionSession { }*)_sharedDecompressionSession;

- (void).cxx_destruct;
- (void)_finishDecompressingWithImage:(struct CGImage { }*)arg1 error:(id)arg2;
- (void)dealloc;
- (id)init;
- (struct CGImage { }*)waitForImageRef;

@end
