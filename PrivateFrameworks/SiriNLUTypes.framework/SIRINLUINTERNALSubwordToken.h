
@interface SIRINLUINTERNALSubwordToken : PBCodable <NSCopying> {
    struct { 
        unsigned int subwordTokenIndex : 1; 
        unsigned int tokenIndex : 1; 
    }  _has;
    int  _subwordTokenIndex;
    int  _tokenIndex;
    NSString * _value;
}

@property (nonatomic) bool hasSubwordTokenIndex;
@property (nonatomic) bool hasTokenIndex;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic) int subwordTokenIndex;
@property (nonatomic) int tokenIndex;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSubwordTokenIndex;
- (bool)hasTokenIndex;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSubwordTokenIndex:(bool)arg1;
- (void)setHasTokenIndex:(bool)arg1;
- (void)setSubwordTokenIndex:(int)arg1;
- (void)setTokenIndex:(int)arg1;
- (void)setValue:(id)arg1;
- (int)subwordTokenIndex;
- (int)tokenIndex;
- (id)value;
- (void)writeTo:(id)arg1;

@end
