
@protocol DRSDecisionServerBatchRequest <NSObject>

@required

- (DRSProtoClientDeviceMetadata *)clientMetadata;
- (bool)hasClientMetadata;
- (NSMutableArray *)requests;
- (void)setClientMetadata:(DRSProtoClientDeviceMetadata *)arg1;
- (void)setRequests:(NSMutableArray *)arg1;

@end
