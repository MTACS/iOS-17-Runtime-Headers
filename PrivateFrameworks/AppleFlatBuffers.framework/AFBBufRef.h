
@interface AFBBufRef : NSObject {
    struct __CFAllocator { } * _cfReleaseBackingDataDeallocator;
    NSData * _data;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) struct __CFAllocator { }*deallocator;

- (void).cxx_destruct;
- (id)data;
- (void)dealloc;
- (struct __CFAllocator { }*)deallocator;
- (id)initWithData:(id)arg1;
- (void)releaseBuf;
- (void)retainBuf;

@end
