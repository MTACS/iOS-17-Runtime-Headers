
@interface FCCKPQuery : PBCodable <NSCopying> {
    bool  _distinct;
    NSMutableArray * _filters;
    struct { 
        unsigned int queryOperator : 1; 
        unsigned int distinct : 1; 
    }  _has;
    int  _queryOperator;
    NSMutableArray * _sorts;
    NSMutableArray * _types;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
