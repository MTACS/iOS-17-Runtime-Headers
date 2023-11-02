
@interface BMMailContentEvent : NSObject <BMCommunicationsAccountContentEvent, BMPersonaAwareIdentifiableContentEvent, BMProtoBufWrapper, BMStoreData, BMStreamValidating, NSSecureCoding> {
    NSArray * _attachments;
    NSArray * _bccHandles;
    NSArray * _ccHandles;
    NSData * _data;
    NSString * _domainId;
    BMNamedHandle * _fromHandle;
    NSDictionary * _headers;
    BMNamedHandle * _listId;
    NSString * _personaId;
    BMPBMailContentEvent * _proto;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _protoLock;
    BMNamedHandle * _replyTo;
    NSArray * _toHandles;
    NSString * _uniqueId;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSArray *accountHandles;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *accountType;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSArray *bccHandles;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSArray *ccHandles;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainId;
@property (nonatomic, readonly) BMNamedHandle *fromHandle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *headers;
@property (nonatomic, readonly) NSData *htmlContent;
@property (nonatomic, readonly) bool isFullyDownloaded;
@property (nonatomic, readonly) BMNamedHandle *listId;
@property (nonatomic, readonly) NSArray *mailboxIdentifiers;
@property (nonatomic, readonly) NSString *messageIdentifier;
@property (nonatomic, readonly) NSString *personaId;
@property (nonatomic, readonly) BMNamedHandle *replyTo;
@property (nonatomic, readonly) NSString *securityMethod;
@property (nonatomic, readonly) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textContent;
@property (nonatomic, readonly) NSArray *toHandles;
@property (nonatomic, readonly) NSString *uniqueId;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_inflateFromProto:(id)arg1;
- (id)_initWithUniqueId:(id)arg1 domainId:(id)arg2 personaId:(id)arg3;
- (void)_loadData;
- (id)attachments;
- (id)bccHandles;
- (id)ccHandles;
- (unsigned int)dataVersion;
- (id)debugDescription;
- (id)domainId;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)fromHandle;
- (unsigned long long)hash;
- (id)headers;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(double)arg3 accountIdentifier:(id)arg4 messageIdentifier:(id)arg5 fromHandle:(id)arg6 toHandles:(id)arg7 ccHandles:(id)arg8 bccHandles:(id)arg9 headers:(id)arg10 subject:(id)arg11 htmlContent:(id)arg12 textContent:(id)arg13 isFullyDownloaded:(bool)arg14 securityMethod:(id)arg15 accountHandles:(id)arg16 replyTo:(id)arg17 mailboxIdentifiers:(id)arg18 listId:(id)arg19 accountType:(id)arg20 attachments:(id)arg21;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(double)arg3 accountIdentifier:(id)arg4 messageIdentifier:(id)arg5 fromHandle:(id)arg6 toHandles:(id)arg7 ccHandles:(id)arg8 bccHandles:(id)arg9 headers:(id)arg10 subject:(id)arg11 htmlContent:(id)arg12 textContent:(id)arg13 isFullyDownloaded:(bool)arg14 securityMethod:(id)arg15 accountHandles:(id)arg16 replyTo:(id)arg17 mailboxIdentifiers:(id)arg18 listId:(id)arg19 accountType:(id)arg20 attachments:(id)arg21 contentProtection:(id)arg22;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 personaId:(id)arg3 absoluteTimestamp:(double)arg4 accountIdentifier:(id)arg5 messageIdentifier:(id)arg6 fromHandle:(id)arg7 toHandles:(id)arg8 ccHandles:(id)arg9 bccHandles:(id)arg10 headers:(id)arg11 subject:(id)arg12 htmlContent:(id)arg13 textContent:(id)arg14 isFullyDownloaded:(bool)arg15 securityMethod:(id)arg16 accountHandles:(id)arg17 replyTo:(id)arg18 mailboxIdentifiers:(id)arg19 listId:(id)arg20 accountType:(id)arg21 attachments:(id)arg22 contentProtection:(id)arg23;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDict;
- (id)listId;
- (id)personaId;
- (id)proto;
- (id)replyTo;
- (id)serialize;
- (id)toHandles;
- (id)uniqueId;

@end
