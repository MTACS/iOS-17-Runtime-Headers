
@interface SISchemaAdaptiveVolumeUserPreferences : SISchemaInstrumentationMessage {
    struct { 
        unsigned int mostRecentIntent : 1; 
        unsigned int isPermanentOffsetEnabled : 1; 
        unsigned int permanentOffsetFactor : 1; 
    }  _has;
    bool  _isPermanentOffsetEnabled;
    int  _mostRecentIntent;
    float  _permanentOffsetFactor;
}

@property (nonatomic) bool hasIsPermanentOffsetEnabled;
@property (nonatomic) bool hasMostRecentIntent;
@property (nonatomic) bool hasPermanentOffsetFactor;
@property (nonatomic) bool isPermanentOffsetEnabled;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int mostRecentIntent;
@property (nonatomic) float permanentOffsetFactor;

- (void)deleteIsPermanentOffsetEnabled;
- (void)deleteMostRecentIntent;
- (void)deletePermanentOffsetFactor;
- (id)dictionaryRepresentation;
- (bool)hasIsPermanentOffsetEnabled;
- (bool)hasMostRecentIntent;
- (bool)hasPermanentOffsetFactor;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPermanentOffsetEnabled;
- (id)jsonData;
- (int)mostRecentIntent;
- (float)permanentOffsetFactor;
- (bool)readFrom:(id)arg1;
- (void)setHasIsPermanentOffsetEnabled:(bool)arg1;
- (void)setHasMostRecentIntent:(bool)arg1;
- (void)setHasPermanentOffsetFactor:(bool)arg1;
- (void)setIsPermanentOffsetEnabled:(bool)arg1;
- (void)setMostRecentIntent:(int)arg1;
- (void)setPermanentOffsetFactor:(float)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
