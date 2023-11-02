
@interface ICPBDGSRequest : PBRequest <NSCopying> {
    ICPBDGSFinishDelegationRequest * _finishDelegationRequest;
    struct { 
        unsigned int uniqueID : 1; 
    }  _has;
    ICPBDGSStartDelegationRequest * _startDelegationRequest;
    unsigned int  _uniqueID;
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
