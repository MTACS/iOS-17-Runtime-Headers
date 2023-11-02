
@interface DESMMappedFile : NSObject {
    NSData * _data;
    NSURL * _fileURL;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSURL *fileURL;

- (void).cxx_destruct;
- (void*)_mmap:(void*)arg1 len:(unsigned long long)arg2 protectionFlags:(int)arg3 sharenFlags:(int)arg4 filedHandle:(int)arg5 offset:(long long)arg6;
- (int)_munmap:(void*)arg1 len:(unsigned long long)arg2;
- (id)data;
- (void)dealloc;
- (id)fileURL;
- (id)initWithURL:(id)arg1;

@end
