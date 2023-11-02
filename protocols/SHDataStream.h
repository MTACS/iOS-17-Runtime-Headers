
@protocol SHDataStream <NSObject>

@required

- (bool)closeWithError:(id*)arg1;
- (<SHDataStream> *)next;
- (bool)processData:(NSData *)arg1 error:(id*)arg2;
- (void)setNext:(id <SHDataStream>)arg1;

@end
