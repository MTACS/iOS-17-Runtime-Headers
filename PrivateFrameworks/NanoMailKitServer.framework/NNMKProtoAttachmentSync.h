
@interface NNMKProtoAttachmentSync : PBCodable <NSCopying> {
    NSData * _attachmentData;
    NSString * _contentId;
    NSData * _dateSynced;
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    }  _has;
    NSString * _mailboxId;
    NSString * _messageId;
}

@property (nonatomic, retain) NSData *attachmentData;
@property (nonatomic, retain) NSString *contentId;
@property (nonatomic, retain) NSData *dateSynced;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) bool hasAttachmentData;
@property (nonatomic, readonly) bool hasContentId;
@property (nonatomic, readonly) bool hasDateSynced;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, readonly) bool hasMailboxId;
@property (nonatomic, readonly) bool hasMessageId;
@property (nonatomic, retain) NSString *mailboxId;
@property (nonatomic, retain) NSString *messageId;

- (void).cxx_destruct;
- (id)attachmentData;
- (id)contentId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasAttachmentData;
- (bool)hasContentId;
- (bool)hasDateSynced;
- (bool)hasFullSyncVersion;
- (bool)hasMailboxId;
- (bool)hasMessageId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxId;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (bool)readFrom:(id)arg1;
- (void)setAttachmentData:(id)arg1;
- (void)setContentId:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
