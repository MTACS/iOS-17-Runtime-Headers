
@interface SIRINLUINTERNALContextRule : PBCodable <NSCopying> {
    bool  _applyToPromptScenarios;
    struct { 
        unsigned int sdaComparisonMode : 1; 
        unsigned int applyToPromptScenarios : 1; 
    }  _has;
    NSMutableArray * _matchingSpans;
    int  _sdaComparisonMode;
    SIRINLUEXTERNALTurnContext * _turnContext;
}

@property (nonatomic) bool applyToPromptScenarios;
@property (nonatomic) bool hasApplyToPromptScenarios;
@property (nonatomic) bool hasSdaComparisonMode;
@property (nonatomic, readonly) bool hasTurnContext;
@property (nonatomic, retain) NSMutableArray *matchingSpans;
@property (nonatomic) int sdaComparisonMode;
@property (nonatomic, retain) SIRINLUEXTERNALTurnContext *turnContext;

+ (Class)matchingSpansType;

- (void).cxx_destruct;
- (int)StringAsSdaComparisonMode:(id)arg1;
- (void)addMatchingSpans:(id)arg1;
- (bool)applyToPromptScenarios;
- (void)clearMatchingSpans;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApplyToPromptScenarios;
- (bool)hasSdaComparisonMode;
- (bool)hasTurnContext;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)matchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchingSpansCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sdaComparisonMode;
- (id)sdaComparisonModeAsString:(int)arg1;
- (void)setApplyToPromptScenarios:(bool)arg1;
- (void)setHasApplyToPromptScenarios:(bool)arg1;
- (void)setHasSdaComparisonMode:(bool)arg1;
- (void)setMatchingSpans:(id)arg1;
- (void)setSdaComparisonMode:(int)arg1;
- (void)setTurnContext:(id)arg1;
- (id)turnContext;
- (void)writeTo:(id)arg1;

@end
