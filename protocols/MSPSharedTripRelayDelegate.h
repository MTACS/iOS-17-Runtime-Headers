
@protocol MSPSharedTripRelayDelegate <NSObject>

@required

- (void)relay:(MSPSharedTripRelay *)arg1 receiveData:(NSData *)arg2 info:(NSDictionary *)arg3 fromID:(NSString *)arg4;
- (void)relay:(MSPSharedTripRelay *)arg1 sharingClosed:(NSString *)arg2;

@end
