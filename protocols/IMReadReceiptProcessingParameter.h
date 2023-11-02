
@protocol IMReadReceiptProcessingParameter <IMPipelineParameter>

@required

- (NSString *)GUID;
- (NSString *)fromIdentifier;
- (NSString *)fromPushID;
- (bool)isFromDefaultPairedDevice;
- (bool)isFromMe;
- (void)setChat:(IMDChat *)arg1;
- (void)setMessageItems:(NSArray *)arg1;
- (NSNumber *)timestamp;

@end
