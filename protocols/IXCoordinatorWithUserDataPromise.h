
@protocol IXCoordinatorWithUserDataPromise <NSObject>

@required

- (bool)hasUserDataPromise;
- (bool)setUserDataPromise:(IXPromisedOutOfBandTransfer *)arg1 error:(id*)arg2;
- (IXPromisedOutOfBandTransfer *)userDataPromiseWithError:(id*)arg1;
- (NSError *)userDataRestoreShouldBegin:(bool*)arg1;

@end
