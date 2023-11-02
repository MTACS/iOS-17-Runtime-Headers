
@interface NPKProtoRemoteDevicePasscodeStateResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    struct { 
        unsigned int hasPasscodeSet : 1; 
        unsigned int isPasscodeLocked : 1; 
    }  _has;
    bool  _hasPasscodeSet;
    bool  _isPasscodeLocked;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic) bool hasHasPasscodeSet;
@property (nonatomic) bool hasIsPasscodeLocked;
@property (nonatomic) bool hasPasscodeSet;
@property (nonatomic) bool isPasscodeLocked;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasHasPasscodeSet;
- (bool)hasIsPasscodeLocked;
- (bool)hasPasscodeSet;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPasscodeLocked;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setHasHasPasscodeSet:(bool)arg1;
- (void)setHasIsPasscodeLocked:(bool)arg1;
- (void)setHasPasscodeSet:(bool)arg1;
- (void)setIsPasscodeLocked:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
