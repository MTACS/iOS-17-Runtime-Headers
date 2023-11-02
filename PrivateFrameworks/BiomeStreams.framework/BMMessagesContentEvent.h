
@interface BMMessagesContentEvent : NSObject <BMCommunicationsAccountContentEvent, BMPersonaAwareIdentifiableContentEvent, BMProtoBufWrapper, BMStoreData, BMStreamValidating, BMStringContentContentEvent, NSSecureCoding> {
    NSURL * _URL;
    double  _absoluteTimestamp;
    NSArray * _accountHandles;
    NSString * _accountIdentifier;
    NSString * _accountType;
    BMContentAttachment * _attachment;
    NSString * _content;
    NSString * _contentProtection;
    NSString * _conversationId;
    NSString * _domainId;
    BMNamedHandle * _fromHandle;
    NSString * _personaId;
    NSString * _suggestedNickname;
    NSString * _suggestedPhotoPath;
    NSArray * _toHandles;
    NSString * _uniqueId;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSArray *accountHandles;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *accountType;
@property (nonatomic, readonly) BMContentAttachment *attachment;
@property (nonatomic, readonly) NSArray *bccHandles;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSArray *ccHandles;
@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) NSString *conversationId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainId;
@property (nonatomic, readonly) BMNamedHandle *fromHandle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personaId;
@property (nonatomic, readonly) NSString *suggestedNickname;
@property (nonatomic, readonly) NSString *suggestedPhotoPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *toHandles;
@property (nonatomic, readonly) NSString *uniqueId;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (double)absoluteTimestamp;
- (id)accountHandles;
- (id)accountIdentifier;
- (id)accountType;
- (id)attachment;
- (id)content;
- (id)contentProtection;
- (id)conversationId;
- (unsigned int)dataVersion;
- (id)domainId;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)fromHandle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(double)arg3 conversationId:(id)arg4 fromHandle:(id)arg5 toHandles:(id)arg6 suggestedNickname:(id)arg7 suggestedPhotoPath:(id)arg8 content:(id)arg9 accountIdentifier:(id)arg10 accountHandles:(id)arg11 accountType:(id)arg12 attachment:(id)arg13 URL:(id)arg14;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(double)arg3 conversationId:(id)arg4 fromHandle:(id)arg5 toHandles:(id)arg6 suggestedNickname:(id)arg7 suggestedPhotoPath:(id)arg8 content:(id)arg9 accountIdentifier:(id)arg10 accountHandles:(id)arg11 accountType:(id)arg12 attachment:(id)arg13 URL:(id)arg14 contentProtection:(id)arg15;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 personaId:(id)arg3 absoluteTimestamp:(double)arg4 conversationId:(id)arg5 fromHandle:(id)arg6 toHandles:(id)arg7 suggestedNickname:(id)arg8 suggestedPhotoPath:(id)arg9 content:(id)arg10 accountIdentifier:(id)arg11 accountHandles:(id)arg12 accountType:(id)arg13 attachment:(id)arg14 URL:(id)arg15 contentProtection:(id)arg16;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDict;
- (id)personaId;
- (id)proto;
- (id)serialize;
- (id)suggestedNickname;
- (id)suggestedPhotoPath;
- (id)toHandles;
- (id)uniqueId;

@end
