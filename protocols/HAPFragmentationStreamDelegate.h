
@protocol HAPFragmentationStreamDelegate <NSObject>

@required

- (void)fragmentationStream:(HAPFragmentationStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)fragmentationStream:(HAPFragmentationStream *)arg1 didReceiveData:(NSData *)arg2 transactionIdentifier:(unsigned short)arg3 error:(NSError *)arg4;

@end
