
@interface NSSBetaEnrollmentStatusRespMsg : PBCodable <NSCopying> {
    NSData * _selectedBetaProgramInfo;
}

@property (nonatomic, readonly) bool hasSelectedBetaProgramInfo;
@property (nonatomic, retain) NSData *selectedBetaProgramInfo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSelectedBetaProgramInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)selectedBetaProgramInfo;
- (void)setSelectedBetaProgramInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
