
@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying> {
    GEOFormattedString * _continueStage;
    NSMutableArray * _executionStages;
    struct { 
        unsigned int has_shortChainedInstructionIndex : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_continueStage : 1; 
        unsigned int read_executionStages : 1; 
        unsigned int read_initialStage : 1; 
        unsigned int read_preparationStage : 1; 
        unsigned int read_proceedStage : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOFormattedString * _initialStage;
    GEOFormattedString * _preparationStage;
    GEOFormattedString * _proceedStage;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _shortChainedInstructionIndex;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOFormattedString *continueStage;
@property (nonatomic, retain) NSMutableArray *executionStages;
@property (nonatomic, readonly) bool hasContinueStage;
@property (nonatomic, readonly) bool hasInitialStage;
@property (nonatomic, readonly) bool hasPreparationStage;
@property (nonatomic, readonly) bool hasProceedStage;
@property (nonatomic) bool hasShortChainedInstructionIndex;
@property (nonatomic, retain) GEOFormattedString *initialStage;
@property (nonatomic, retain) GEOFormattedString *preparationStage;
@property (nonatomic, retain) GEOFormattedString *proceedStage;
@property (nonatomic) unsigned int shortChainedInstructionIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)executionStageType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addExecutionStage:(id)arg1;
- (void)clearExecutionStages;
- (void)clearUnknownFields:(bool)arg1;
- (id)continueStage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executionStageAtIndex:(unsigned long long)arg1;
- (id)executionStages;
- (unsigned long long)executionStagesCount;
- (bool)hasContinueStage;
- (bool)hasInitialStage;
- (bool)hasPreparationStage;
- (bool)hasProceedStage;
- (bool)hasShortChainedInstructionIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initialStage;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)preparationStage;
- (id)proceedStage;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContinueStage:(id)arg1;
- (void)setExecutionStages:(id)arg1;
- (void)setHasShortChainedInstructionIndex:(bool)arg1;
- (void)setInitialStage:(id)arg1;
- (void)setPreparationStage:(id)arg1;
- (void)setProceedStage:(id)arg1;
- (void)setShortChainedInstructionIndex:(unsigned int)arg1;
- (unsigned int)shortChainedInstructionIndex;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
