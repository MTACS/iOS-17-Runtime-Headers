
@interface HKCodableHealthRecordsLocalizedEducationContentSection : PBCodable <NSCopying> {
    struct APPLE_HKCodableHealthRecordsLocalizedEducationContentSection_1 { 
        unsigned int type : 1; 
    }  _has;
    NSMutableArray * _sectionAttributions;
    NSMutableArray * _sectionCitations;
    NSString * _sectionLocaleIdentifier;
    NSString * _sectionLocalizedContent;
    NSMutableArray * _sectionValidRegionCodes;
    long long  _type;
}

@property (nonatomic, readonly) bool hasSectionLocaleIdentifier;
@property (nonatomic, readonly) bool hasSectionLocalizedContent;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSMutableArray *sectionAttributions;
@property (nonatomic, retain) NSMutableArray *sectionCitations;
@property (nonatomic, retain) NSString *sectionLocaleIdentifier;
@property (nonatomic, retain) NSString *sectionLocalizedContent;
@property (nonatomic, retain) NSMutableArray *sectionValidRegionCodes;
@property (nonatomic) long long type;

+ (Class)sectionAttributionsType;
+ (Class)sectionCitationsType;
+ (Class)sectionValidRegionCodesType;

- (void).cxx_destruct;
- (void)addSectionAttributions:(id)arg1;
- (void)addSectionCitations:(id)arg1;
- (void)addSectionValidRegionCodes:(id)arg1;
- (void)clearSectionAttributions;
- (void)clearSectionCitations;
- (void)clearSectionValidRegionCodes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSectionLocaleIdentifier;
- (bool)hasSectionLocalizedContent;
- (bool)hasType;
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
- (id)sectionLocaleIdentifier;
- (id)sectionLocalizedContent;
- (id)sectionValidRegionCodes;
- (id)sectionValidRegionCodesAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionValidRegionCodesCount;
- (void)setHasType:(bool)arg1;
- (void)setSectionAttributions:(id)arg1;
- (void)setSectionCitations:(id)arg1;
- (void)setSectionLocaleIdentifier:(id)arg1;
- (void)setSectionLocalizedContent:(id)arg1;
- (void)setSectionValidRegionCodes:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
