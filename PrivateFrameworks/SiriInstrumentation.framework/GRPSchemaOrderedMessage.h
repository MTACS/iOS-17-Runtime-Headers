
@interface GRPSchemaOrderedMessage : SISchemaInstrumentationMessage {
    struct { 
        unsigned int logicalEventTimestampInNs : 1; 
    }  _has;
    bool  _hasSiriEventTypeUnion;
    long long  _logicalEventTimestampInNs;
    GRPSchemaSiriEventTypeUnion * _siriEventTypeUnion;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic) bool hasLogicalEventTimestampInNs;
@property (nonatomic) bool hasSiriEventTypeUnion;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) long long logicalEventTimestampInNs;
@property (nonatomic, retain) GRPSchemaSiriEventTypeUnion *siriEventTypeUnion;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLogicalEventTimestampInNs;
- (void)deleteSiriEventTypeUnion;
- (id)dictionaryRepresentation;
- (bool)hasLogicalEventTimestampInNs;
- (bool)hasSiriEventTypeUnion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (long long)logicalEventTimestampInNs;
- (bool)readFrom:(id)arg1;
- (void)setHasLogicalEventTimestampInNs:(bool)arg1;
- (void)setHasSiriEventTypeUnion:(bool)arg1;
- (void)setLogicalEventTimestampInNs:(long long)arg1;
- (void)setSiriEventTypeUnion:(id)arg1;
- (id)siriEventTypeUnion;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
