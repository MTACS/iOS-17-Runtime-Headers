
@interface SGM2BirthdayExtractionWithSupervision : PBCodable <NSCopying> {
    bool  _dateIsCorrect;
    bool  _didRegexTrigger;
    bool  _didResponseKitTrigger;
    struct { 
        unsigned int modelVersion : 1; 
        unsigned int offset : 1; 
        unsigned int dateIsCorrect : 1; 
        unsigned int didRegexTrigger : 1; 
        unsigned int didResponseKitTrigger : 1; 
        unsigned int isFromCongratulation : 1; 
    }  _has;
    bool  _isFromCongratulation;
    unsigned int  _modelVersion;
    int  _offset;
}

@property (nonatomic) bool dateIsCorrect;
@property (nonatomic) bool didRegexTrigger;
@property (nonatomic) bool didResponseKitTrigger;
@property (nonatomic) bool hasDateIsCorrect;
@property (nonatomic) bool hasDidRegexTrigger;
@property (nonatomic) bool hasDidResponseKitTrigger;
@property (nonatomic) bool hasIsFromCongratulation;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasOffset;
@property (nonatomic) bool isFromCongratulation;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic) int offset;

- (int)StringAsOffset:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dateIsCorrect;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didRegexTrigger;
- (bool)didResponseKitTrigger;
- (bool)hasDateIsCorrect;
- (bool)hasDidRegexTrigger;
- (bool)hasDidResponseKitTrigger;
- (bool)hasIsFromCongratulation;
- (bool)hasModelVersion;
- (bool)hasOffset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFromCongratulation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)modelVersion;
- (int)offset;
- (id)offsetAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDateIsCorrect:(bool)arg1;
- (void)setDidRegexTrigger:(bool)arg1;
- (void)setDidResponseKitTrigger:(bool)arg1;
- (void)setHasDateIsCorrect:(bool)arg1;
- (void)setHasDidRegexTrigger:(bool)arg1;
- (void)setHasDidResponseKitTrigger:(bool)arg1;
- (void)setHasIsFromCongratulation:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasOffset:(bool)arg1;
- (void)setIsFromCongratulation:(bool)arg1;
- (void)setModelVersion:(unsigned int)arg1;
- (void)setOffset:(int)arg1;
- (void)writeTo:(id)arg1;

@end
