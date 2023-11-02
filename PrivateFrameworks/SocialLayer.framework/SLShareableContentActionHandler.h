
@interface SLShareableContentActionHandler : NSObject

+ (id)sharedActionHandler;

- (id)activityItemsConfigurationForScene:(id)arg1;
- (id)activityItemsConfigurationForSceneWithIdentifier:(id)arg1;
- (void)fulfillContentAction:(id)arg1 itemProvider:(id)arg2;
- (void)fulfillMetadataAction:(id)arg1 error:(id)arg2;
- (void)fulfillMetadataAction:(id)arg1 itemProviders:(id)arg2 linkMetadata:(id)arg3;
- (void)fulfillMetadataAction:(id)arg1 itemProviders:(id)arg2 linkMetadata:(id)arg3 containerSetupInfo:(id)arg4;
- (void)fulfillMetadataAction:(id)arg1 itemProviders:(id)arg2 linkMetadata:(id)arg3 highlightURL:(id)arg4 initiatorRequest:(id)arg5;
- (void)fulfillMetadataAction:(id)arg1 itemProviders:(id)arg2 linkMetadata:(id)arg3 inPlaceFileURL:(id)arg4;
- (void)fulfillMetadataAction:(id)arg1 itemProviders:(id)arg2 linkMetadata:(id)arg3 pendingCollaboration:(id)arg4;
- (void)fulfillMetadataAction:(id)arg1 itemProviders:(id)arg2 linkMetadata:(id)arg3 sharingContext:(id)arg4;
- (void)fulfillMetadataAction:(id)arg1 response:(id)arg2;
- (void)performAction:(id)arg1;
- (void)performActions:(id)arg1;
- (void)performFetchShareableContentAction:(id)arg1;
- (void)performFetchShareableContentMetadataAction:(id)arg1;
- (void)performSendShareableContentAction:(id)arg1;
- (id)respondToBSActions:(id)arg1;
- (id)sceneWithIdentifier:(id)arg1;
- (id)titleForActivityItemsConfiguration:(id)arg1;

@end
