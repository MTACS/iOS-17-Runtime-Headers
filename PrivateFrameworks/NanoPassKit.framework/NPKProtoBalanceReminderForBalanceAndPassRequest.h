
@interface NPKProtoBalanceReminderForBalanceAndPassRequest : PBRequest <NSCopying> {
    NSData * _balanceBytes;
    NSString * _uniqueID;
}

@property (nonatomic, retain) NSData *balanceBytes;
@property (nonatomic, readonly) bool hasBalanceBytes;
@property (nonatomic, readonly) bool hasUniqueID;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (id)balanceBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBalanceBytes;
- (bool)hasUniqueID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBalanceBytes:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
