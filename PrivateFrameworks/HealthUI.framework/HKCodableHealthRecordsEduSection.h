
@interface HKCodableHealthRecordsEduSection : PBCodable <NSCopying> {
    struct APPLE_HKCodableHealthRecordsEduSection_1 { 
        unsigned int sectionType : 1; 
    }  _has;
    NSMutableArray * _sectionAttributions;
    NSMutableArray * _sectionCitations;
    NSMutableArray * _sectionLocaleIdentifiers;
    NSString * _sectionLocalizedContent;
    long long  _sectionType;
    NSMutableArray * _sectionValidRegionCodes;
}

@property (nonatomic, readonly) bool hasSectionLocalizedContent;
@property (nonatomic) bool hasSectionType;
@property (nonatomic, retain) NSMutableArray *sectionAttributions;
@property (nonatomic, retain) NSMutableArray *sectionCitations;
@property (nonatomic, retain) NSMutableArray *sectionLocaleIdentifiers;
@property (nonatomic, retain) NSString *sectionLocalizedContent;
@property (nonatomic) long long sectionType;
@property (nonatomic, retain) NSMutableArray *sectionValidRegionCodes;

+ (Class)sectionAttributionsType;
+ (Class)sectionCitationsType;
+ (Class)sectionLocaleIdentifiersType;
+ (Class)sectionValidRegionCodesType;

- (void).cxx_destruct;
- (void)addSectionAttributions:(id)arg1;
- (void)addSectionCitations:(id)arg1;
- (void)addSectionLocaleIdentifiers:(id)arg1;
- (void)addSectionValidRegionCodes:(id)arg1;
- (void)clearSectionAttributions;
- (void)clearSectionCitations;
- (void)clearSectionLocaleIdentifiers;
- (void)clearSectionValidRegionCodes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSectionLocalizedContent;
- (bool)hasSectionType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionAttributions;
- (id)sectionAttributionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionAttributionsCount;
- (id)sectionCitations;
- (id)sectionCitationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionCitationsCount;
- (id)sectionLocaleIdentifiers;
- (id)sectionLocaleIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionLocaleIdentifiersCount;
- (id)sectionLocalizedContent;
- (long long)sectionType;
- (id)sectionValidRegionCodes;
- (id)sectionValidRegionCodesAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionValidRegionCodesCount;
- (void)setHasSectionType:(bool)arg1;
- (void)setSectionAttributions:(id)arg1;
- (void)setSectionCitations:(id)arg1;
- (void)setSectionLocaleIdentifiers:(id)arg1;
- (void)setSectionLocalizedContent:(id)arg1;
- (void)setSectionType:(long long)arg1;
- (void)setSectionValidRegionCodes:(id)arg1;
- (void)writeTo:(id)arg1;

@end
