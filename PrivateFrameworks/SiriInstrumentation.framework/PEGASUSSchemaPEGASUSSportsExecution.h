
@interface PEGASUSSchemaPEGASUSSportsExecution : SISchemaInstrumentationMessage {
    struct { 
        unsigned int sportsUsecase : 1; 
        unsigned int isSportsWatchFaceRequest : 1; 
        unsigned int isSnippetNextCardRequest : 1; 
        unsigned int isMachineUtterance : 1; 
        unsigned int isDisambiguation : 1; 
        unsigned int isLiveScoreRequest : 1; 
    }  _has;
    bool  _isDisambiguation;
    bool  _isLiveScoreRequest;
    bool  _isMachineUtterance;
    bool  _isSnippetNextCardRequest;
    bool  _isSportsWatchFaceRequest;
    int  _sportsUsecase;
}

@property (nonatomic) bool hasIsDisambiguation;
@property (nonatomic) bool hasIsLiveScoreRequest;
@property (nonatomic) bool hasIsMachineUtterance;
@property (nonatomic) bool hasIsSnippetNextCardRequest;
@property (nonatomic) bool hasIsSportsWatchFaceRequest;
@property (nonatomic) bool hasSportsUsecase;
@property (nonatomic) bool isDisambiguation;
@property (nonatomic) bool isLiveScoreRequest;
@property (nonatomic) bool isMachineUtterance;
@property (nonatomic) bool isSnippetNextCardRequest;
@property (nonatomic) bool isSportsWatchFaceRequest;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int sportsUsecase;

- (void)deleteIsDisambiguation;
- (void)deleteIsLiveScoreRequest;
- (void)deleteIsMachineUtterance;
- (void)deleteIsSnippetNextCardRequest;
- (void)deleteIsSportsWatchFaceRequest;
- (void)deleteSportsUsecase;
- (id)dictionaryRepresentation;
- (bool)hasIsDisambiguation;
- (bool)hasIsLiveScoreRequest;
- (bool)hasIsMachineUtterance;
- (bool)hasIsSnippetNextCardRequest;
- (bool)hasIsSportsWatchFaceRequest;
- (bool)hasSportsUsecase;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDisambiguation;
- (bool)isEqual:(id)arg1;
- (bool)isLiveScoreRequest;
- (bool)isMachineUtterance;
- (bool)isSnippetNextCardRequest;
- (bool)isSportsWatchFaceRequest;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDisambiguation:(bool)arg1;
- (void)setHasIsLiveScoreRequest:(bool)arg1;
- (void)setHasIsMachineUtterance:(bool)arg1;
- (void)setHasIsSnippetNextCardRequest:(bool)arg1;
- (void)setHasIsSportsWatchFaceRequest:(bool)arg1;
- (void)setHasSportsUsecase:(bool)arg1;
- (void)setIsDisambiguation:(bool)arg1;
- (void)setIsLiveScoreRequest:(bool)arg1;
- (void)setIsMachineUtterance:(bool)arg1;
- (void)setIsSnippetNextCardRequest:(bool)arg1;
- (void)setIsSportsWatchFaceRequest:(bool)arg1;
- (void)setSportsUsecase:(int)arg1;
- (int)sportsUsecase;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
