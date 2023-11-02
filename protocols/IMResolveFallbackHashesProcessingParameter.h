
@protocol IMResolveFallbackHashesProcessingParameter <IMPipelineParameter>

@required

- (IMDChat *)chat;
- (bool)isFromMe;
- (NSString *)replicationSourceServiceName;
- (void)setThreadIdentifierGUID:(NSString *)arg1;
- (NSString *)threadIdentifierGUID;
- (NSString *)threadOriginatorFallbackHash;

@optional

- (NSString *)associatedMessageFallbackHash;
- (NSString *)associatedMessageGUID;
- (void)setAssociatedMessageGUID:(NSString *)arg1;

@end
