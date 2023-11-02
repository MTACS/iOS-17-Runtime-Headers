
@interface SIRINLUINTERNALMatchingSpan : PBCodable <NSCopying> {
    unsigned int  _endTokenIndex;
    struct { 
        unsigned int endTokenIndex : 1; 
        unsigned int startTokenIndex : 1; 
    }  _has;
    NSString * _input;
    SIRINLUINTERNALInternalSpanData * _internalSpanData;
    NSString * _label;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _matcherNames;
    NSString * _semanticValue;
    unsigned int  _startTokenIndex;
    SIRINLUEXTERNALUsoGraph * _usoGraph;
}

@property (nonatomic) unsigned int endTokenIndex;
@property (nonatomic) bool hasEndTokenIndex;
@property (nonatomic, readonly) bool hasInput;
@property (nonatomic, readonly) bool hasInternalSpanData;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, readonly) bool hasSemanticValue;
@property (nonatomic) bool hasStartTokenIndex;
@property (nonatomic, readonly) bool hasUsoGraph;
@property (nonatomic, retain) NSString *input;
@property (nonatomic, retain) SIRINLUINTERNALInternalSpanData *internalSpanData;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, readonly) int*matcherNames;
@property (nonatomic, readonly) unsigned long long matcherNamesCount;
@property (nonatomic, retain) NSString *semanticValue;
@property (nonatomic) unsigned int startTokenIndex;
@property (nonatomic, retain) SIRINLUEXTERNALUsoGraph *usoGraph;

- (void).cxx_destruct;
- (int)StringAsMatcherNames:(id)arg1;
- (void)addMatcherNames:(int)arg1;
- (void)clearMatcherNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endTokenIndex;
- (bool)hasEndTokenIndex;
- (bool)hasInput;
- (bool)hasInternalSpanData;
- (bool)hasLabel;
- (bool)hasSemanticValue;
- (bool)hasStartTokenIndex;
- (bool)hasUsoGraph;
- (unsigned long long)hash;
- (id)input;
- (id)internalSpanData;
- (bool)isEqual:(id)arg1;
- (id)label;
- (int*)matcherNames;
- (id)matcherNamesAsString:(int)arg1;
- (int)matcherNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)matcherNamesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)semanticValue;
- (void)setEndTokenIndex:(unsigned int)arg1;
- (void)setHasEndTokenIndex:(bool)arg1;
- (void)setHasStartTokenIndex:(bool)arg1;
- (void)setInput:(id)arg1;
- (void)setInternalSpanData:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMatcherNames:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSemanticValue:(id)arg1;
- (void)setStartTokenIndex:(unsigned int)arg1;
- (void)setUsoGraph:(id)arg1;
- (unsigned int)startTokenIndex;
- (id)usoGraph;
- (void)writeTo:(id)arg1;

@end
