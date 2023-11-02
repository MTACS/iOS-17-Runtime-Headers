
@protocol MSVQRConnectionDelegate <NSObject>

@required

- (void)connection:(MSVQRConnection *)arg1 didEndWithError:(NSError *)arg2;
- (void)connection:(MSVQRConnection *)arg1 didReceiveMessage:(id)arg2;
- (void)connectionDidStart:(MSVQRConnection *)arg1;

@end
