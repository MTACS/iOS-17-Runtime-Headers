
@interface COMAPPLEFELDSPARPROTOCOLScoredTagID : PBCodable <NSCopying> {
    float  _score;
    NSString * _tagId;
}

@property (nonatomic) float score;
@property (nonatomic, retain) NSString *tagId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (float)score;
- (void)setScore:(float)arg1;
- (void)setTagId:(id)arg1;
- (id)tagId;
- (void)writeTo:(id)arg1;

@end
