
@interface NLXSchemaContextualSpanData : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isSurroundingTextMatched : 1; 
    }  _has;
    bool  _isSurroundingTextMatched;
}

@property (nonatomic) bool hasIsSurroundingTextMatched;
@property (nonatomic) bool isSurroundingTextMatched;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsSurroundingTextMatched;
- (id)dictionaryRepresentation;
- (bool)hasIsSurroundingTextMatched;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSurroundingTextMatched;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsSurroundingTextMatched:(bool)arg1;
- (void)setIsSurroundingTextMatched:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
