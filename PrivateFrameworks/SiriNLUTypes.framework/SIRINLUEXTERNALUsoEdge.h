
@interface SIRINLUEXTERNALUsoEdge : PBCodable <NSCopying> {
    unsigned int  _fromIndex;
    struct { 
        unsigned int fromIndex : 1; 
        unsigned int toIndex : 1; 
    }  _has;
    SIRINLUEXTERNALUsoEdgeLabel * _label;
    unsigned int  _toIndex;
}

@property (nonatomic) unsigned int fromIndex;
@property (nonatomic) bool hasFromIndex;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasToIndex;
@property (nonatomic, retain) SIRINLUEXTERNALUsoEdgeLabel *label;
@property (nonatomic) unsigned int toIndex;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fromIndex;
- (bool)hasFromIndex;
- (bool)hasLabel;
- (bool)hasToIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFromIndex:(unsigned int)arg1;
- (void)setHasFromIndex:(bool)arg1;
- (void)setHasToIndex:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setToIndex:(unsigned int)arg1;
- (unsigned int)toIndex;
- (void)writeTo:(id)arg1;

@end
