
@interface TKDataSource : NSObject {
    NSData * _data;
    const char * _ptr;
}

@property (readonly) NSData *data;
@property (readonly) const char *end;
@property (readonly) const char *ptr;

- (void).cxx_destruct;
- (bool)bytesSafeToRead:(long long)arg1;
- (id)data;
- (id)dataFromPtr:(const char *)arg1;
- (const char *)end;
- (unsigned char)fetchByte;
- (id)fetchDataWithLength:(long long)arg1;
- (id)initWithData:(id)arg1;
- (const char *)ptr;

@end
