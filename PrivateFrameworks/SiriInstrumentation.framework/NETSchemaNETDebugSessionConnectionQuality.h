
@interface NETSchemaNETDebugSessionConnectionQuality : SISchemaInstrumentationMessage {
    struct { 
        unsigned int symptomsCellularHistorical : 1; 
        unsigned int symptomsCellularInstant : 1; 
        unsigned int symptomsWiFiHistorical : 1; 
        unsigned int symptomsWiFiInstant : 1; 
    }  _has;
    int  _symptomsCellularHistorical;
    int  _symptomsCellularInstant;
    int  _symptomsWiFiHistorical;
    int  _symptomsWiFiInstant;
}

@property (nonatomic) bool hasSymptomsCellularHistorical;
@property (nonatomic) bool hasSymptomsCellularInstant;
@property (nonatomic) bool hasSymptomsWiFiHistorical;
@property (nonatomic) bool hasSymptomsWiFiInstant;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int symptomsCellularHistorical;
@property (nonatomic) int symptomsCellularInstant;
@property (nonatomic) int symptomsWiFiHistorical;
@property (nonatomic) int symptomsWiFiInstant;

- (void)deleteSymptomsCellularHistorical;
- (void)deleteSymptomsCellularInstant;
- (void)deleteSymptomsWiFiHistorical;
- (void)deleteSymptomsWiFiInstant;
- (id)dictionaryRepresentation;
- (bool)hasSymptomsCellularHistorical;
- (bool)hasSymptomsCellularInstant;
- (bool)hasSymptomsWiFiHistorical;
- (bool)hasSymptomsWiFiInstant;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSymptomsCellularHistorical:(bool)arg1;
- (void)setHasSymptomsCellularInstant:(bool)arg1;
- (void)setHasSymptomsWiFiHistorical:(bool)arg1;
- (void)setHasSymptomsWiFiInstant:(bool)arg1;
- (void)setSymptomsCellularHistorical:(int)arg1;
- (void)setSymptomsCellularInstant:(int)arg1;
- (void)setSymptomsWiFiHistorical:(int)arg1;
- (void)setSymptomsWiFiInstant:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)symptomsCellularHistorical;
- (int)symptomsCellularInstant;
- (int)symptomsWiFiHistorical;
- (int)symptomsWiFiInstant;
- (void)writeTo:(id)arg1;

@end
