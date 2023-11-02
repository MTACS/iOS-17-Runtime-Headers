
@interface NETSchemaNETSessionConnectionSnapshotCaptured : SISchemaInstrumentationMessage {
    struct { 
        unsigned int sequenceNumber : 1; 
        unsigned int snapshotTriggerReason : 1; 
        unsigned int provider : 1; 
    }  _has;
    bool  _hasNetwork;
    NETSchemaNETSessionConnectionNetwork * _network;
    NSArray * _networkInterfaces;
    int  _provider;
    unsigned int  _sequenceNumber;
    int  _snapshotTriggerReason;
}

@property (nonatomic) bool hasNetwork;
@property (nonatomic) bool hasProvider;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic) bool hasSnapshotTriggerReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NETSchemaNETSessionConnectionNetwork *network;
@property (nonatomic, copy) NSArray *networkInterfaces;
@property (nonatomic) int provider;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) int snapshotTriggerReason;

- (void).cxx_destruct;
- (void)addNetworkInterfaces:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearNetworkInterfaces;
- (void)deleteNetwork;
- (void)deleteNetworkInterfaces;
- (void)deleteProvider;
- (void)deleteSequenceNumber;
- (void)deleteSnapshotTriggerReason;
- (id)dictionaryRepresentation;
- (bool)hasNetwork;
- (bool)hasProvider;
- (bool)hasSequenceNumber;
- (bool)hasSnapshotTriggerReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)network;
- (id)networkInterfaces;
- (id)networkInterfacesAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkInterfacesCount;
- (int)provider;
- (bool)readFrom:(id)arg1;
- (unsigned int)sequenceNumber;
- (void)setHasNetwork:(bool)arg1;
- (void)setHasProvider:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSnapshotTriggerReason:(bool)arg1;
- (void)setNetwork:(id)arg1;
- (void)setNetworkInterfaces:(id)arg1;
- (void)setProvider:(int)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setSnapshotTriggerReason:(int)arg1;
- (int)snapshotTriggerReason;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
