
@protocol HMDAccessoryDataStreamAdapterDelegate <NSObject>

@required

- (bool)dataStreamAdapter:(HMDAccessoryDataStreamAdapter *)arg1 didReceiveData:(NSDictionary *)arg2;
- (void)dataStreamAdapterDidCompleteDataRead:(HMDAccessoryDataStreamAdapter *)arg1;
- (void)dataStreamAdapterDidFailDataRead:(HMDAccessoryDataStreamAdapter *)arg1;

@end
