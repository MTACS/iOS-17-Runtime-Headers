
@protocol ICNoteUI <NSObject>

@optional

- (void)createMissingAttachmentsInTextStorage;
- (void)noteDidApplyAttachmentViewTypeToAllAttachments;
- (void)noteDidClearDecryptedData;
- (void)noteDidMergeNoteDocumentWithUserInfo:(NSMutableDictionary *)arg1;
- (void)noteDidReplaceDocument;
- (void)noteWillMergeDocumentWithUserInfo:(NSMutableDictionary *)arg1;
- (void)noteWillReleaseTextStorage;
- (void)noteWillTurnIntoFault;
- (bool)shouldReleaseTextStorageWhenTurningIntoFault;
- (NSAttributedString *)uiAttributedString;

@end
