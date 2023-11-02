
@interface _ICLLClientInfoAction : PBCodable <NSCopying> {
    int  _code;
    struct { 
        unsigned int participantId : 1; 
        unsigned int code : 1; 
    }  _has;
    long long  _participantId;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
