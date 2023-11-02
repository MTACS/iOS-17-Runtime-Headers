
@interface NTPBSectionSlotCostInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int headlineSlotCost : 1; 
        unsigned int sectionFooterSlotCost : 1; 
        unsigned int sectionTitleSlotCost : 1; 
    }  _has;
    double  _headlineSlotCost;
    double  _sectionFooterSlotCost;
    double  _sectionTitleSlotCost;
}

@property (nonatomic) bool hasHeadlineSlotCost;
@property (nonatomic) bool hasSectionFooterSlotCost;
@property (nonatomic) bool hasSectionTitleSlotCost;
@property (nonatomic) double headlineSlotCost;
@property (nonatomic) double sectionFooterSlotCost;
@property (nonatomic) double sectionTitleSlotCost;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeadlineSlotCost;
- (bool)hasSectionFooterSlotCost;
- (bool)hasSectionTitleSlotCost;
- (unsigned long long)hash;
- (double)headlineSlotCost;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)sectionFooterSlotCost;
- (double)sectionTitleSlotCost;
- (void)setHasHeadlineSlotCost:(bool)arg1;
- (void)setHasSectionFooterSlotCost:(bool)arg1;
- (void)setHasSectionTitleSlotCost:(bool)arg1;
- (void)setHeadlineSlotCost:(double)arg1;
- (void)setSectionFooterSlotCost:(double)arg1;
- (void)setSectionTitleSlotCost:(double)arg1;
- (void)writeTo:(id)arg1;

@end
