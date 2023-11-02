
@protocol IMDeliveryReceiptProcessingParameter <IMPipelineParameter>

@required

- (NSString *)GUID;
- (void)setChat:(IMDChat *)arg1;
- (void)setMessageItems:(NSArray *)arg1;
- (NSNumber *)timestamp;

@end
