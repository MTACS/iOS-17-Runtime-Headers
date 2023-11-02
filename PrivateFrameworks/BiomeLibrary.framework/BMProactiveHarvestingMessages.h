
@interface BMProactiveHarvestingMessages : BMEventBase <BMStoreData> {
    NSArray * _accountHandles;
    NSString * _accountIdentifier;
    NSString * _accountType;
    BMProactiveHarvestingContentAttachment * _attachment;
    NSString * _attachmentURL;
    NSString * _author;
    NSString * _content;
    NSString * _contentProtection;
    NSString * _conversationId;
    NSString * _domainID;
    BMProactiveHarvestingNamedHandle * _fromHandle;
    bool  _hasRaw_absoluteTimestamp;
    NSString * _personaId;
    double  _raw_absoluteTimestamp;
    NSString * _recipients;
    NSString * _suggestedNickname;
    NSString * _suggestedPhotoPath;
    NSArray * _toHandles;
    NSString * _uniqueID;
    NSString * _url;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSArray *accountHandles;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *accountType;
@property (nonatomic, readonly) BMProactiveHarvestingContentAttachment *attachment;
@property (nonatomic, readonly) NSString *attachmentURL;
@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) NSString *conversationId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainID;
@property (nonatomic, readonly) BMProactiveHarvestingNamedHandle *fromHandle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personaId;
@property (nonatomic, readonly) NSString *recipients;
@property (nonatomic, readonly) NSString *suggestedNickname;
@property (nonatomic, readonly) NSString *suggestedPhotoPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *toHandles;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) NSString *url;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_accountHandlesJSONArray;
- (id)_toHandlesJSONArray;
- (id)absoluteTimestamp;
- (id)accountHandles;
- (id)accountIdentifier;
- (id)accountType;
- (id)attachment;
- (id)attachmentURL;
- (id)author;
- (id)content;
- (id)contentProtection;
- (id)conversationId;
- (unsigned int)dataVersion;
- (id)description;
- (id)domainID;
- (id)fromHandle;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUniqueID:(id)arg1 domainID:(id)arg2 absoluteTimestamp:(id)arg3 conversationId:(id)arg4 author:(id)arg5 suggestedNickname:(id)arg6 suggestedPhotoPath:(id)arg7 recipients:(id)arg8 attachmentURL:(id)arg9 content:(id)arg10 fromHandle:(id)arg11 toHandles:(id)arg12 accountIdentifier:(id)arg13 accountType:(id)arg14 accountHandles:(id)arg15 attachment:(id)arg16 url:(id)arg17 contentProtection:(id)arg18 personaId:(id)arg19;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)personaId;
- (id)recipients;
- (id)serialize;
- (id)suggestedNickname;
- (id)suggestedPhotoPath;
- (id)toHandles;
- (id)uniqueID;
- (id)url;
- (void)writeTo:(id)arg1;

@end
