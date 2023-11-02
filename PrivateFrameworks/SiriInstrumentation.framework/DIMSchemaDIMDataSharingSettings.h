
@interface DIMSchemaDIMDataSharingSettings : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isDiagnosticsAndUsageEnabled : 1; 
        unsigned int isAppAnalyticsEnabled : 1; 
    }  _has;
    bool  _isAppAnalyticsEnabled;
    bool  _isDiagnosticsAndUsageEnabled;
}

@property (nonatomic) bool hasIsAppAnalyticsEnabled;
@property (nonatomic) bool hasIsDiagnosticsAndUsageEnabled;
@property (nonatomic) bool isAppAnalyticsEnabled;
@property (nonatomic) bool isDiagnosticsAndUsageEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsAppAnalyticsEnabled;
- (void)deleteIsDiagnosticsAndUsageEnabled;
- (id)dictionaryRepresentation;
- (bool)hasIsAppAnalyticsEnabled;
- (bool)hasIsDiagnosticsAndUsageEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAppAnalyticsEnabled;
- (bool)isDiagnosticsAndUsageEnabled;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsAppAnalyticsEnabled:(bool)arg1;
- (void)setHasIsDiagnosticsAndUsageEnabled:(bool)arg1;
- (void)setIsAppAnalyticsEnabled:(bool)arg1;
- (void)setIsDiagnosticsAndUsageEnabled:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
