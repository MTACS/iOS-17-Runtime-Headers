
@protocol IMRecoverJunkCommandProcessingParameter <IMPipelineParameter>

@required

- (NSString *)GUID;
- (bool)isFromMe;
- (bool)isFromStorage;
- (bool)isLastFromStorage;
- (NSString *)replicationSourceServiceName;
- (void)setChat:(IMDChat *)arg1;
- (void)setReplicationSourceServiceName:(NSString *)arg1;
- (NSNumber *)timestamp;

@end
