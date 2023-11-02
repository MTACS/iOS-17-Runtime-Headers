
@interface NETSchemaNETDebugSessionConnectionNetwork : SISchemaInstrumentationMessage {
    unsigned int  _connectedSubflowCount;
    struct { 
        unsigned int wiFiPhyMode : 1; 
        unsigned int signalStrengthBars : 1; 
        unsigned int openTimeInMs : 1; 
        unsigned int connectedSubflowCount : 1; 
    }  _has;
    double  _openTimeInMs;
    double  _signalStrengthBars;
    int  _wiFiPhyMode;
}

@property (nonatomic) unsigned int connectedSubflowCount;
@property (nonatomic) bool hasConnectedSubflowCount;
@property (nonatomic) bool hasOpenTimeInMs;
@property (nonatomic) bool hasSignalStrengthBars;
@property (nonatomic) bool hasWiFiPhyMode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double openTimeInMs;
@property (nonatomic) double signalStrengthBars;
@property (nonatomic) int wiFiPhyMode;

- (unsigned int)connectedSubflowCount;
- (void)deleteConnectedSubflowCount;
- (void)deleteOpenTimeInMs;
- (void)deleteSignalStrengthBars;
- (void)deleteWiFiPhyMode;
- (id)dictionaryRepresentation;
- (bool)hasConnectedSubflowCount;
- (bool)hasOpenTimeInMs;
- (bool)hasSignalStrengthBars;
- (bool)hasWiFiPhyMode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)openTimeInMs;
- (bool)readFrom:(id)arg1;
- (void)setConnectedSubflowCount:(unsigned int)arg1;
- (void)setHasConnectedSubflowCount:(bool)arg1;
- (void)setHasOpenTimeInMs:(bool)arg1;
- (void)setHasSignalStrengthBars:(bool)arg1;
- (void)setHasWiFiPhyMode:(bool)arg1;
- (void)setOpenTimeInMs:(double)arg1;
- (void)setSignalStrengthBars:(double)arg1;
- (void)setWiFiPhyMode:(int)arg1;
- (double)signalStrengthBars;
- (id)suppressMessageUnderConditions;
- (int)wiFiPhyMode;
- (void)writeTo:(id)arg1;

@end
