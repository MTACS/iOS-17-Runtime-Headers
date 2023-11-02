
@interface NNMKProtoErrorDownloadingContentForMessageWarning : PBCodable <NSCopying> {
    NSString * _mailboxId;
    NSString * _messageId;
}

@property (nonatomic, readonly) bool hasMailboxId;
@property (nonatomic, readonly) bool hasMessageId;
@property (nonatomic, retain) NSString *mailboxId;
@property (nonatomic, retain) NSString *messageId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMailboxId;
- (bool)hasMessageId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxId;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (bool)readFrom:(id)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
