
@interface EDAttachmentFileWriter : NSObject {
    unsigned long long  _byteCount;
    id /* block */  _completion;
    NSObject<OS_dispatch_queue> * _compressionQueue;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _didClose;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _didFail;
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    }  _digestContext;
    int  _fileDescriptor;
    NSURL * _finalURL;
    NSObject<OS_dispatch_io> * _io;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _tempURL;
}

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (void)failAndClose;
- (id)initWithFinalURL:(id)arg1 queue:(id)arg2 compressionQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithTemporaryURL:(id)arg1 finalURL:(id)arg2 protection:(int)arg3 queue:(id)arg4 compressionQueue:(id)arg5 completion:(id /* block */)arg6;
- (void)writeData:(id)arg1;

@end
