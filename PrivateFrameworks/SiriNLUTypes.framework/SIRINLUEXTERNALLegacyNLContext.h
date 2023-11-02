
@interface SIRINLUEXTERNALLegacyNLContext : PBCodable <NSCopying> {
    bool  _dictationPrompt;
    struct { 
        unsigned int legacyContextSource : 1; 
        unsigned int dictationPrompt : 1; 
        unsigned int listenAfterSpeaking : 1; 
        unsigned int strictPrompt : 1; 
    }  _has;
    int  _legacyContextSource;
    bool  _listenAfterSpeaking;
    NSString * _previousDomainName;
    NSMutableArray * _renderedTexts;
    bool  _strictPrompt;
}

@property (nonatomic) bool dictationPrompt;
@property (nonatomic) bool hasDictationPrompt;
@property (nonatomic) bool hasLegacyContextSource;
@property (nonatomic) bool hasListenAfterSpeaking;
@property (nonatomic, readonly) bool hasPreviousDomainName;
@property (nonatomic) bool hasStrictPrompt;
@property (nonatomic) int legacyContextSource;
@property (nonatomic) bool listenAfterSpeaking;
@property (nonatomic, retain) NSString *previousDomainName;
@property (nonatomic, retain) NSMutableArray *renderedTexts;
@property (nonatomic) bool strictPrompt;

+ (Class)renderedTextsType;

- (void).cxx_destruct;
- (int)StringAsLegacyContextSource:(id)arg1;
- (void)addRenderedTexts:(id)arg1;
- (void)clearRenderedTexts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)dictationPrompt;
- (id)dictionaryRepresentation;
- (bool)hasDictationPrompt;
- (bool)hasLegacyContextSource;
- (bool)hasListenAfterSpeaking;
- (bool)hasPreviousDomainName;
- (bool)hasStrictPrompt;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)legacyContextSource;
- (id)legacyContextSourceAsString:(int)arg1;
- (bool)listenAfterSpeaking;
- (void)mergeFrom:(id)arg1;
- (id)previousDomainName;
- (bool)readFrom:(id)arg1;
- (id)renderedTexts;
- (id)renderedTextsAtIndex:(unsigned long long)arg1;
- (unsigned long long)renderedTextsCount;
- (void)setDictationPrompt:(bool)arg1;
- (void)setHasDictationPrompt:(bool)arg1;
- (void)setHasLegacyContextSource:(bool)arg1;
- (void)setHasListenAfterSpeaking:(bool)arg1;
- (void)setHasStrictPrompt:(bool)arg1;
- (void)setLegacyContextSource:(int)arg1;
- (void)setListenAfterSpeaking:(bool)arg1;
- (void)setPreviousDomainName:(id)arg1;
- (void)setRenderedTexts:(id)arg1;
- (void)setStrictPrompt:(bool)arg1;
- (bool)strictPrompt;
- (void)writeTo:(id)arg1;

@end
