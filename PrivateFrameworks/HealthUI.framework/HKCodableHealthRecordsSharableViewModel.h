
@interface HKCodableHealthRecordsSharableViewModel : PBCodable <NSCopying> {
    NSMutableArray * _allRecords;
    long long  _category;
    NSString * _conceptIdentifier;
    HKCodableHealthRecordsEduContent * _eduContent;
    struct APPLE_HKCodableHealthRecordsSharableViewModel_1 { 
        unsigned int category : 1; 
        unsigned int latestSupportedVersion : 1; 
        unsigned int minimumSupportedVersion : 1; 
        unsigned int isPinned : 1; 
    }  _has;
    bool  _isPinned;
    HKCodableHealthRecordsIndividualRecord * _latestRecord;
    long long  _latestSupportedVersion;
    HKCodableHealthRecordsLocalizedEducationContent * _localizedEducationContent;
    long long  _minimumSupportedVersion;
    NSString * _preferredName;
}

@property (nonatomic, retain) NSMutableArray *allRecords;
@property (nonatomic) long long category;
@property (nonatomic, retain) NSString *conceptIdentifier;
@property (nonatomic, retain) HKCodableHealthRecordsEduContent *eduContent;
@property (nonatomic) bool hasCategory;
@property (nonatomic, readonly) bool hasConceptIdentifier;
@property (nonatomic, readonly) bool hasEduContent;
@property (nonatomic) bool hasIsPinned;
@property (nonatomic, readonly) bool hasLatestRecord;
@property (nonatomic) bool hasLatestSupportedVersion;
@property (nonatomic, readonly) bool hasLocalizedEducationContent;
@property (nonatomic) bool hasMinimumSupportedVersion;
@property (nonatomic, readonly) bool hasPreferredName;
@property (nonatomic) bool isPinned;
@property (nonatomic, retain) HKCodableHealthRecordsIndividualRecord *latestRecord;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic, retain) HKCodableHealthRecordsLocalizedEducationContent *localizedEducationContent;
@property (nonatomic) long long minimumSupportedVersion;
@property (nonatomic, retain) NSString *preferredName;

+ (Class)allRecordsType;

- (void).cxx_destruct;
- (void)addAllRecords:(id)arg1;
- (id)allRecords;
- (id)allRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allRecordsCount;
- (long long)category;
- (void)clearAllRecords;
- (id)conceptIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eduContent;
- (bool)hasCategory;
- (bool)hasConceptIdentifier;
- (bool)hasEduContent;
- (bool)hasIsPinned;
- (bool)hasLatestRecord;
- (bool)hasLatestSupportedVersion;
- (bool)hasLocalizedEducationContent;
- (bool)hasMinimumSupportedVersion;
- (bool)hasPreferredName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPinned;
- (id)latestRecord;
- (long long)latestSupportedVersion;
- (id)localizedEducationContent;
- (void)mergeFrom:(id)arg1;
- (long long)minimumSupportedVersion;
- (id)preferredName;
- (bool)readFrom:(id)arg1;
- (void)setAllRecords:(id)arg1;
- (void)setCategory:(long long)arg1;
- (void)setConceptIdentifier:(id)arg1;
- (void)setEduContent:(id)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)setHasIsPinned:(bool)arg1;
- (void)setHasLatestSupportedVersion:(bool)arg1;
- (void)setHasMinimumSupportedVersion:(bool)arg1;
- (void)setIsPinned:(bool)arg1;
- (void)setLatestRecord:(id)arg1;
- (void)setLatestSupportedVersion:(long long)arg1;
- (void)setLocalizedEducationContent:(id)arg1;
- (void)setMinimumSupportedVersion:(long long)arg1;
- (void)setPreferredName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
