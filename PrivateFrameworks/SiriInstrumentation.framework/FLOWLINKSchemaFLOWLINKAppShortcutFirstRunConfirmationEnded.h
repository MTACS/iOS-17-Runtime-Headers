
@interface FLOWLINKSchemaFLOWLINKAppShortcutFirstRunConfirmationEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isUserResponseAffirmative : 1; 
    }  _has;
    bool  _isUserResponseAffirmative;
}

@property (nonatomic) bool hasIsUserResponseAffirmative;
@property (nonatomic) bool isUserResponseAffirmative;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsUserResponseAffirmative;
- (id)dictionaryRepresentation;
- (bool)hasIsUserResponseAffirmative;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUserResponseAffirmative;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsUserResponseAffirmative:(bool)arg1;
- (void)setIsUserResponseAffirmative:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
