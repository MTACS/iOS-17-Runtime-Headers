
@interface SISchemaClientTransportEventMetadata : SISchemaInstrumentationMessage {
    NSString * _arrivedServerPod;
    long long  _eventTransmittedRelativeToBootTimeTimestampNs;
    NSString * _eventTransmittedTimestampRefId;
    struct { 
        unsigned int eventTransmittedRelativeToBootTimeTimestampNs : 1; 
        unsigned int serverArrivedTimestampNs : 1; 
    }  _has;
    bool  _hasArrivedServerPod;
    bool  _hasEventTransmittedTimestampRefId;
    long long  _serverArrivedTimestampNs;
}

@property (nonatomic, copy) NSString *arrivedServerPod;
@property (nonatomic) long long eventTransmittedRelativeToBootTimeTimestampNs;
@property (nonatomic, copy) NSString *eventTransmittedTimestampRefId;
@property (nonatomic) bool hasArrivedServerPod;
@property (nonatomic) bool hasEventTransmittedRelativeToBootTimeTimestampNs;
@property (nonatomic) bool hasEventTransmittedTimestampRefId;
@property (nonatomic) bool hasServerArrivedTimestampNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) long long serverArrivedTimestampNs;

- (void).cxx_destruct;
- (id)arrivedServerPod;
- (void)deleteArrivedServerPod;
- (void)deleteEventTransmittedRelativeToBootTimeTimestampNs;
- (void)deleteEventTransmittedTimestampRefId;
- (void)deleteServerArrivedTimestampNs;
- (id)dictionaryRepresentation;
- (long long)eventTransmittedRelativeToBootTimeTimestampNs;
- (id)eventTransmittedTimestampRefId;
- (bool)hasArrivedServerPod;
- (bool)hasEventTransmittedRelativeToBootTimeTimestampNs;
- (bool)hasEventTransmittedTimestampRefId;
- (bool)hasServerArrivedTimestampNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (long long)serverArrivedTimestampNs;
- (void)setArrivedServerPod:(id)arg1;
- (void)setEventTransmittedRelativeToBootTimeTimestampNs:(long long)arg1;
- (void)setEventTransmittedTimestampRefId:(id)arg1;
- (void)setHasArrivedServerPod:(bool)arg1;
- (void)setHasEventTransmittedRelativeToBootTimeTimestampNs:(bool)arg1;
- (void)setHasEventTransmittedTimestampRefId:(bool)arg1;
- (void)setHasServerArrivedTimestampNs:(bool)arg1;
- (void)setServerArrivedTimestampNs:(long long)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
