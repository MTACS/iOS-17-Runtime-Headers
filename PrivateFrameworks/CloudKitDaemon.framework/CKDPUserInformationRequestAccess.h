
@interface CKDPUserInformationRequestAccess : PBCodable <NSCopying> {
    CKDPContactInformation * _contactInformation;
    NSString * _userId;
}

@property (nonatomic, retain) CKDPContactInformation *contactInformation;
@property (nonatomic, readonly) bool hasContactInformation;
@property (nonatomic, readonly) bool hasUserId;
@property (nonatomic, retain) NSString *userId;

- (void).cxx_destruct;
- (id)contactInformation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContactInformation;
- (bool)hasUserId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContactInformation:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userId;
- (void)writeTo:(id)arg1;

@end
