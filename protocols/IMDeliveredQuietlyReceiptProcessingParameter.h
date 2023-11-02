
@protocol IMDeliveredQuietlyReceiptProcessingParameter <IMPipelineParameter>

@required

- (NSString *)GUID;
- (IMDiMessageIDSTrustedData *)idsTrustedData;
- (bool)isFromStorage;
- (bool)isLastFromStorage;
- (void)setChat:(IMDChat *)arg1;
- (void)setMessageItems:(NSArray *)arg1;
- (NSNumber *)timestamp;

@end
