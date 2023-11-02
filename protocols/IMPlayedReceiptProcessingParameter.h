
@protocol IMPlayedReceiptProcessingParameter <IMPipelineParameter>

@required

- (NSString *)GUID;
- (IMDiMessageIDSTrustedData *)idsTrustedData;
- (bool)isFromDefaultPairedDevice;
- (bool)isFromStorage;
- (bool)isLastFromStorage;
- (void)setChat:(IMDChat *)arg1;
- (void)setMessageItems:(NSArray *)arg1;
- (NSNumber *)timestamp;

@end
