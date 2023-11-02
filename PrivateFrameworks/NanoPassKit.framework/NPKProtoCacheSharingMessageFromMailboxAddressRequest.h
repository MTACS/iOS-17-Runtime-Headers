
@interface NPKProtoCacheSharingMessageFromMailboxAddressRequest : PBRequest <NSCopying> {
    NSString * _mailboxAddress;
    NSData * _sharingMessageData;
}

@property (nonatomic, retain) NSString *mailboxAddress;
@property (nonatomic, retain) NSData *sharingMessageData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxAddress;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMailboxAddress:(id)arg1;
- (void)setSharingMessageData:(id)arg1;
- (id)sharingMessageData;
- (void)writeTo:(id)arg1;

@end
