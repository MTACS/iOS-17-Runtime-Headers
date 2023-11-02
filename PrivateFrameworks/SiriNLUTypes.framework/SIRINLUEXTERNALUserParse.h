
@interface SIRINLUEXTERNALUserParse : PBCodable <NSCopying> {
    double  _comparableProbability;
    SIRINLUEXTERNALCorrectionOutcome * _correctionOutcome;
    struct { 
        unsigned int comparableProbability : 1; 
        unsigned int probability : 1; 
    }  _has;
    SIRINLUEXTERNALUUID * _idA;
    SIRINLUEXTERNALParser * _parser;
    NSString * _parserId;
    double  _probability;
    SIRINLUEXTERNALRepetitionResult * _repetitionResult;
    NSMutableArray * _userDialogActs;
}

@property (nonatomic) double comparableProbability;
@property (nonatomic, retain) SIRINLUEXTERNALCorrectionOutcome *correctionOutcome;
@property (nonatomic) bool hasComparableProbability;
@property (nonatomic, readonly) bool hasCorrectionOutcome;
@property (nonatomic, readonly) bool hasIdA;
@property (nonatomic, readonly) bool hasParser;
@property (nonatomic, readonly) bool hasParserId;
@property (nonatomic) bool hasProbability;
@property (nonatomic, readonly) bool hasRepetitionResult;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *idA;
@property (nonatomic, retain) SIRINLUEXTERNALParser *parser;
@property (nonatomic, retain) NSString *parserId;
@property (nonatomic) double probability;
@property (nonatomic, retain) SIRINLUEXTERNALRepetitionResult *repetitionResult;
@property (nonatomic, retain) NSMutableArray *userDialogActs;

+ (Class)userDialogActsType;

- (void).cxx_destruct;
- (void)addUserDialogActs:(id)arg1;
- (void)clearUserDialogActs;
- (double)comparableProbability;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctionOutcome;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasComparableProbability;
- (bool)hasCorrectionOutcome;
- (bool)hasIdA;
- (bool)hasParser;
- (bool)hasParserId;
- (bool)hasProbability;
- (bool)hasRepetitionResult;
- (unsigned long long)hash;
- (id)idA;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parser;
- (id)parserId;
- (double)probability;
- (bool)readFrom:(id)arg1;
- (id)repetitionResult;
- (void)setComparableProbability:(double)arg1;
- (void)setCorrectionOutcome:(id)arg1;
- (void)setHasComparableProbability:(bool)arg1;
- (void)setHasProbability:(bool)arg1;
- (void)setIdA:(id)arg1;
- (void)setParser:(id)arg1;
- (void)setParserId:(id)arg1;
- (void)setProbability:(double)arg1;
- (void)setRepetitionResult:(id)arg1;
- (void)setUserDialogActs:(id)arg1;
- (id)userDialogActs;
- (id)userDialogActsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userDialogActsCount;
- (void)writeTo:(id)arg1;

@end
