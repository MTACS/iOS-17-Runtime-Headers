
@interface POWSchemaProvisionalPOWClientEvent : SISchemaTopLevelUnionType {
    bool  _hasLink;
    bool  _hasUsage;
    SISchemaRequestLinkInfo * _link;
    POWSchemaProvisionalPOWUsage * _usage;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic) bool hasLink;
@property (nonatomic) bool hasUsage;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaRequestLinkInfo *link;
@property (nonatomic, retain) POWSchemaProvisionalPOWUsage *usage;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

- (void).cxx_destruct;
- (void)deleteLink;
- (void)deleteUsage;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)getVersion;
- (bool)hasLink;
- (bool)hasUsage;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isProvisional;
- (id)jsonData;
- (id)link;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setHasLink:(bool)arg1;
- (void)setHasUsage:(bool)arg1;
- (void)setLink:(id)arg1;
- (void)setUsage:(id)arg1;
- (id)usage;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end
