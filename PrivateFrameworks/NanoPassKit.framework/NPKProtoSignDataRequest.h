
@interface NPKProtoSignDataRequest : PBRequest <NSCopying> {
    NSString * _aid;
    NSData * _dataToSign;
    NSData * _digestToSign;
    int  _entanglementMode;
    struct { 
        unsigned int entanglementMode : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *aid;
@property (nonatomic, retain) NSData *dataToSign;
@property (nonatomic, retain) NSData *digestToSign;
@property (nonatomic) int entanglementMode;
@property (nonatomic, readonly) bool hasAid;
@property (nonatomic, readonly) bool hasDataToSign;
@property (nonatomic, readonly) bool hasDigestToSign;
@property (nonatomic) bool hasEntanglementMode;

- (void).cxx_destruct;
- (int)StringAsEntanglementMode:(id)arg1;
- (id)aid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataToSign;
- (id)description;
- (id)dictionaryRepresentation;
- (id)digestToSign;
- (int)entanglementMode;
- (id)entanglementModeAsString:(int)arg1;
- (bool)hasAid;
- (bool)hasDataToSign;
- (bool)hasDigestToSign;
- (bool)hasEntanglementMode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAid:(id)arg1;
- (void)setDataToSign:(id)arg1;
- (void)setDigestToSign:(id)arg1;
- (void)setEntanglementMode:(int)arg1;
- (void)setHasEntanglementMode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
