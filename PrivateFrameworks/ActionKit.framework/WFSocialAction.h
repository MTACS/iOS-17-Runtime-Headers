
@interface WFSocialAction : WFShareExtensionAction

@property (nonatomic, readonly) NSString *postPrefix;

+ (id)userInterfaceProtocol;

- (id)contentDestinationWithError:(id*)arg1;
- (void)convertAnimatedImagesToVideoWithInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)convertsAnimatedImagesToVideo;
- (id)postPrefix;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)showUIWithArchivedItems:(id)arg1 isContentManaged:(bool)arg2 extensionBundleIdentifier:(id)arg3;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
