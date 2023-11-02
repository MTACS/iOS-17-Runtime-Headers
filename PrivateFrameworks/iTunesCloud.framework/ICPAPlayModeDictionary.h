
@interface ICPAPlayModeDictionary : PBCodable <NSCopying> {
    int  _autoPlayMode;
    struct { 
        unsigned int autoPlayMode : 1; 
        unsigned int repeatPlayMode : 1; 
        unsigned int shufflePlayMode : 1; 
    }  _has;
    int  _repeatPlayMode;
    int  _shufflePlayMode;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
