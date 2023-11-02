
@interface NPKProtoCancelAutoTopUpRequest : PBRequest <NSCopying> {
    NSMutableArray * _balanceIdentifiers;
    NSString * _uniqueID;
}

@property (nonatomic, retain) NSMutableArray *balanceIdentifiers;
@property (nonatomic, readonly) bool hasUniqueID;
@property (nonatomic, retain) NSString *uniqueID;

+ (Class)balanceIdentifiersType;

- (void).cxx_destruct;
- (void)addBalanceIdentifiers:(id)arg1;
- (id)balanceIdentifiers;
- (id)balanceIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)balanceIdentifiersCount;
- (void)clearBalanceIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUniqueID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBalanceIdentifiers:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
