
@interface INFERENCESchemaINFERENCEContactQueryMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int hasName : 1; 
        unsigned int hasRelationship : 1; 
        unsigned int hasHandleLabel : 1; 
        unsigned int hasHandleValue : 1; 
        unsigned int hasMeReference : 1; 
        unsigned int hasContactId : 1; 
        unsigned int isEmergencyQuery : 1; 
    }  _has;
    bool  _hasContactId;
    bool  _hasHandleLabel;
    bool  _hasHandleValue;
    bool  _hasMeReference;
    bool  _hasName;
    bool  _hasRelationship;
    bool  _isEmergencyQuery;
}

@property (nonatomic) bool hasContactId;
@property (nonatomic) bool hasHandleLabel;
@property (nonatomic) bool hasHandleValue;
@property (nonatomic) bool hasHasContactId;
@property (nonatomic) bool hasHasHandleLabel;
@property (nonatomic) bool hasHasHandleValue;
@property (nonatomic) bool hasHasMeReference;
@property (nonatomic) bool hasHasName;
@property (nonatomic) bool hasHasRelationship;
@property (nonatomic) bool hasIsEmergencyQuery;
@property (nonatomic) bool hasMeReference;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasRelationship;
@property (nonatomic) bool isEmergencyQuery;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteHasContactId;
- (void)deleteHasHandleLabel;
- (void)deleteHasHandleValue;
- (void)deleteHasMeReference;
- (void)deleteHasName;
- (void)deleteHasRelationship;
- (void)deleteIsEmergencyQuery;
- (id)dictionaryRepresentation;
- (bool)hasContactId;
- (bool)hasHandleLabel;
- (bool)hasHandleValue;
- (bool)hasHasContactId;
- (bool)hasHasHandleLabel;
- (bool)hasHasHandleValue;
- (bool)hasHasMeReference;
- (bool)hasHasName;
- (bool)hasHasRelationship;
- (bool)hasIsEmergencyQuery;
- (bool)hasMeReference;
- (bool)hasName;
- (bool)hasRelationship;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEmergencyQuery;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasContactId:(bool)arg1;
- (void)setHasHandleLabel:(bool)arg1;
- (void)setHasHandleValue:(bool)arg1;
- (void)setHasHasContactId:(bool)arg1;
- (void)setHasHasHandleLabel:(bool)arg1;
- (void)setHasHasHandleValue:(bool)arg1;
- (void)setHasHasMeReference:(bool)arg1;
- (void)setHasHasName:(bool)arg1;
- (void)setHasHasRelationship:(bool)arg1;
- (void)setHasIsEmergencyQuery:(bool)arg1;
- (void)setHasMeReference:(bool)arg1;
- (void)setHasName:(bool)arg1;
- (void)setHasRelationship:(bool)arg1;
- (void)setIsEmergencyQuery:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
