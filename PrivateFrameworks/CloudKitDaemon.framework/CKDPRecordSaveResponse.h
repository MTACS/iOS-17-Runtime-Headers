
@interface CKDPRecordSaveResponse : PBCodable <NSCopying> {
    NSString * _etag;
    CKDPDate * _expirationTime;
    CKDPRecord * _serverFields;
    CKDPDateStatistics * _timeStatistics;
}

@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) CKDPDate *expirationTime;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasExpirationTime;
@property (nonatomic, readonly) bool hasServerFields;
@property (nonatomic, readonly) bool hasTimeStatistics;
@property (nonatomic, retain) CKDPRecord *serverFields;
@property (nonatomic, retain) CKDPDateStatistics *timeStatistics;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (id)expirationTime;
- (bool)hasEtag;
- (bool)hasExpirationTime;
- (bool)hasServerFields;
- (bool)hasTimeStatistics;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serverFields;
- (void)setEtag:(id)arg1;
- (void)setExpirationTime:(id)arg1;
- (void)setServerFields:(id)arg1;
- (void)setTimeStatistics:(id)arg1;
- (id)timeStatistics;
- (void)writeTo:(id)arg1;

@end
