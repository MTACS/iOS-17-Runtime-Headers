
@interface MFMailQLAttachmentContext : NSObject {
    MFAttachment * _attachmentBeingEdited;
    NSURL * _attachmentURL;
    bool  _contentManaged;
    long long  _editBehavior;
    bool  _insertingDrawing;
    EMMailboxObjectID * _mailboxObjectID;
    EMMessageObjectID * _messageObjectID;
    NSString * _senderDisplayName;
    bool  _shouldShowReplyAll;
    NSString * _subject;
}

@property (nonatomic, readonly) MFAttachment *attachmentBeingEdited;
@property (nonatomic, readonly) NSURL *attachmentURL;
@property (getter=isContentManaged, nonatomic, readonly) bool contentManaged;
@property (nonatomic, readonly) long long editBehavior;
@property (nonatomic, readonly) bool insertingDrawing;
@property (nonatomic, readonly) EMMailboxObjectID *mailboxObjectID;
@property (nonatomic, readonly) EMMessageObjectID *messageObjectID;
@property (nonatomic, readonly) NSString *senderDisplayName;
@property (nonatomic, readonly) bool shouldShowReplyAll;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly, copy) NSUserActivity *userActivity;

+ (id)contextWithUserActivity:(id)arg1;

- (void).cxx_destruct;
- (id)attachmentBeingEdited;
- (id)attachmentURL;
- (long long)editBehavior;
- (id)initForInsertingDrawing;
- (id)initWithAttachmentBeingEdited:(id)arg1;
- (id)initWithAttachmentURL:(id)arg1 editBehavior:(long long)arg2 messageObjectID:(id)arg3 mailboxObjectID:(id)arg4 subject:(id)arg5 senderDisplayName:(id)arg6 shouldShowReplyAll:(bool)arg7 contentManaged:(bool)arg8;
- (bool)insertingDrawing;
- (bool)isContentManaged;
- (id)mailboxObjectID;
- (id)messageObjectID;
- (id)senderDisplayName;
- (bool)shouldShowReplyAll;
- (id)subject;
- (id)userActivity;

@end
