
@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLTopicConversionStats : PBCodable <NSCopying> {
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * _conversionStats;
    NSString * _tagId;
}

@property (nonatomic, retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *conversionStats;
@property (nonatomic, readonly) bool hasConversionStats;
@property (nonatomic, readonly) bool hasTagId;
@property (nonatomic, retain) NSString *tagId;

- (void).cxx_destruct;
- (id)conversionStats;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConversionStats;
- (bool)hasTagId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConversionStats:(id)arg1;
- (void)setTagId:(id)arg1;
- (id)tagId;
- (void)writeTo:(id)arg1;

@end
