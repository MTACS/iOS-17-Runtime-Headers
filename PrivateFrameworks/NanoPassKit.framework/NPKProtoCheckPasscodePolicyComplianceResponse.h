
@interface NPKProtoCheckPasscodePolicyComplianceResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    struct { 
        unsigned int passcodeMeetsPolicy : 1; 
    }  _has;
    bool  _passcodeMeetsPolicy;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic) bool hasPasscodeMeetsPolicy;
@property (nonatomic) bool passcodeMeetsPolicy;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasPasscodeMeetsPolicy;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)passcodeMeetsPolicy;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setHasPasscodeMeetsPolicy:(bool)arg1;
- (void)setPasscodeMeetsPolicy:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
