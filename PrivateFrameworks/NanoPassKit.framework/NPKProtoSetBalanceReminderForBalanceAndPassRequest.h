
@interface NPKProtoSetBalanceReminderForBalanceAndPassRequest : PBRequest <NSCopying> {
    NSData * _balanceBytes;
    NSData * _balanceReminderBytes;
    NSString * _uniqueID;
}

@property (nonatomic, retain) NSData *balanceBytes;
@property (nonatomic, retain) NSData *balanceReminderBytes;
@property (nonatomic, readonly) bool hasBalanceBytes;
@property (nonatomic, readonly) bool hasBalanceReminderBytes;
@property (nonatomic, readonly) bool hasUniqueID;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (id)balanceBytes;
- (id)balanceReminderBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBalanceBytes;
- (bool)hasBalanceReminderBytes;
- (bool)hasUniqueID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBalanceBytes:(id)arg1;
- (void)setBalanceReminderBytes:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
