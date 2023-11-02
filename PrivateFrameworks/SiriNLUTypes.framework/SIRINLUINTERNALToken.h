
@interface SIRINLUINTERNALToken : PBCodable <NSCopying> {
    int  _begin;
    NSString * _cleanValue;
    NSMutableArray * _cleanValues;
    int  _end;
    struct { 
        unsigned int begin : 1; 
        unsigned int end : 1; 
        unsigned int nonWhitespaceTokenIndex : 1; 
        unsigned int tokenIndex : 1; 
        unsigned int isSignificant : 1; 
        unsigned int isWhitespace : 1; 
    }  _has;
    bool  _isSignificant;
    bool  _isWhitespace;
    int  _nonWhitespaceTokenIndex;
    NSMutableArray * _normalizedValues;
    int  _tokenIndex;
    NSString * _value;
}

@property (nonatomic) int begin;
@property (nonatomic, retain) NSString *cleanValue;
@property (nonatomic, retain) NSMutableArray *cleanValues;
@property (nonatomic) int end;
@property (nonatomic) bool hasBegin;
@property (nonatomic, readonly) bool hasCleanValue;
@property (nonatomic) bool hasEnd;
@property (nonatomic) bool hasIsSignificant;
@property (nonatomic) bool hasIsWhitespace;
@property (nonatomic) bool hasNonWhitespaceTokenIndex;
@property (nonatomic) bool hasTokenIndex;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic) bool isSignificant;
@property (nonatomic) bool isWhitespace;
@property (nonatomic) int nonWhitespaceTokenIndex;
@property (nonatomic, retain) NSMutableArray *normalizedValues;
@property (nonatomic) int tokenIndex;
@property (nonatomic, retain) NSString *value;

+ (Class)cleanValuesType;
+ (Class)normalizedValuesType;

- (void).cxx_destruct;
- (void)addCleanValues:(id)arg1;
- (void)addNormalizedValues:(id)arg1;
- (int)begin;
- (id)cleanValue;
- (id)cleanValues;
- (id)cleanValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)cleanValuesCount;
- (void)clearCleanValues;
- (void)clearNormalizedValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)end;
- (bool)hasBegin;
- (bool)hasCleanValue;
- (bool)hasEnd;
- (bool)hasIsSignificant;
- (bool)hasIsWhitespace;
- (bool)hasNonWhitespaceTokenIndex;
- (bool)hasTokenIndex;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSignificant;
- (bool)isWhitespace;
- (void)mergeFrom:(id)arg1;
- (int)nonWhitespaceTokenIndex;
- (id)normalizedValues;
- (id)normalizedValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)normalizedValuesCount;
- (bool)readFrom:(id)arg1;
- (void)setBegin:(int)arg1;
- (void)setCleanValue:(id)arg1;
- (void)setCleanValues:(id)arg1;
- (void)setEnd:(int)arg1;
- (void)setHasBegin:(bool)arg1;
- (void)setHasEnd:(bool)arg1;
- (void)setHasIsSignificant:(bool)arg1;
- (void)setHasIsWhitespace:(bool)arg1;
- (void)setHasNonWhitespaceTokenIndex:(bool)arg1;
- (void)setHasTokenIndex:(bool)arg1;
- (void)setIsSignificant:(bool)arg1;
- (void)setIsWhitespace:(bool)arg1;
- (void)setNonWhitespaceTokenIndex:(int)arg1;
- (void)setNormalizedValues:(id)arg1;
- (void)setTokenIndex:(int)arg1;
- (void)setValue:(id)arg1;
- (int)tokenIndex;
- (id)value;
- (void)writeTo:(id)arg1;

@end
