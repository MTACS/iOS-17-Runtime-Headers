
@interface NNMKProtoAccountAuthenticationStatus : PBCodable <NSCopying> {
    NSMutableArray * _accountsStatus;
    struct { 
        unsigned int requestTime : 1; 
    }  _has;
    double  _requestTime;
}

@property (nonatomic, retain) NSMutableArray *accountsStatus;
@property (nonatomic) bool hasRequestTime;
@property (nonatomic) double requestTime;

+ (Class)accountsStatusType;

- (void).cxx_destruct;
- (id)accountsStatus;
- (id)accountsStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)accountsStatusCount;
- (void)addAccountsStatus:(id)arg1;
- (void)clearAccountsStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)requestTime;
- (void)setAccountsStatus:(id)arg1;
- (void)setHasRequestTime:(bool)arg1;
- (void)setRequestTime:(double)arg1;
- (void)writeTo:(id)arg1;

@end
