
@protocol CBReadWriteRequestable

@required

- (void)readWithCBReadRequest:(CBReadRequest *)arg1;
- (void)writeWithCBWriteRequest:(CBWriteRequest *)arg1;

@end
