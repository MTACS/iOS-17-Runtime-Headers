
@interface LTSchemaLocaleConfidence : SISchemaInstrumentationMessage {
    unsigned int  _confidence;
    struct { 
        unsigned int confidence : 1; 
    }  _has;
    bool  _hasLocale;
    NSString * _locale;
}

@property (nonatomic) unsigned int confidence;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *locale;

- (void).cxx_destruct;
- (unsigned int)confidence;
- (void)deleteConfidence;
- (void)deleteLocale;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)locale;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(unsigned int)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasLocale:(bool)arg1;
- (void)setLocale:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
