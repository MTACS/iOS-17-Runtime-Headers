
@interface NPKProtoHandleBalanceChangeRequest : PBRequest <NSCopying> {
    NSMutableArray * _balanceBytes;
    NSString * _passID;
}

@property (nonatomic, retain) NSMutableArray *balanceBytes;
@property (nonatomic, readonly) bool hasPassID;
@property (nonatomic, retain) NSString *passID;

+ (Class)balanceBytesType;

- (void).cxx_destruct;
- (void)addBalanceBytes:(id)arg1;
- (id)balanceBytes;
- (id)balanceBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)balanceBytesCount;
- (void)clearBalanceBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPassID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passID;
- (bool)readFrom:(id)arg1;
- (void)setBalanceBytes:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
