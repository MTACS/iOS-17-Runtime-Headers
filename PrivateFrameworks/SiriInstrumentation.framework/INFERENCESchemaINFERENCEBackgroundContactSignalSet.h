
@interface INFERENCESchemaINFERENCEBackgroundContactSignalSet : SISchemaInstrumentationMessage {
    NSArray * _handlesWithBgPrivacySignals;
    struct { 
        unsigned int isMatchWithRelationName : 1; 
        unsigned int peopleSuggesterScoreSumForContact : 1; 
    }  _has;
    bool  _isMatchWithRelationName;
    float  _peopleSuggesterScoreSumForContact;
}

@property (nonatomic, copy) NSArray *handlesWithBgPrivacySignals;
@property (nonatomic) bool hasIsMatchWithRelationName;
@property (nonatomic) bool hasPeopleSuggesterScoreSumForContact;
@property (nonatomic) bool isMatchWithRelationName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float peopleSuggesterScoreSumForContact;

- (void).cxx_destruct;
- (void)addHandlesWithBgPrivacySignals:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearHandlesWithBgPrivacySignals;
- (void)deleteHandlesWithBgPrivacySignals;
- (void)deleteIsMatchWithRelationName;
- (void)deletePeopleSuggesterScoreSumForContact;
- (id)dictionaryRepresentation;
- (id)handlesWithBgPrivacySignals;
- (id)handlesWithBgPrivacySignalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)handlesWithBgPrivacySignalsCount;
- (bool)hasIsMatchWithRelationName;
- (bool)hasPeopleSuggesterScoreSumForContact;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMatchWithRelationName;
- (id)jsonData;
- (float)peopleSuggesterScoreSumForContact;
- (bool)readFrom:(id)arg1;
- (void)setHandlesWithBgPrivacySignals:(id)arg1;
- (void)setHasIsMatchWithRelationName:(bool)arg1;
- (void)setHasPeopleSuggesterScoreSumForContact:(bool)arg1;
- (void)setIsMatchWithRelationName:(bool)arg1;
- (void)setPeopleSuggesterScoreSumForContact:(float)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
