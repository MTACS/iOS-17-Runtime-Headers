
@interface MLCTensorData : NSObject {
    NSData * _data;
}

@property (nonatomic, readonly) void*bytes;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) unsigned long long length;

+ (id)dataWithBytes:(void*)arg1 length:(unsigned long long)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(id /* block */)arg3;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
+ (id)dataWithImmutableBytesNoCopy:(const void*)arg1 length:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void*)bytes;
- (id)data;
- (id)initWithData:(void*)arg1 length:(unsigned long long)arg2;
- (id)initWithDataNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(id /* block */)arg3;
- (id)initWithDataNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (unsigned long long)length;
- (void)setData:(id)arg1;

@end
