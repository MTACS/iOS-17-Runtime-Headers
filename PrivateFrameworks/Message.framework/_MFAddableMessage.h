
@interface _MFAddableMessage : NSObject <ECMessage> {
    MFLibraryMessage * _libraryMessage;
    long long  _messageIDHash;
    NSString * _urlString;
}

@property (nonatomic, readonly) <ECMailAccount> *account;
@property (nonatomic, readonly, copy) NSArray *bcc;
@property (nonatomic, readonly, copy) NSArray *cc;
@property (nonatomic, readonly) long long conversationID;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSUUID *documentID;
@property (nonatomic, readonly) ECMessageFlags *flags;
@property (nonatomic, readonly, copy) NSArray *from;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <ECMessageHeaders> *headers;
@property (nonatomic, readonly, copy) NSDictionary *headersDictionary;
@property (nonatomic, readonly) bool isServerSearchResult;
@property (readonly) NSSet *labels;
@property (nonatomic, readonly) MFLibraryMessage *libraryMessage;
@property (nonatomic, readonly) ECAngleBracketIDHash *listIDHash;
@property (nonatomic, readonly, copy) NSArray *listUnsubscribe;
@property (nonatomic, readonly) <ECMailbox> *mailbox;
@property (nonatomic, readonly, copy) NSString *messageIDHeader;
@property (nonatomic, readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property (nonatomic, readonly) <ECMimeBody> *mimeBody;
@property (nonatomic, readonly) unsigned long long numberOfAttachments;
@property (getter=isPartOfExistingThread, nonatomic, readonly) bool partOfExistingThread;
@property (nonatomic, readonly, copy) NSString *persistentID;
@property (nonatomic, readonly, copy) NSArray *references;
@property (nonatomic, readonly, copy) NSString *remoteID;
@property (nonatomic, readonly, copy) NSArray *senders;
@property (nonatomic, readonly, copy) ECSubject *subject;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *to;
@property (nonatomic, readonly, copy) NSString *urlString;

- (void).cxx_destruct;
- (id)bestAlternativePart:(bool*)arg1;
- (id)bestAlternativePartAsData:(bool*)arg1 usingEncoding:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithLibraryMessage:(id)arg1 messageIDHash:(long long)arg2 mailboxURL:(id)arg3;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isServerSearchResult;
- (id)libraryMessage;
- (id)mailbox;
- (long long)messageIDHash;
- (id)messageIDHeaderHash;
- (bool)respondsToSelector:(SEL)arg1;
- (id)urlString;

@end
