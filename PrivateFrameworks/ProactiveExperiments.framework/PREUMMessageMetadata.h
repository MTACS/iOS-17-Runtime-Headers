
@interface PREUMMessageMetadata : PBCodable <NSCopying> {
    int  _ageGroup;
    unsigned int  _charCount;
    struct { 
        unsigned int ageGroup : 1; 
        unsigned int charCount : 1; 
        unsigned int hasQuestionMark : 1; 
        unsigned int isApricotDevice : 1; 
    }  _has;
    bool  _hasQuestionMark;
    NSString * _hostProcess;
    bool  _isApricotDevice;
    NSString * _lang;
    NSString * _locale;
}

@property (nonatomic) int ageGroup;
@property (nonatomic) unsigned int charCount;
@property (nonatomic) bool hasAgeGroup;
@property (nonatomic) bool hasCharCount;
@property (nonatomic) bool hasHasQuestionMark;
@property (nonatomic, readonly) bool hasHostProcess;
@property (nonatomic) bool hasIsApricotDevice;
@property (nonatomic, readonly) bool hasLang;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic) bool hasQuestionMark;
@property (nonatomic, retain) NSString *hostProcess;
@property (nonatomic) bool isApricotDevice;
@property (nonatomic, retain) NSString *lang;
@property (nonatomic, retain) NSString *locale;

- (void).cxx_destruct;
- (int)StringAsAgeGroup:(id)arg1;
- (int)ageGroup;
- (id)ageGroupAsString:(int)arg1;
- (unsigned int)charCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAgeGroup;
- (bool)hasCharCount;
- (bool)hasHasQuestionMark;
- (bool)hasHostProcess;
- (bool)hasIsApricotDevice;
- (bool)hasLang;
- (bool)hasLocale;
- (bool)hasQuestionMark;
- (unsigned long long)hash;
- (id)hostProcess;
- (bool)isApricotDevice;
- (bool)isEqual:(id)arg1;
- (id)lang;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAgeGroup:(int)arg1;
- (void)setCharCount:(unsigned int)arg1;
- (void)setHasAgeGroup:(bool)arg1;
- (void)setHasCharCount:(bool)arg1;
- (void)setHasHasQuestionMark:(bool)arg1;
- (void)setHasIsApricotDevice:(bool)arg1;
- (void)setHasQuestionMark:(bool)arg1;
- (void)setHostProcess:(id)arg1;
- (void)setIsApricotDevice:(bool)arg1;
- (void)setLang:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)writeTo:(id)arg1;

@end
