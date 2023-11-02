
@interface PEGASUSSchemaPEGASUSIntent : SISchemaInstrumentationMessage {
    float  _confidence;
    struct { 
        unsigned int intentCategory : 1; 
        unsigned int source : 1; 
        unsigned int confidence : 1; 
    }  _has;
    bool  _hasLinkId;
    bool  _hasName;
    int  _intentCategory;
    SISchemaUUID * _linkId;
    NSString * _name;
    int  _source;
}

@property (nonatomic) float confidence;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasIntentCategory;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasSource;
@property (nonatomic) int intentCategory;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int source;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (float)confidence;
- (void)deleteConfidence;
- (void)deleteIntentCategory;
- (void)deleteLinkId;
- (void)deleteName;
- (void)deleteSource;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasIntentCategory;
- (bool)hasLinkId;
- (bool)hasName;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)intentCategory;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasIntentCategory:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasName:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setIntentCategory:(int)arg1;
- (void)setLinkId:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
