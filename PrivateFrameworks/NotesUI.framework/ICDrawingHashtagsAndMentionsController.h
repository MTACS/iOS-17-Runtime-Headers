
@interface ICDrawingHashtagsAndMentionsController : NSObject <PKAttachmentViewHashtagsAndMentionsDelegate> {
    ICAttachment * _attachment;
    NSObject<OS_dispatch_queue> * _contactsRequestQueue;
    NSDictionary * _mentionTokensForParticipants;
}

@property (nonatomic) ICAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *eligibleShareParticipants;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, copy) NSDictionary *mentionTokensForParticipants;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic, readonly) CKShare *share;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allConfirmedHashtagsForAttachmentView:(id)arg1;
- (id)allConfirmedMentionsForAttachmentView:(id)arg1;
- (void)allPossibleParticipantNameTokensForAttachmentView:(id)arg1 completion:(id /* block */)arg2;
- (id)attachment;
- (id)attachmentView:(id)arg1 participantMatchesForMentionText:(id)arg2;
- (void)attachmentView:(id)arg1 userConfirmedHashtagWithUUID:(id)arg2 displayText:(id)arg3;
- (void)attachmentView:(id)arg1 userConfirmedMentionWithUUID:(id)arg2 participantIdentifier:(id)arg3;
- (void)attachmentView:(id)arg1 userDeletedHashtagWithUUID:(id)arg2;
- (void)attachmentView:(id)arg1 userDeletedMentionWithUUID:(id)arg2;
- (id)eligibleShareParticipants;
- (void)fetchMentionTokensForParticipants:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAttachment:(id)arg1;
- (id)managedObjectContext;
- (id)mentionTokensForParticipants;
- (id)note;
- (void)setAttachment:(id)arg1;
- (void)setMentionTokensForParticipants:(id)arg1;
- (id)share;

@end
