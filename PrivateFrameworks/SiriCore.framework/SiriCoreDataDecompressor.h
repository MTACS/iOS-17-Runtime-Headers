
@interface SiriCoreDataDecompressor : NSObject

- (id)decompressedDataForBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (id)decompressedDataForData:(id)arg1 error:(id*)arg2;

@end
