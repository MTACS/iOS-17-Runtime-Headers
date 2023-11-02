
@interface _DKPREventData : PBCodable <NSCopying> {
    NSData * _event;
    struct { 
        unsigned int uncompressedLength : 1; 
    }  _has;
    unsigned long long  _uncompressedLength;
    unsigned int  _version;
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
