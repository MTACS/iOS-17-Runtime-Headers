
@protocol ASDRequestObserver <NSObject>

@required

- (void)request:(ASDRequest *)arg1 didCompleteWithError:(NSError *)arg2;

@end
