
@interface ODMSiriSchemaODMSiriTurnRestatementScore : SISchemaInstrumentationMessage {
    SISchemaUUID * _currentTurnId;
    struct { 
        unsigned int isUserRequest : 1; 
        unsigned int utteranceRestatementScore : 1; 
        unsigned int phoneticRestatementScore : 1; 
    }  _has;
    bool  _hasCurrentTurnId;
    bool  _hasNextTurnId;
    bool  _isUserRequest;
    SISchemaUUID * _nextTurnId;
    double  _phoneticRestatementScore;
    double  _utteranceRestatementScore;
}

@property (nonatomic, retain) SISchemaUUID *currentTurnId;
@property (nonatomic) bool hasCurrentTurnId;
@property (nonatomic) bool hasIsUserRequest;
@property (nonatomic) bool hasNextTurnId;
@property (nonatomic) bool hasPhoneticRestatementScore;
@property (nonatomic) bool hasUtteranceRestatementScore;
@property (nonatomic) bool isUserRequest;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *nextTurnId;
@property (nonatomic) double phoneticRestatementScore;
@property (nonatomic) double utteranceRestatementScore;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)currentTurnId;
- (void)deleteCurrentTurnId;
- (void)deleteIsUserRequest;
- (void)deleteNextTurnId;
- (void)deletePhoneticRestatementScore;
- (void)deleteUtteranceRestatementScore;
- (id)dictionaryRepresentation;
- (bool)hasCurrentTurnId;
- (bool)hasIsUserRequest;
- (bool)hasNextTurnId;
- (bool)hasPhoneticRestatementScore;
- (bool)hasUtteranceRestatementScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUserRequest;
- (id)jsonData;
- (id)nextTurnId;
- (double)phoneticRestatementScore;
- (bool)readFrom:(id)arg1;
- (void)setCurrentTurnId:(id)arg1;
- (void)setHasCurrentTurnId:(bool)arg1;
- (void)setHasIsUserRequest:(bool)arg1;
- (void)setHasNextTurnId:(bool)arg1;
- (void)setHasPhoneticRestatementScore:(bool)arg1;
- (void)setHasUtteranceRestatementScore:(bool)arg1;
- (void)setIsUserRequest:(bool)arg1;
- (void)setNextTurnId:(id)arg1;
- (void)setPhoneticRestatementScore:(double)arg1;
- (void)setUtteranceRestatementScore:(double)arg1;
- (id)suppressMessageUnderConditions;
- (double)utteranceRestatementScore;
- (void)writeTo:(id)arg1;

@end
