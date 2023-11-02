
@interface NPKProtoCheckInvitationStatusForMailboxAddressResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    struct { 
        unsigned int valid : 1; 
    }  _has;
    bool  _valid;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic) bool hasValid;
@property (nonatomic) bool valid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasValid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setHasValid:(bool)arg1;
- (void)setValid:(bool)arg1;
- (bool)valid;
- (void)writeTo:(id)arg1;

@end
