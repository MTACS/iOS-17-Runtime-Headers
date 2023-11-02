
@interface SISchemaSendWithoutConfirmation : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isEnabled : 1; 
        unsigned int isEnabledForHeadphones : 1; 
        unsigned int isEnabledForCarPlay : 1; 
    }  _has;
    bool  _isEnabled;
    bool  _isEnabledForCarPlay;
    bool  _isEnabledForHeadphones;
}

@property (nonatomic) bool hasIsEnabled;
@property (nonatomic) bool hasIsEnabledForCarPlay;
@property (nonatomic) bool hasIsEnabledForHeadphones;
@property (nonatomic) bool isEnabled;
@property (nonatomic) bool isEnabledForCarPlay;
@property (nonatomic) bool isEnabledForHeadphones;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsEnabled;
- (void)deleteIsEnabledForCarPlay;
- (void)deleteIsEnabledForHeadphones;
- (id)dictionaryRepresentation;
- (bool)hasIsEnabled;
- (bool)hasIsEnabledForCarPlay;
- (bool)hasIsEnabledForHeadphones;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEnabled;
- (bool)isEnabledForCarPlay;
- (bool)isEnabledForHeadphones;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsEnabled:(bool)arg1;
- (void)setHasIsEnabledForCarPlay:(bool)arg1;
- (void)setHasIsEnabledForHeadphones:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsEnabledForCarPlay:(bool)arg1;
- (void)setIsEnabledForHeadphones:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
