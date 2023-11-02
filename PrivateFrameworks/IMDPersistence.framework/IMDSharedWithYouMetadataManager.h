
@interface IMDSharedWithYouMetadataManager : NSObject

+ (Class)LPSharedObjectMetadataClass;
+ (Class)LPSpecializationMetadataClass;
+ (id)Sha256ForData:(id)arg1 withSalt:(id)arg2;
+ (id)collaborationMetadataKey;
+ (id)dataDetectedLink;
+ (id)tuManagerQueue;

- (id)_ckBundleIDsKey;
- (id)_collaborationIdentifierKey;
- (id)_highlightedContentServerDateKey;
- (id)_indexTypeCustomKey;
- (bool)_isAttachmentType:(id)arg1;
- (bool)_isLNKTypeMessage:(id)arg1;
- (id)_lpLinkMetadataForItem:(id)arg1 attachmentPaths:(id)arg2 originalURL:(id)arg3;
- (id)_lpTitleCustomKey;
- (id)_pluginPayloadAttachmentPathsForItem:(id)arg1;
- (bool)_shouldDonateToSharedWithYou:(id)arg1 lpLinkMetadata:(id)arg2;
- (id)_syndicationContentTypeKey;
- (id)_uniqueIdentifierForResourceURL:(id)arg1;
- (id)_updateAttributesWithCollaborationMetadata:(id)arg1 forMessageWithGUID:(id)arg2 withURL:(id)arg3 lpLinkMetadata:(id)arg4 messageDate:(id)arg5;
- (bool)chatDictionary:(id)arg1 matchesFaceTimeConversation:(id)arg2;
- (id)highlightDictionaryFromAttributes:(id)arg1 withItem:(id)arg2 chat:(id)arg3;
- (id)titleFromLPLinkMetadata:(id)arg1;
- (id)updateAttributesWithSharedWithYouMetadata:(id)arg1 withItem:(id)arg2 chat:(id)arg3;
- (void)updateConversationManagerWithItem:(id)arg1 chat:(id)arg2 attributes:(id)arg3;

@end
