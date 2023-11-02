
@interface FCCKPRecordRetrieveResponse : PBCodable <NSCopying> {
    bool  _clientVersionETagMatch;
    struct { 
        unsigned int clientVersionETagMatch : 1; 
    }  _has;
    FCCKPRecord * _record;
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
