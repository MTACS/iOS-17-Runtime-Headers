
@interface NPKIDVRemoteDeviceProtoNotificationRequest : PBRequest <NSCopying> {
    int  _documentType;
    NSString * _issuerName;
    int  _notificationType;
}

@property (nonatomic) int documentType;
@property (nonatomic, readonly) bool hasIssuerName;
@property (nonatomic, retain) NSString *issuerName;
@property (nonatomic) int notificationType;

- (void).cxx_destruct;
- (int)StringAsDocumentType:(id)arg1;
- (int)StringAsNotificationType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)documentType;
- (id)documentTypeAsString:(int)arg1;
- (bool)hasIssuerName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issuerName;
- (void)mergeFrom:(id)arg1;
- (int)notificationType;
- (id)notificationTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDocumentType:(int)arg1;
- (void)setIssuerName:(id)arg1;
- (void)setNotificationType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
