
@interface ICPBDGSPlayerInfoContextToken : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionID : 1; 
    }  _has;
    unsigned long long  _sessionID;
    NSData * _token;
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
