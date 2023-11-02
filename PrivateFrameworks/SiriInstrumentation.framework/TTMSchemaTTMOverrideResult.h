
@interface TTMSchemaTTMOverrideResult : SISchemaInstrumentationMessage {
    struct { 
        unsigned int overrideType : 1; 
        unsigned int recommendation : 1; 
    }  _has;
    int  _overrideType;
    int  _recommendation;
}

@property (nonatomic) bool hasOverrideType;
@property (nonatomic) bool hasRecommendation;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int overrideType;
@property (nonatomic) int recommendation;

- (void)deleteOverrideType;
- (void)deleteRecommendation;
- (id)dictionaryRepresentation;
- (bool)hasOverrideType;
- (bool)hasRecommendation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)overrideType;
- (bool)readFrom:(id)arg1;
- (int)recommendation;
- (void)setHasOverrideType:(bool)arg1;
- (void)setHasRecommendation:(bool)arg1;
- (void)setOverrideType:(int)arg1;
- (void)setRecommendation:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
