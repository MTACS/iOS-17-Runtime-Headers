
@protocol CUByteCodable

@required

+ (id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;

- (const char *)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2;
- (NSData *)encodedDataAndReturnError:(id*)arg1;

@end
