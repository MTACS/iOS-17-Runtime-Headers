
@interface CKDPShareDeclineRequest : PBRequest <NSCopying> {
    NSString * _participantId;
    CKDPProtectionInfo * _protectionInfo;
    CKDPShareIdentifier * _shareId;
}

@property (nonatomic, readonly) bool hasParticipantId;
@property (nonatomic, readonly) bool hasProtectionInfo;
@property (nonatomic, readonly) bool hasShareId;
@property (nonatomic, retain) NSString *participantId;
@property (nonatomic, retain) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasParticipantId;
- (bool)hasProtectionInfo;
- (bool)hasShareId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantId;
- (id)protectionInfo;
- (bool)readFrom:(id)arg1;
- (void)setParticipantId:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
