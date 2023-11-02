
@interface SISchemaTRPRequestLink : SISchemaTopLevelUnionType {
    struct { 
        unsigned int source : 1; 
    }  _has;
    bool  _hasRequestId;
    bool  _hasTrpId;
    SISchemaUUID * _requestId;
    int  _source;
    SISchemaUUID * _trpId;
}

@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasSource;
@property (nonatomic) bool hasTrpId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic) int source;
@property (nonatomic, retain) SISchemaUUID *trpId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteRequestId;
- (void)deleteSource;
- (void)deleteTrpId;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasRequestId;
- (bool)hasSource;
- (bool)hasTrpId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setTrpId:(id)arg1;
- (int)source;
- (id)suppressMessageUnderConditions;
- (id)trpId;
- (void)writeTo:(id)arg1;

@end
