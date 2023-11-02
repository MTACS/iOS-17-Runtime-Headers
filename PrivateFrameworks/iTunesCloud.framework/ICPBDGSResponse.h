
@interface ICPBDGSResponse : PBCodable <NSCopying> {
    ICPBDGSFinishDelegationResponse * _finishDelegationResponse;
    struct { 
        unsigned int requestUniqueID : 1; 
    }  _has;
    unsigned int  _requestUniqueID;
    ICPBDGSStartDelegationResponse * _startDelegationResponse;
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
