
@protocol CUReadWriteRequestable

@required

- (void)readWithRequest:(CUReadRequest *)arg1;
- (void)writeWithRequest:(CUWriteRequest *)arg1;

@end
