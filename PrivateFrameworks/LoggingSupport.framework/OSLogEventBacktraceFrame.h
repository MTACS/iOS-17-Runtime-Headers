
@interface OSLogEventBacktraceFrame : NSObject {
    unsigned long long  _imageOffset;
    NSUUID * _imageUUID;
    unsigned char  _uuid;
}

@property (nonatomic, readonly) unsigned long long imageOffset;
@property (nonatomic, readonly) NSUUID *imageUUID;
@property (nonatomic, readonly) const char *imageUUIDBytes;

- (void)dealloc;
- (unsigned long long)imageOffset;
- (id)imageUUID;
- (const char *)imageUUIDBytes;
- (id)initWithUUIDBytes:(const char *)arg1 andOffset:(unsigned long long)arg2;

@end
