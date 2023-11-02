
@interface SGTextMessage : SGMessage {
    NSString * _attachmentFilename;
    NSString * _conversationIdentifier;
    bool  _isPotentialEventMessage;
    NSString * _nickname;
    NSString * _photoPath;
    NSArray * _recipients;
    CSPerson * _sender;
    bool  _senderIsAccountOwner;
    bool  _senderIsBusinessChat;
}

@property (readonly) NSString *attachmentFilename;
@property (retain) NSString *conversationIdentifier;
@property (nonatomic, readonly) bool isPotentialEventMessage;
@property (retain) NSString *nickname;
@property (retain) NSString *photoPath;
@property (retain) NSArray *recipients;
@property (retain) CSPerson *sender;
@property bool senderIsAccountOwner;
@property (readonly) bool senderIsBusinessChat;

+ (id)_nicknameCustomKey;
+ (id)_photoPathCustomKey;
+ (bool)isSent:(id)arg1;

- (void).cxx_destruct;
- (id)attachmentFilename;
- (id)author;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMessageDictionary:(id)arg1;
- (id)initWithMessagesContentEvent:(id)arg1 contentProtection:(id)arg2;
- (id)initWithSearchableItem:(id)arg1;
- (bool)isPotentialEventMessage;
- (id)nickname;
- (id)photoPath;
- (id)recipients;
- (id)sender;
- (bool)senderIsAccountOwner;
- (bool)senderIsBusinessChat;
- (void)setConversationIdentifier:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setPhotoPath:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSenderIsAccountOwner:(bool)arg1;
- (id)spotlightBundleIdentifier;
- (id)spotlightDomainIdentifier;

@end
