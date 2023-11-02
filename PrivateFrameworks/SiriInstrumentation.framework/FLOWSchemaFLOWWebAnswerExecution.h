
@interface FLOWSchemaFLOWWebAnswerExecution : SISchemaInstrumentationMessage {
    unsigned int  _allowListType;
    unsigned int  _answerClass;
    unsigned int  _answerType;
    unsigned int  _fuzzyMatchType;
    struct { 
        unsigned int answerType : 1; 
        unsigned int allowListType : 1; 
        unsigned int fuzzyMatchType : 1; 
        unsigned int subDomain : 1; 
        unsigned int quality : 1; 
        unsigned int answerClass : 1; 
    }  _has;
    unsigned int  _quality;
    unsigned int  _subDomain;
}

@property (nonatomic) unsigned int allowListType;
@property (nonatomic) unsigned int answerClass;
@property (nonatomic) unsigned int answerType;
@property (nonatomic) unsigned int fuzzyMatchType;
@property (nonatomic) bool hasAllowListType;
@property (nonatomic) bool hasAnswerClass;
@property (nonatomic) bool hasAnswerType;
@property (nonatomic) bool hasFuzzyMatchType;
@property (nonatomic) bool hasQuality;
@property (nonatomic) bool hasSubDomain;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int quality;
@property (nonatomic) unsigned int subDomain;

- (unsigned int)allowListType;
- (unsigned int)answerClass;
- (unsigned int)answerType;
- (void)deleteAllowListType;
- (void)deleteAnswerClass;
- (void)deleteAnswerType;
- (void)deleteFuzzyMatchType;
- (void)deleteQuality;
- (void)deleteSubDomain;
- (id)dictionaryRepresentation;
- (unsigned int)fuzzyMatchType;
- (bool)hasAllowListType;
- (bool)hasAnswerClass;
- (bool)hasAnswerType;
- (bool)hasFuzzyMatchType;
- (bool)hasQuality;
- (bool)hasSubDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)quality;
- (bool)readFrom:(id)arg1;
- (void)setAllowListType:(unsigned int)arg1;
- (void)setAnswerClass:(unsigned int)arg1;
- (void)setAnswerType:(unsigned int)arg1;
- (void)setFuzzyMatchType:(unsigned int)arg1;
- (void)setHasAllowListType:(bool)arg1;
- (void)setHasAnswerClass:(bool)arg1;
- (void)setHasAnswerType:(bool)arg1;
- (void)setHasFuzzyMatchType:(bool)arg1;
- (void)setHasQuality:(bool)arg1;
- (void)setHasSubDomain:(bool)arg1;
- (void)setQuality:(unsigned int)arg1;
- (void)setSubDomain:(unsigned int)arg1;
- (unsigned int)subDomain;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
