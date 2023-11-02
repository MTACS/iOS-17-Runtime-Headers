
@protocol HFMediaServiceManagerObserver <NSObject>

@required

- (void)defaultMediaServiceDidUpdate:(MediaService *)arg1;
- (void)mediaServiceDidUpdate:(MediaService *)arg1;
- (void)mediaServiceRemoved:(MediaService *)arg1;
- (void)mediaServicesDidUpdate:(NSArray *)arg1;

@end
