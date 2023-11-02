
@interface SIRINLUEXTERNALParser : PBCodable <NSCopying> {
    int  _algorithm;
    struct { 
        unsigned int algorithm : 1; 
        unsigned int parserId : 1; 
    }  _has;
    int  _parserId;
}

@property (nonatomic) int algorithm;
@property (nonatomic) bool hasAlgorithm;
@property (nonatomic) bool hasParserId;
@property (nonatomic) int parserId;

- (int)StringAsAlgorithm:(id)arg1;
- (int)StringAsParserId:(id)arg1;
- (int)algorithm;
- (id)algorithmAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlgorithm;
- (bool)hasParserId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)parserId;
- (id)parserIdAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlgorithm:(int)arg1;
- (void)setHasAlgorithm:(bool)arg1;
- (void)setHasParserId:(bool)arg1;
- (void)setParserId:(int)arg1;
- (void)writeTo:(id)arg1;

@end
