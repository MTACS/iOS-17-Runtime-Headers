
@interface SISchemaCommonEventMetadata : SISchemaInstrumentationMessage {
    long long  _emitTimestamp;
    SISchemaUUID * _eventId;
    struct { 
        unsigned int emitTimestamp : 1; 
    }  _has;
    bool  _hasEventId;
    bool  _hasTestFingerprint;
    bool  _hasTimestamp;
    SISchemaUUID * _testFingerprint;
    SISchemaLogicalTimestamp * _timestamp;
}

@property (nonatomic) long long emitTimestamp;
@property (nonatomic, retain) SISchemaUUID *eventId;
@property (nonatomic) bool hasEmitTimestamp;
@property (nonatomic) bool hasEventId;
@property (nonatomic) bool hasTestFingerprint;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *testFingerprint;
@property (nonatomic, retain) SISchemaLogicalTimestamp *timestamp;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEmitTimestamp;
- (void)deleteEventId;
- (void)deleteTestFingerprint;
- (void)deleteTimestamp;
- (id)dictionaryRepresentation;
- (long long)emitTimestamp;
- (id)eventId;
- (bool)hasEmitTimestamp;
- (bool)hasEventId;
- (bool)hasTestFingerprint;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEmitTimestamp:(long long)arg1;
- (void)setEventId:(id)arg1;
- (void)setHasEmitTimestamp:(bool)arg1;
- (void)setHasEventId:(bool)arg1;
- (void)setHasTestFingerprint:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTestFingerprint:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)testFingerprint;
- (id)timestamp;
- (void)writeTo:(id)arg1;

@end
