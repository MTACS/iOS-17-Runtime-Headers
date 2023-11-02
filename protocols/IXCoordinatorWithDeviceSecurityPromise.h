
@protocol IXCoordinatorWithDeviceSecurityPromise <NSObject>

@required

- (IXPromisedOutOfBandTransfer *)deviceSecurityPromiseWithError:(id*)arg1;
- (bool)getHasDeviceSecurityPromise:(bool*)arg1 error:(id*)arg2;
- (bool)setDeviceSecurityPromise:(IXPromisedOutOfBandTransfer *)arg1 error:(id*)arg2;

@end
