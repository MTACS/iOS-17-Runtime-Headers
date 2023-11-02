
@interface PBBProtoDeviceManagementSetupResponse : PBCodable <NSCopying> {
    NSData * _error;
    struct { 
        unsigned int success : 1; 
    }  _has;
    bool  _success;
}

@property (nonatomic, retain) NSData *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
