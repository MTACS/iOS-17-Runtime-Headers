
@interface RRSchemaRRClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    RRSchemaRREntityPoolResolveContext * _entityPoolResolveContext;
    RRSchemaRREntityPoolReturned * _entityPoolReturned;
    RRSchemaRRClientEventMetadata * _eventMetadata;
    bool  _hasEntityPoolResolveContext;
    bool  _hasEntityPoolReturned;
    bool  _hasEventMetadata;
    bool  _hasPullerContext;
    bool  _hasRrUsoGraphTier1;
    RRSchemaRRPullerContext * _pullerContext;
    RRSchemaRRUsoGraphTier1 * _rrUsoGraphTier1;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) RRSchemaRREntityPoolResolveContext *entityPoolResolveContext;
@property (nonatomic, retain) RRSchemaRREntityPoolReturned *entityPoolReturned;
@property (nonatomic, retain) RRSchemaRRClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEntityPoolResolveContext;
@property (nonatomic) bool hasEntityPoolReturned;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasPullerContext;
@property (nonatomic) bool hasRrUsoGraphTier1;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) RRSchemaRRPullerContext *pullerContext;
@property (nonatomic, retain) RRSchemaRRUsoGraphTier1 *rrUsoGraphTier1;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteEntityPoolResolveContext;
- (void)deleteEntityPoolReturned;
- (void)deleteEventMetadata;
- (void)deletePullerContext;
- (void)deleteRrUsoGraphTier1;
- (id)dictionaryRepresentation;
- (id)entityPoolResolveContext;
- (id)entityPoolReturned;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasEntityPoolResolveContext;
- (bool)hasEntityPoolReturned;
- (bool)hasEventMetadata;
- (bool)hasPullerContext;
- (bool)hasRrUsoGraphTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pullerContext;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)rrUsoGraphTier1;
- (void)setEntityPoolResolveContext:(id)arg1;
- (void)setEntityPoolReturned:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setHasEntityPoolResolveContext:(bool)arg1;
- (void)setHasEntityPoolReturned:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasPullerContext:(bool)arg1;
- (void)setHasRrUsoGraphTier1:(bool)arg1;
- (void)setPullerContext:(id)arg1;
- (void)setRrUsoGraphTier1:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
