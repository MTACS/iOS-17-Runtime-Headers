
@interface FCCKPOperation : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
        unsigned int last : 1; 
        unsigned int synchronousMode : 1; 
    }  _has;
    bool  _last;
    NSString * _operationUUID;
    bool  _synchronousMode;
    int  _type;
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
