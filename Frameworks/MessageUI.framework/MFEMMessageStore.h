
@interface MFEMMessageStore : MFMessageStore <EMContentItemRequestDelegate, MFMailMessageStore> {
    NSData * _bodyHTMLData;
    EMContentRepresentation * _bodyRepresentation;
    NSMutableDictionary * _contentIDsToContentItems;
    NSMutableDictionary * _contentIDsToRepresentations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    MFMailboxUid * _mailbox;
    EMMessage * _message;
    Class  _messageClass;
    NSString * _mimeBoundary;
    bool  _skipAttachmentDownload;
}

@property (nonatomic, readonly) MailAccount *account;
@property (nonatomic, retain) NSData *bodyHTMLData;
@property (nonatomic, retain) EMContentRepresentation *bodyRepresentation;
@property (nonatomic, retain) NSMutableDictionary *contentIDsToContentItems;
@property (nonatomic, retain) NSMutableDictionary *contentIDsToRepresentations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MFMailMessage *legacyMessage;
@property (nonatomic, readonly) MFMailboxUid *mailbox;
@property (nonatomic, readonly) MFMailboxUid *mailboxUid;
@property (nonatomic, retain) EMMessage *message;
@property (nonatomic, retain) Class messageClass;
@property (nonatomic, retain) NSString *mimeBoundary;
@property (nonatomic) bool skipAttachmentDownload;
@property (readonly) Class superclass;

+ (id)headersForDraftRestoration;

- (void).cxx_destruct;
- (bool)_isDisplayableImageContentItem:(id)arg1;
- (id)_markupStringForDisplayForContentItem:(id)arg1;
- (id)_requestMessageContentRepresentationFetchIfNotAvailable:(bool)arg1;
- (id)account;
- (bool)bodyFetchRequiresNetworkActivity;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(bool)arg2 updateFlags:(bool)arg3;
- (id)bodyHTMLData;
- (id)bodyRepresentation;
- (id)contentIDsToContentItems;
- (id)contentIDsToRepresentations;
- (void)contentObjectID:(id)arg1 generateHTMLSnippetsForMailDropContentItems:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)contentObjectID:(id)arg1 generateHTMLSnippetsForRelatedContentItems:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)contentObjectID:(id)arg1 placeholderHTMLForEmptyContentWithCompletionHandler:(id /* block */)arg2;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 didDownload:(bool*)arg5;
- (void)dealloc;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(bool)arg2;
- (id)initWithEMMessage:(id)arg1 messageClass:(Class)arg2 mailboxUid:(id)arg3 skipAttachmentDownload:(bool)arg4;
- (id)legacyMessage;
- (id)mailbox;
- (id)mailboxUid;
- (id)message;
- (Class)messageClass;
- (id)mimeBoundary;
- (void)setBodyHTMLData:(id)arg1;
- (void)setBodyRepresentation:(id)arg1;
- (void)setContentIDsToContentItems:(id)arg1;
- (void)setContentIDsToRepresentations:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageClass:(Class)arg1;
- (void)setMimeBoundary:(id)arg1;
- (void)setSkipAttachmentDownload:(bool)arg1;
- (bool)shouldDownloadBodyDataForMessage:(id)arg1;
- (bool)skipAttachmentDownload;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(bool)arg3;

@end
