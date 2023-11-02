
@protocol IMFindAccountProcessingParameter <IMPipelineParameter>

@required

- (NSString *)replicationSourceServiceName;
- (void)setAccount:(IMDAccount *)arg1;
- (void)setServiceSession:(IMDServiceSession *)arg1;
- (NSString *)toIdentifier;

@optional

- (bool)isSOS;

@end
