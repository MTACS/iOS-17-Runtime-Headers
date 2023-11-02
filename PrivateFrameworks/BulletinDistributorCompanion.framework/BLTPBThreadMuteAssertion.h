
@interface BLTPBThreadMuteAssertion : PBCodable <NSCopying> {
    double  _expirationDate;
    NSString * _threadID;
}

@property (nonatomic) double expirationDate;
@property (nonatomic, retain) NSString *threadID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expirationDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExpirationDate:(double)arg1;
- (void)setThreadID:(id)arg1;
- (id)threadID;
- (void)writeTo:(id)arg1;

@end
