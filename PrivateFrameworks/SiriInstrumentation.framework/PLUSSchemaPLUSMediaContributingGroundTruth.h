
@interface PLUSSchemaPLUSMediaContributingGroundTruth : SISchemaInstrumentationMessage {
    int  _entityFeedbackType;
    struct { 
        unsigned int source : 1; 
        unsigned int entityFeedbackType : 1; 
    }  _has;
    int  _source;
}

@property (nonatomic) int entityFeedbackType;
@property (nonatomic) bool hasEntityFeedbackType;
@property (nonatomic) bool hasSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int source;

- (void)deleteEntityFeedbackType;
- (void)deleteSource;
- (id)dictionaryRepresentation;
- (int)entityFeedbackType;
- (bool)hasEntityFeedbackType;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEntityFeedbackType:(int)arg1;
- (void)setHasEntityFeedbackType:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
