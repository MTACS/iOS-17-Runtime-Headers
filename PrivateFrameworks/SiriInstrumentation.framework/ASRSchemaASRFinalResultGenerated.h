
@interface ASRSchemaASRFinalResultGenerated : SISchemaInstrumentationMessage {
    NSArray * _correctAlignedPartialResultIndexLists;
    NSArray * _correctPartialResultIndexLists;
    struct { 
        unsigned int isAfterResume : 1; 
    }  _has;
    bool  _isAfterResume;
    NSArray * _tokenSilenceStartTimeInNsLists;
}

@property (nonatomic, copy) NSArray *correctAlignedPartialResultIndexLists;
@property (nonatomic, copy) NSArray *correctPartialResultIndexLists;
@property (nonatomic) bool hasIsAfterResume;
@property (nonatomic) bool isAfterResume;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *tokenSilenceStartTimeInNsLists;

- (void).cxx_destruct;
- (void)addCorrectAlignedPartialResultIndexList:(int)arg1;
- (void)addCorrectPartialResultIndexList:(int)arg1;
- (void)addTokenSilenceStartTimeInNsList:(unsigned long long)arg1;
- (void)clearCorrectAlignedPartialResultIndexList;
- (void)clearCorrectPartialResultIndexList;
- (void)clearTokenSilenceStartTimeInNsList;
- (int)correctAlignedPartialResultIndexListAtIndex:(unsigned long long)arg1;
- (unsigned long long)correctAlignedPartialResultIndexListCount;
- (id)correctAlignedPartialResultIndexLists;
- (int)correctPartialResultIndexListAtIndex:(unsigned long long)arg1;
- (unsigned long long)correctPartialResultIndexListCount;
- (id)correctPartialResultIndexLists;
- (void)deleteCorrectAlignedPartialResultIndexList;
- (void)deleteCorrectPartialResultIndexList;
- (void)deleteIsAfterResume;
- (void)deleteTokenSilenceStartTimeInNsList;
- (id)dictionaryRepresentation;
- (bool)hasIsAfterResume;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAfterResume;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCorrectAlignedPartialResultIndexLists:(id)arg1;
- (void)setCorrectPartialResultIndexLists:(id)arg1;
- (void)setHasIsAfterResume:(bool)arg1;
- (void)setIsAfterResume:(bool)arg1;
- (void)setTokenSilenceStartTimeInNsLists:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)tokenSilenceStartTimeInNsListAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokenSilenceStartTimeInNsListCount;
- (id)tokenSilenceStartTimeInNsLists;
- (void)writeTo:(id)arg1;

@end
