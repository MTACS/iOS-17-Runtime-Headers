
@interface SIRINLUEXTERNALUtteranceSpan : PBCodable <NSCopying> {
    unsigned int  _endIndex;
    int  _endMilliSeconds;
    unsigned int  _endUnicodeScalarIndex;
    struct { 
        unsigned int endIndex : 1; 
        unsigned int endMilliSeconds : 1; 
        unsigned int endUnicodeScalarIndex : 1; 
        unsigned int startIndex : 1; 
        unsigned int startMilliSeconds : 1; 
        unsigned int startUnicodeScalarIndex : 1; 
    }  _has;
    unsigned int  _startIndex;
    int  _startMilliSeconds;
    unsigned int  _startUnicodeScalarIndex;
}

@property (nonatomic) unsigned int endIndex;
@property (nonatomic) int endMilliSeconds;
@property (nonatomic) unsigned int endUnicodeScalarIndex;
@property (nonatomic) bool hasEndIndex;
@property (nonatomic) bool hasEndMilliSeconds;
@property (nonatomic) bool hasEndUnicodeScalarIndex;
@property (nonatomic) bool hasStartIndex;
@property (nonatomic) bool hasStartMilliSeconds;
@property (nonatomic) bool hasStartUnicodeScalarIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) int startMilliSeconds;
@property (nonatomic) unsigned int startUnicodeScalarIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endIndex;
- (int)endMilliSeconds;
- (unsigned int)endUnicodeScalarIndex;
- (bool)hasEndIndex;
- (bool)hasEndMilliSeconds;
- (bool)hasEndUnicodeScalarIndex;
- (bool)hasStartIndex;
- (bool)hasStartMilliSeconds;
- (bool)hasStartUnicodeScalarIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndIndex:(unsigned int)arg1;
- (void)setEndMilliSeconds:(int)arg1;
- (void)setEndUnicodeScalarIndex:(unsigned int)arg1;
- (void)setHasEndIndex:(bool)arg1;
- (void)setHasEndMilliSeconds:(bool)arg1;
- (void)setHasEndUnicodeScalarIndex:(bool)arg1;
- (void)setHasStartIndex:(bool)arg1;
- (void)setHasStartMilliSeconds:(bool)arg1;
- (void)setHasStartUnicodeScalarIndex:(bool)arg1;
- (void)setStartIndex:(unsigned int)arg1;
- (void)setStartMilliSeconds:(int)arg1;
- (void)setStartUnicodeScalarIndex:(unsigned int)arg1;
- (unsigned int)startIndex;
- (int)startMilliSeconds;
- (unsigned int)startUnicodeScalarIndex;
- (void)writeTo:(id)arg1;

@end
