
@interface SFUMemoryDataRepresentation : SFUDataRepresentation {
    NSData * mData;
}

- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;
- (id)data;
- (long long)dataLength;
- (void)dealloc;
- (bool)hasSameLocationAs:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithDataNoCopy:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)inputStream;
- (bool)isReadable;
- (unsigned long long)readIntoData:(id)arg1;

@end
