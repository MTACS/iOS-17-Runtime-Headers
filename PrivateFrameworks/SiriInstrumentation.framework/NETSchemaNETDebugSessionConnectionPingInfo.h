
@interface NETSchemaNETDebugSessionConnectionPingInfo : SISchemaInstrumentationMessage {
    struct { 
        unsigned int pingCount : 1; 
        unsigned int meanPingInMs : 1; 
        unsigned int unacknowledgedPingCount : 1; 
    }  _has;
    double  _meanPingInMs;
    unsigned int  _pingCount;
    unsigned int  _unacknowledgedPingCount;
}

@property (nonatomic) bool hasMeanPingInMs;
@property (nonatomic) bool hasPingCount;
@property (nonatomic) bool hasUnacknowledgedPingCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double meanPingInMs;
@property (nonatomic) unsigned int pingCount;
@property (nonatomic) unsigned int unacknowledgedPingCount;

- (void)deleteMeanPingInMs;
- (void)deletePingCount;
- (void)deleteUnacknowledgedPingCount;
- (id)dictionaryRepresentation;
- (bool)hasMeanPingInMs;
- (bool)hasPingCount;
- (bool)hasUnacknowledgedPingCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)meanPingInMs;
- (unsigned int)pingCount;
- (bool)readFrom:(id)arg1;
- (void)setHasMeanPingInMs:(bool)arg1;
- (void)setHasPingCount:(bool)arg1;
- (void)setHasUnacknowledgedPingCount:(bool)arg1;
- (void)setMeanPingInMs:(double)arg1;
- (void)setPingCount:(unsigned int)arg1;
- (void)setUnacknowledgedPingCount:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)unacknowledgedPingCount;
- (void)writeTo:(id)arg1;

@end
