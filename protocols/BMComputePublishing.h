
@protocol BMComputePublishing <NSObject>

@required

- (void)receiveInputForIdentifier:(NSString *)arg1 streamIdentifier:(NSString *)arg2 storeEvent:(BMStoreEvent *)arg3;

@end
