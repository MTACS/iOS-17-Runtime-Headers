
@protocol IMDeferReplicatedMessageParameter <IMPipelineParameter>

@required

- (NSString *)GUID;
- (bool)isFromMe;
- (bool)isSOS;
- (NSString *)replicationSourceServiceName;

@end
