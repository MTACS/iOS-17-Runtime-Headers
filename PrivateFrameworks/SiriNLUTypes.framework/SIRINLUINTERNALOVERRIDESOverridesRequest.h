
@interface SIRINLUINTERNALOVERRIDESOverridesRequest : PBRequest <NSCopying> {
    NSMutableArray * _inputs;
    NSMutableArray * _matchingSpans;
    NSMutableArray * _systemDialogActs;
    SIRINLUINTERNALTokenChain * _tokenChain;
    SIRINLUEXTERNALTurnContext * _turnContext;
    NSString * _utterance;
}

@property (nonatomic, readonly) bool hasTokenChain;
@property (nonatomic, readonly) bool hasTurnContext;
@property (nonatomic, readonly) bool hasUtterance;
@property (nonatomic, retain) NSMutableArray *inputs;
@property (nonatomic, retain) NSMutableArray *matchingSpans;
@property (nonatomic, retain) NSMutableArray *systemDialogActs;
@property (nonatomic, retain) SIRINLUINTERNALTokenChain *tokenChain;
@property (nonatomic, retain) SIRINLUEXTERNALTurnContext *turnContext;
@property (nonatomic, retain) NSString *utterance;

+ (Class)inputsType;
+ (Class)matchingSpansType;
+ (Class)systemDialogActsType;

- (void).cxx_destruct;
- (void)addInputs:(id)arg1;
- (void)addMatchingSpans:(id)arg1;
- (void)addSystemDialogActs:(id)arg1;
- (void)clearInputs;
- (void)clearMatchingSpans;
- (void)clearSystemDialogActs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTokenChain;
- (bool)hasTurnContext;
- (bool)hasUtterance;
- (unsigned long long)hash;
- (id)inputs;
- (id)inputsAtIndex:(unsigned long long)arg1;
- (unsigned long long)inputsCount;
- (bool)isEqual:(id)arg1;
- (id)matchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchingSpansCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInputs:(id)arg1;
- (void)setMatchingSpans:(id)arg1;
- (void)setSystemDialogActs:(id)arg1;
- (void)setTokenChain:(id)arg1;
- (void)setTurnContext:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)systemDialogActs;
- (id)systemDialogActsAtIndex:(unsigned long long)arg1;
- (unsigned long long)systemDialogActsCount;
- (id)tokenChain;
- (id)turnContext;
- (id)utterance;
- (void)writeTo:(id)arg1;

@end
