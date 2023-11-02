
@protocol CXVoicemailProviderHostProtocol <CXAbstractProviderHostProtocol>

@required

- (oneway void)reportNewVoicemailsWithUpdates:(NSArray *)arg1;
- (oneway void)reportVoicemailsRemovedWithUUIDs:(NSArray *)arg1;
- (oneway void)reportVoicemailsUpdated:(NSArray *)arg1;

@end
