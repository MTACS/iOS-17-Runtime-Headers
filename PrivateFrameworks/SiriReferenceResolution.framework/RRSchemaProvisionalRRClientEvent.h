
@interface RRSchemaProvisionalRRClientEvent : SISchemaTopLevelUnionType {
    RRSchemaProvisionalRREntityPoolResolveContext * _entityPoolResolveContext;
    RRSchemaProvisionalRREntityPoolReturned * _entityPoolReturned;
    RRSchemaProvisionalRRClientEventMetadata * _eventMetadata;
    bool  _hasEntityPoolResolveContext;
    bool  _hasEntityPoolReturned;
    bool  _hasEventMetadata;
    bool  _hasPullerContext;
    bool  _hasRrUsoGraphTier1;
    RRSchemaProvisionalPullerContext * _pullerContext;
    RRSchemaProvisionalRRUsoGraphTier1 * _rrUsoGraphTier1;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) RRSchemaProvisionalRREntityPoolResolveContext *entityPoolResolveContext;
@property (nonatomic, retain) RRSchemaProvisionalRREntityPoolReturned *entityPoolReturned;
@property (nonatomic, retain) RRSchemaProvisionalRRClientEventMetadata *eventMetadata;
@property (nonatomic) bool hasEntityPoolResolveContext;
@property (nonatomic) bool hasEntityPoolReturned;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasPullerContext;
@property (nonatomic) bool hasRrUsoGraphTier1;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) RRSchemaProvisionalPullerContext *pullerContext;
@property (nonatomic, retain) RRSchemaProvisionalRRUsoGraphTier1 *rrUsoGraphTier1;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)entityPoolResolveContext;
- (id)entityPoolReturned;
- (id)eventMetadata;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)getVersion;
- (bool)hasEntityPoolResolveContext;
- (bool)hasEntityPoolReturned;
- (bool)hasEventMetadata;
- (bool)hasPullerContext;
- (bool)hasRrUsoGraphTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isProvisional;
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
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
