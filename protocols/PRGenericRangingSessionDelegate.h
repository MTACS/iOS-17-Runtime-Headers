
@protocol PRGenericRangingSessionDelegate <NSObject>

@required

- (void)didFailWithError:(NSError *)arg1;
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;

@optional

- (void)didReceiveNewSolutions:(NSArray *)arg1;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
- (void)remoteDevice:(PRRemoteDevice *)arg1 didChangeState:(long long)arg2;

@end
