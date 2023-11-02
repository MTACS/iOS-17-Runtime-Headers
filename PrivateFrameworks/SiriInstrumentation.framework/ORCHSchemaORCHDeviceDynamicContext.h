
@interface ORCHSchemaORCHDeviceDynamicContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int thermalState : 1; 
        unsigned int motionActivity : 1; 
        unsigned int timeSinceAssistantDaemonStartedInMs : 1; 
    }  _has;
    int  _motionActivity;
    int  _thermalState;
    unsigned long long  _timeSinceAssistantDaemonStartedInMs;
}

@property (nonatomic) bool hasMotionActivity;
@property (nonatomic) bool hasThermalState;
@property (nonatomic) bool hasTimeSinceAssistantDaemonStartedInMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int motionActivity;
@property (nonatomic) int thermalState;
@property (nonatomic) unsigned long long timeSinceAssistantDaemonStartedInMs;

- (void)deleteMotionActivity;
- (void)deleteThermalState;
- (void)deleteTimeSinceAssistantDaemonStartedInMs;
- (id)dictionaryRepresentation;
- (bool)hasMotionActivity;
- (bool)hasThermalState;
- (bool)hasTimeSinceAssistantDaemonStartedInMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)motionActivity;
- (bool)readFrom:(id)arg1;
- (void)setHasMotionActivity:(bool)arg1;
- (void)setHasThermalState:(bool)arg1;
- (void)setHasTimeSinceAssistantDaemonStartedInMs:(bool)arg1;
- (void)setMotionActivity:(int)arg1;
- (void)setThermalState:(int)arg1;
- (void)setTimeSinceAssistantDaemonStartedInMs:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (int)thermalState;
- (unsigned long long)timeSinceAssistantDaemonStartedInMs;
- (void)writeTo:(id)arg1;

@end
