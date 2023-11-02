
@interface NPKProtoPresentStandaloneTransactionRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int validUntilEpochTimeInterval : 1; 
        unsigned int transactionType : 1; 
    }  _has;
    unsigned int  _transactionType;
    double  _validUntilEpochTimeInterval;
    NSString * _watchPassUniqueID;
}

@property (nonatomic) bool hasTransactionType;
@property (nonatomic) bool hasValidUntilEpochTimeInterval;
@property (nonatomic, readonly) bool hasWatchPassUniqueID;
@property (nonatomic) unsigned int transactionType;
@property (nonatomic) double validUntilEpochTimeInterval;
@property (nonatomic, retain) NSString *watchPassUniqueID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTransactionType;
- (bool)hasValidUntilEpochTimeInterval;
- (bool)hasWatchPassUniqueID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTransactionType:(bool)arg1;
- (void)setHasValidUntilEpochTimeInterval:(bool)arg1;
- (void)setTransactionType:(unsigned int)arg1;
- (void)setValidUntilEpochTimeInterval:(double)arg1;
- (void)setWatchPassUniqueID:(id)arg1;
- (unsigned int)transactionType;
- (double)validUntilEpochTimeInterval;
- (id)watchPassUniqueID;
- (void)writeTo:(id)arg1;

@end
