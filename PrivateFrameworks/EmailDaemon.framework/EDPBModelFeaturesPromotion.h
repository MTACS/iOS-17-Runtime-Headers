
@interface EDPBModelFeaturesPromotion : PBCodable <NSCopying> {
    struct { 
        unsigned int headerKeyFilteredCount : 1; 
        unsigned int toCount : 1; 
        unsigned int unknownFeatureCount : 1; 
    }  _has;
    unsigned int  _headerKeyFilteredCount;
    NSString * _language;
    unsigned int  _toCount;
    unsigned int  _unknownFeatureCount;
}

@property (nonatomic) bool hasHeaderKeyFilteredCount;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic) bool hasToCount;
@property (nonatomic) bool hasUnknownFeatureCount;
@property (nonatomic) unsigned int headerKeyFilteredCount;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) unsigned int toCount;
@property (nonatomic) unsigned int unknownFeatureCount;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeaderKeyFilteredCount;
- (bool)hasLanguage;
- (bool)hasToCount;
- (bool)hasUnknownFeatureCount;
- (unsigned long long)hash;
- (unsigned int)headerKeyFilteredCount;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHeaderKeyFilteredCount:(bool)arg1;
- (void)setHasToCount:(bool)arg1;
- (void)setHasUnknownFeatureCount:(bool)arg1;
- (void)setHeaderKeyFilteredCount:(unsigned int)arg1;
- (void)setLanguage:(id)arg1;
- (void)setToCount:(unsigned int)arg1;
- (void)setUnknownFeatureCount:(unsigned int)arg1;
- (unsigned int)toCount;
- (unsigned int)unknownFeatureCount;
- (void)writeTo:(id)arg1;

@end
