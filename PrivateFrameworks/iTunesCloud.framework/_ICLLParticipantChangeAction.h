
@interface _ICLLParticipantChangeAction : PBCodable <NSCopying> {
    struct { 
        unsigned int participantId : 1; 
        unsigned int status : 1; 
    }  _has;
    long long  _participantId;
    _ICLLParticipantQuery * _participantQuery;
    int  _status;
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
