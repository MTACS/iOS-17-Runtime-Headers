
@interface PLUSSchemaPLUSMediaSuggestionOutcome : SISchemaInstrumentationMessage {
    struct { 
        unsigned int mediaSuggestionFeedback : 1; 
    }  _has;
    int  _mediaSuggestionFeedback;
}

@property (nonatomic) bool hasMediaSuggestionFeedback;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int mediaSuggestionFeedback;

- (void)deleteMediaSuggestionFeedback;
- (id)dictionaryRepresentation;
- (bool)hasMediaSuggestionFeedback;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)mediaSuggestionFeedback;
- (bool)readFrom:(id)arg1;
- (void)setHasMediaSuggestionFeedback:(bool)arg1;
- (void)setMediaSuggestionFeedback:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
