
@interface WFTumblrComposeInAppParameter : WFSwitchParameter <ICAppInstallStatusObserver>

- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;
- (id)defaultSerializedRepresentation;
- (bool)isHidden;
- (bool)parameterStateIsValid:(id)arg1;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
