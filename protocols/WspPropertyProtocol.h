
@protocol WspPropertyProtocol

@required

- (int)encodeBuffer:(NSData *)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (unsigned int)propertyID;

@end
