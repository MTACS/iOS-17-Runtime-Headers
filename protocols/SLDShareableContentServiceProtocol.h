
@protocol SLDShareableContentServiceProtocol <NSObject>

@required

- (void)loadRepresentationFromSourceIdentifier:(void *)arg1 requestedTypeIdentifier:(void *)arg2 requestedItemProviderIndex:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SLShareableContentLoadResult *, NSError *, void*
- (void)presentMessageComposeSheetForSourceIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)retrieveShareableContentMetadataMatchingBundleIdentifier:(void *)arg1 sceneIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)shareCollaborationData:(void *)arg1 faceTimeConversationUUID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
