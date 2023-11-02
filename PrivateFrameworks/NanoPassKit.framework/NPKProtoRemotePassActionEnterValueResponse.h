
@interface NPKProtoRemotePassActionEnterValueResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int incrementAmount : 1; 
    }  _has;
    long long  _incrementAmount;
    NSString * _incrementCurrency;
    NSString * _requestUniqueID;
    int  _result;
}

@property (nonatomic) bool hasIncrementAmount;
@property (nonatomic, readonly) bool hasIncrementCurrency;
@property (nonatomic) long long incrementAmount;
@property (nonatomic, retain) NSString *incrementCurrency;
@property (nonatomic, retain) NSString *requestUniqueID;
@property (nonatomic) int result;

- (void).cxx_destruct;
- (int)StringAsResult:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncrementAmount;
- (bool)hasIncrementCurrency;
- (unsigned long long)hash;
- (long long)incrementAmount;
- (id)incrementCurrency;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestUniqueID;
- (int)result;
- (id)resultAsString:(int)arg1;
- (void)setHasIncrementAmount:(bool)arg1;
- (void)setIncrementAmount:(long long)arg1;
- (void)setIncrementCurrency:(id)arg1;
- (void)setRequestUniqueID:(id)arg1;
- (void)setResult:(int)arg1;
- (void)writeTo:(id)arg1;

@end
