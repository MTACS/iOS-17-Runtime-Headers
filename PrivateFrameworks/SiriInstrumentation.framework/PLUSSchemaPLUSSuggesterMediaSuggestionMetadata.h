
@interface PLUSSchemaPLUSSuggesterMediaSuggestionMetadata : SISchemaInstrumentationMessage {
    int  _clientTreatment;
    struct { 
        unsigned int locality : 1; 
        unsigned int serverTreatment : 1; 
        unsigned int clientTreatment : 1; 
    }  _has;
    int  _locality;
    int  _serverTreatment;
}

@property (nonatomic) int clientTreatment;
@property (nonatomic) bool hasClientTreatment;
@property (nonatomic) bool hasLocality;
@property (nonatomic) bool hasServerTreatment;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int locality;
@property (nonatomic) int serverTreatment;

- (int)clientTreatment;
- (void)deleteClientTreatment;
- (void)deleteLocality;
- (void)deleteServerTreatment;
- (id)dictionaryRepresentation;
- (bool)hasClientTreatment;
- (bool)hasLocality;
- (bool)hasServerTreatment;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)locality;
- (bool)readFrom:(id)arg1;
- (int)serverTreatment;
- (void)setClientTreatment:(int)arg1;
- (void)setHasClientTreatment:(bool)arg1;
- (void)setHasLocality:(bool)arg1;
- (void)setHasServerTreatment:(bool)arg1;
- (void)setLocality:(int)arg1;
- (void)setServerTreatment:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
