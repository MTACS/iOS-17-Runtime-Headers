
@interface _INPBSendAnnouncementIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSendAnnouncementIntent> {
    _INPBAnnouncement * _announcement;
    struct { 
        unsigned int isReply : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    bool  _isReply;
    NSArray * _recipients;
    NSString * _sharedUserID;
}

@property (nonatomic, retain) _INPBAnnouncement *announcement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAnnouncement;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasIsReply;
@property (nonatomic, readonly) bool hasSharedUserID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) bool isReply;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (nonatomic, copy) NSString *sharedUserID;
@property (readonly) Class superclass;

+ (Class)recipientsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addRecipients:(id)arg1;
- (id)announcement;
- (void)clearRecipients;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAnnouncement;
- (bool)hasIntentMetadata;
- (bool)hasIsReply;
- (bool)hasSharedUserID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)isReply;
- (bool)readFrom:(id)arg1;
- (id)recipients;
- (id)recipientsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)setAnnouncement:(id)arg1;
- (void)setHasIsReply:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setIsReply:(bool)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSharedUserID:(id)arg1;
- (id)sharedUserID;
- (void)writeTo:(id)arg1;

@end
