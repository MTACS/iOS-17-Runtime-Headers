
@interface NETSchemaNETDebugSessionConnectionSnapshotCaptured : SISchemaInstrumentationMessage {
    struct { 
        unsigned int sequenceNumber : 1; 
    }  _has;
    bool  _hasNetwork;
    bool  _hasPingInfo;
    bool  _hasQuality;
    NETSchemaNETDebugSessionConnectionNetwork * _network;
    NSArray * _networkInterfaces;
    NETSchemaNETDebugSessionConnectionPingInfo * _pingInfo;
    NETSchemaNETDebugSessionConnectionQuality * _quality;
    unsigned int  _sequenceNumber;
}

@property (nonatomic) bool hasNetwork;
@property (nonatomic) bool hasPingInfo;
@property (nonatomic) bool hasQuality;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NETSchemaNETDebugSessionConnectionNetwork *network;
@property (nonatomic, copy) NSArray *networkInterfaces;
@property (nonatomic, retain) NETSchemaNETDebugSessionConnectionPingInfo *pingInfo;
@property (nonatomic, retain) NETSchemaNETDebugSessionConnectionQuality *quality;
@property (nonatomic) unsigned int sequenceNumber;

- (void).cxx_destruct;
- (void)addNetworkInterfaces:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearNetworkInterfaces;
- (void)deleteNetwork;
- (void)deleteNetworkInterfaces;
- (void)deletePingInfo;
- (void)deleteQuality;
- (void)deleteSequenceNumber;
- (id)dictionaryRepresentation;
- (bool)hasNetwork;
- (bool)hasPingInfo;
- (bool)hasQuality;
- (bool)hasSequenceNumber;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)network;
- (id)networkInterfaces;
- (id)networkInterfacesAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkInterfacesCount;
- (id)pingInfo;
- (id)quality;
- (bool)readFrom:(id)arg1;
- (unsigned int)sequenceNumber;
- (void)setHasNetwork:(bool)arg1;
- (void)setHasPingInfo:(bool)arg1;
- (void)setHasQuality:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setNetwork:(id)arg1;
- (void)setNetworkInterfaces:(id)arg1;
- (void)setPingInfo:(id)arg1;
- (void)setQuality:(id)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
