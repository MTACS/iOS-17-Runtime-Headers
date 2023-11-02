
@interface MTSchemaMTBatchRequestStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int numParagraphs : 1; 
    }  _has;
    bool  _hasSequenceNumber;
    unsigned int  _numParagraphs;
    NSString * _sequenceNumber;
}

@property (nonatomic) bool hasNumParagraphs;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numParagraphs;
@property (nonatomic, copy) NSString *sequenceNumber;

- (void).cxx_destruct;
- (void)deleteNumParagraphs;
- (void)deleteSequenceNumber;
- (id)dictionaryRepresentation;
- (bool)hasNumParagraphs;
- (bool)hasSequenceNumber;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numParagraphs;
- (bool)readFrom:(id)arg1;
- (id)sequenceNumber;
- (void)setHasNumParagraphs:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setNumParagraphs:(unsigned int)arg1;
- (void)setSequenceNumber:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
