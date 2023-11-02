
@protocol KVProfileWriterProvider <NSObject>

@required

- (NSObject<KVProfileWriter> *)profileWriterForFormat:(unsigned char)arg1 outputStream:(NSOutputStream *)arg2 error:(id*)arg3;

@end
