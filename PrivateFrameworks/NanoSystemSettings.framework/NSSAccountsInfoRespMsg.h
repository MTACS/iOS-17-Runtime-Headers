
@interface NSSAccountsInfoRespMsg : PBCodable <NSCopying> {
    NSMutableArray * _accounts;
    NSData * _watchAKDevice;
}

@property (nonatomic, retain) NSMutableArray *accounts;
@property (nonatomic, readonly) bool hasWatchAKDevice;
@property (nonatomic, retain) NSData *watchAKDevice;

+ (Class)accountType;

- (void).cxx_destruct;
- (id)accountAtIndex:(unsigned long long)arg1;
- (id)accounts;
- (unsigned long long)accountsCount;
- (void)addAccount:(id)arg1;
- (void)clearAccounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWatchAKDevice;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccounts:(id)arg1;
- (void)setWatchAKDevice:(id)arg1;
- (id)watchAKDevice;
- (void)writeTo:(id)arg1;

@end
