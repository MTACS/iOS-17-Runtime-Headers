
@interface LCServiceCategoryConfiguration : SISchemaInstrumentationMessage {
    LCServiceBlacklistedFields * _blacklist;
    LCServiceLoggingParameters * _categoryParameters;
    int  _eventType;
    struct { 
        unsigned int eventType : 1; 
    }  _has;
    bool  _hasBlacklist;
    bool  _hasCategoryParameters;
}

@property (nonatomic, retain) LCServiceBlacklistedFields *blacklist;
@property (nonatomic, retain) LCServiceLoggingParameters *categoryParameters;
@property (nonatomic) int eventType;
@property (nonatomic) bool hasBlacklist;
@property (nonatomic) bool hasCategoryParameters;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)blacklist;
- (id)categoryParameters;
- (void)deleteBlacklist;
- (void)deleteCategoryParameters;
- (void)deleteEventType;
- (id)dictionaryRepresentation;
- (int)eventType;
- (bool)hasBlacklist;
- (bool)hasCategoryParameters;
- (bool)hasEventType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBlacklist:(id)arg1;
- (void)setCategoryParameters:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasBlacklist:(bool)arg1;
- (void)setHasCategoryParameters:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
