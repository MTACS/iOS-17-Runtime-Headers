
@interface PLUSSchemaPLUSSuggestionAccuracySignal : SISchemaInstrumentationMessage {
    struct { 
        unsigned int signalType : 1; 
        unsigned int signalSource : 1; 
    }  _has;
    int  _signalSource;
    int  _signalType;
}

@property (nonatomic) bool hasSignalSource;
@property (nonatomic) bool hasSignalType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int signalSource;
@property (nonatomic) int signalType;

- (void)deleteSignalSource;
- (void)deleteSignalType;
- (id)dictionaryRepresentation;
- (bool)hasSignalSource;
- (bool)hasSignalType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSignalSource:(bool)arg1;
- (void)setHasSignalType:(bool)arg1;
- (void)setSignalSource:(int)arg1;
- (void)setSignalType:(int)arg1;
- (int)signalSource;
- (int)signalType;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
