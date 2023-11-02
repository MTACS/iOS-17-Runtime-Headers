
@protocol EKCancellableRemoteOperation <NSObject>

@required

- (void)cancel;

@optional

- (void)disconnected;
- (void)receivedBatchResultsFromServer:(id)arg1 finished:(bool)arg2;

@end
