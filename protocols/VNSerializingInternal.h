
@protocol VNSerializingInternal

@required

- (id)initWithState:(NSData *)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3;
- (unsigned long long)serializeStateIntoData:(NSMutableData *)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;

@end
