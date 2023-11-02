
@interface DIMSchemaDIMWatchDeviceAttributes : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isSatellitePaired : 1; 
        unsigned int watchArmOrientation : 1; 
    }  _has;
    bool  _isSatellitePaired;
    int  _watchArmOrientation;
}

@property (nonatomic) bool hasIsSatellitePaired;
@property (nonatomic) bool hasWatchArmOrientation;
@property (nonatomic) bool isSatellitePaired;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int watchArmOrientation;

- (void)deleteIsSatellitePaired;
- (void)deleteWatchArmOrientation;
- (id)dictionaryRepresentation;
- (bool)hasIsSatellitePaired;
- (bool)hasWatchArmOrientation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSatellitePaired;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsSatellitePaired:(bool)arg1;
- (void)setHasWatchArmOrientation:(bool)arg1;
- (void)setIsSatellitePaired:(bool)arg1;
- (void)setWatchArmOrientation:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)watchArmOrientation;
- (void)writeTo:(id)arg1;

@end
