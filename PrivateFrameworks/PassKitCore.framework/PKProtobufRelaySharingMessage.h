
@interface PKProtobufRelaySharingMessage : PBCodable <NSCopying> {
    NSString * _carKeyReaderIdentifier;
    NSData * _localData;
    NSMutableArray * _mailboxURLs;
    NSString * _provisioningCredentialHash;
    NSString * _status;
    NSString * _subtitle;
    NSData * _thumbnailImage;
    NSString * _title;
    unsigned int  _version;
}

@property (nonatomic, retain) NSString *carKeyReaderIdentifier;
@property (nonatomic, readonly) bool hasCarKeyReaderIdentifier;
@property (nonatomic, readonly) bool hasLocalData;
@property (nonatomic, readonly) bool hasProvisioningCredentialHash;
@property (nonatomic, readonly) bool hasStatus;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasThumbnailImage;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSData *localData;
@property (nonatomic, retain) NSMutableArray *mailboxURLs;
@property (nonatomic, retain) NSString *provisioningCredentialHash;
@property (nonatomic, retain) NSString *status;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSData *thumbnailImage;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) unsigned int version;

+ (Class)mailboxURLsType;

- (void).cxx_destruct;
- (void)addMailboxURLs:(id)arg1;
- (id)carKeyReaderIdentifier;
- (void)clearMailboxURLs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCarKeyReaderIdentifier;
- (bool)hasLocalData;
- (bool)hasProvisioningCredentialHash;
- (bool)hasStatus;
- (bool)hasSubtitle;
- (bool)hasThumbnailImage;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localData;
- (id)mailboxURLs;
- (id)mailboxURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mailboxURLsCount;
- (void)mergeFrom:(id)arg1;
- (id)provisioningCredentialHash;
- (bool)readFrom:(id)arg1;
- (void)setCarKeyReaderIdentifier:(id)arg1;
- (void)setLocalData:(id)arg1;
- (void)setMailboxURLs:(id)arg1;
- (void)setProvisioningCredentialHash:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)status;
- (id)subtitle;
- (id)thumbnailImage;
- (id)title;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
