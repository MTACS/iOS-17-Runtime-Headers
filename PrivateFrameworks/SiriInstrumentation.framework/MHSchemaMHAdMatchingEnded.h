
@interface MHSchemaMHAdMatchingEnded : SISchemaInstrumentationMessage {
    int  _adBlockerDismissalType;
    int  _adBlockerSource;
    NSString * _adName;
    struct { 
        unsigned int adBlockerDismissalType : 1; 
        unsigned int shazamScore : 1; 
        unsigned int adBlockerSource : 1; 
    }  _has;
    bool  _hasAdName;
    float  _shazamScore;
}

@property (nonatomic) int adBlockerDismissalType;
@property (nonatomic) int adBlockerSource;
@property (nonatomic, copy) NSString *adName;
@property (nonatomic) bool hasAdBlockerDismissalType;
@property (nonatomic) bool hasAdBlockerSource;
@property (nonatomic) bool hasAdName;
@property (nonatomic) bool hasShazamScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float shazamScore;

- (void).cxx_destruct;
- (int)adBlockerDismissalType;
- (int)adBlockerSource;
- (id)adName;
- (void)deleteAdBlockerDismissalType;
- (void)deleteAdBlockerSource;
- (void)deleteAdName;
- (void)deleteShazamScore;
- (id)dictionaryRepresentation;
- (bool)hasAdBlockerDismissalType;
- (bool)hasAdBlockerSource;
- (bool)hasAdName;
- (bool)hasShazamScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAdBlockerDismissalType:(int)arg1;
- (void)setAdBlockerSource:(int)arg1;
- (void)setAdName:(id)arg1;
- (void)setHasAdBlockerDismissalType:(bool)arg1;
- (void)setHasAdBlockerSource:(bool)arg1;
- (void)setHasAdName:(bool)arg1;
- (void)setHasShazamScore:(bool)arg1;
- (void)setShazamScore:(float)arg1;
- (float)shazamScore;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
