
@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLTopicCohortScore : PBCodable <NSCopying> {
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * _cohorts;
    NSString * _tagId;
}

@property (nonatomic, retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *cohorts;
@property (nonatomic, readonly) bool hasCohorts;
@property (nonatomic, readonly) bool hasTagId;
@property (nonatomic, retain) NSString *tagId;

- (void).cxx_destruct;
- (id)cohorts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCohorts;
- (bool)hasTagId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCohorts:(id)arg1;
- (void)setTagId:(id)arg1;
- (id)tagId;
- (void)writeTo:(id)arg1;

@end
