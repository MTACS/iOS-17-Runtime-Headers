
@protocol SFCollaborationFileURLItem <SFCollaborationItem>

@required

- (NSURL *)fileURL;
- (bool)hasSeparateSendCopyRepresentation;
- (bool)isCollaborativeURL;
- (bool)isInSharedFolder;
- (bool)isLocalStorage;
- (bool)isShared;
- (bool)isThirdPartyFileProviderBacked;
- (bool)isiCloudDrive;
- (void)loadCopyRepresentationURLWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*

@end
