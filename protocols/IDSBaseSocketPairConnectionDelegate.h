
@protocol IDSBaseSocketPairConnectionDelegate <NSObject>

@optional

- (void)connection:(IDSBaseSocketPairConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)connectionDidClose:(IDSBaseSocketPairConnection *)arg1;

@end
