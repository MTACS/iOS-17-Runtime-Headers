
@interface PBBProtoTinkerAccountCredentialsIngested : PBCodable <NSCopying> {
    unsigned int  _cdpStatus;
    NSData * _detailedError;
    NSString * _errorDescription;
    struct { 
        unsigned int cdpStatus : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _success;
}

@property (nonatomic) unsigned int cdpStatus;
@property (nonatomic, retain) NSData *detailedError;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic) bool hasCdpStatus;
@property (nonatomic, readonly) bool hasDetailedError;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (unsigned int)cdpStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailedError;
- (id)dictionaryRepresentation;
- (id)errorDescription;
- (bool)hasCdpStatus;
- (bool)hasDetailedError;
- (bool)hasErrorDescription;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCdpStatus:(unsigned int)arg1;
- (void)setDetailedError:(id)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setHasCdpStatus:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
