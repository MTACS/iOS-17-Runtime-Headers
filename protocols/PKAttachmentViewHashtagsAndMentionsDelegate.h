
@protocol PKAttachmentViewHashtagsAndMentionsDelegate <NSObject>

@required

- (NSSet *)allConfirmedHashtagsForAttachmentView:(PKAttachmentView *)arg1;
- (NSDictionary *)allConfirmedMentionsForAttachmentView:(PKAttachmentView *)arg1;
- (NSArray *)attachmentView:(PKAttachmentView *)arg1 participantMatchesForMentionText:(NSString *)arg2;
- (void)attachmentView:(PKAttachmentView *)arg1 userConfirmedHashtagWithUUID:(NSUUID *)arg2 displayText:(NSString *)arg3;
- (void)attachmentView:(PKAttachmentView *)arg1 userConfirmedMentionWithUUID:(NSUUID *)arg2 participantIdentifier:(NSString *)arg3;
- (void)attachmentView:(PKAttachmentView *)arg1 userDeletedHashtagWithUUID:(NSUUID *)arg2;
- (void)attachmentView:(PKAttachmentView *)arg1 userDeletedMentionWithUUID:(NSUUID *)arg2;

@optional

- (NSSet *)allPossibleParticipantNameTokensForAttachmentView:(PKAttachmentView *)arg1;
- (void)allPossibleParticipantNameTokensForAttachmentView:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKAttachmentView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*

@end
