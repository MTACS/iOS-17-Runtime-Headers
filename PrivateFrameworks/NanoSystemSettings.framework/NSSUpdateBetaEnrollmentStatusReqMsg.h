
@interface NSSUpdateBetaEnrollmentStatusReqMsg : PBCodable <NSCopying> {
    NSData * _betaProgramInfo;
    struct { 
        unsigned int unenroll : 1; 
    }  _has;
    bool  _unenroll;
}

@property (nonatomic, retain) NSData *betaProgramInfo;
@property (nonatomic, readonly) bool hasBetaProgramInfo;
@property (nonatomic) bool hasUnenroll;
@property (nonatomic) bool unenroll;

- (void).cxx_destruct;
- (id)betaProgramInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBetaProgramInfo;
- (bool)hasUnenroll;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBetaProgramInfo:(id)arg1;
- (void)setHasUnenroll:(bool)arg1;
- (void)setUnenroll:(bool)arg1;
- (bool)unenroll;
- (void)writeTo:(id)arg1;

@end
