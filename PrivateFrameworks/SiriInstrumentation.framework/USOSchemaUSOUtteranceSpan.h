
@interface USOSchemaUSOUtteranceSpan : SISchemaInstrumentationMessage {
    unsigned int  _endIndex;
    int  _endMilliseconds;
    unsigned int  _endUnicodeScalarIndex;
    struct { 
        unsigned int startIndex : 1; 
        unsigned int endIndex : 1; 
        unsigned int startUnicodeScalarIndex : 1; 
        unsigned int endUnicodeScalarIndex : 1; 
        unsigned int startMilliseconds : 1; 
        unsigned int endMilliseconds : 1; 
    }  _has;
    unsigned int  _startIndex;
    int  _startMilliseconds;
    unsigned int  _startUnicodeScalarIndex;
}

@property (nonatomic) unsigned int endIndex;
@property (nonatomic) int endMilliseconds;
@property (nonatomic) unsigned int endUnicodeScalarIndex;
@property (nonatomic) bool hasEndIndex;
@property (nonatomic) bool hasEndMilliseconds;
@property (nonatomic) bool hasEndUnicodeScalarIndex;
@property (nonatomic) bool hasStartIndex;
@property (nonatomic) bool hasStartMilliseconds;
@property (nonatomic) bool hasStartUnicodeScalarIndex;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) int startMilliseconds;
@property (nonatomic) unsigned int startUnicodeScalarIndex;

- (void)deleteEndIndex;
- (void)deleteEndMilliseconds;
- (void)deleteEndUnicodeScalarIndex;
- (void)deleteStartIndex;
- (void)deleteStartMilliseconds;
- (void)deleteStartUnicodeScalarIndex;
- (id)dictionaryRepresentation;
- (unsigned int)endIndex;
- (int)endMilliseconds;
- (unsigned int)endUnicodeScalarIndex;
- (bool)hasEndIndex;
- (bool)hasEndMilliseconds;
- (bool)hasEndUnicodeScalarIndex;
- (bool)hasStartIndex;
- (bool)hasStartMilliseconds;
- (bool)hasStartUnicodeScalarIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEndIndex:(unsigned int)arg1;
- (void)setEndMilliseconds:(int)arg1;
- (void)setEndUnicodeScalarIndex:(unsigned int)arg1;
- (void)setHasEndIndex:(bool)arg1;
- (void)setHasEndMilliseconds:(bool)arg1;
- (void)setHasEndUnicodeScalarIndex:(bool)arg1;
- (void)setHasStartIndex:(bool)arg1;
- (void)setHasStartMilliseconds:(bool)arg1;
- (void)setHasStartUnicodeScalarIndex:(bool)arg1;
- (void)setStartIndex:(unsigned int)arg1;
- (void)setStartMilliseconds:(int)arg1;
- (void)setStartUnicodeScalarIndex:(unsigned int)arg1;
- (unsigned int)startIndex;
- (int)startMilliseconds;
- (unsigned int)startUnicodeScalarIndex;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
