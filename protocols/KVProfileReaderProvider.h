
@protocol KVProfileReaderProvider <NSObject>

@required

- (NSObject<KVProfileReader> *)profileReaderForData:(NSData *)arg1 error:(id*)arg2;

@end
