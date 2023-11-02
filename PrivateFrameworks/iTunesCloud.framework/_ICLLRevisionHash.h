
@interface _ICLLRevisionHash : PBCodable <NSCopying> {
    struct { 
        unsigned int revision : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _hashValue;
    int  _revision;
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
