
@interface OTEscrowRecordMetadata : PBCodable <NSCopying> {
    NSData * _backupKeybagDigest;
    NSString * _bottleId;
    NSString * _bottleValidity;
    OTEscrowRecordMetadataClientMetadata * _clientMetadata;
    NSData * _escrowedSpki;
    struct { 
        unsigned int secureBackupTimestamp : 1; 
        unsigned int secureBackupUsesMultipleIcscs : 1; 
    }  _has;
    NSData * _peerInfo;
    unsigned long long  _secureBackupTimestamp;
    unsigned long long  _secureBackupUsesMultipleIcscs;
    NSString * _serial;
}

@property (nonatomic, retain) NSData *backupKeybagDigest;
@property (nonatomic, retain) NSString *bottleId;
@property (nonatomic, retain) NSString *bottleValidity;
@property (nonatomic, retain) OTEscrowRecordMetadataClientMetadata *clientMetadata;
@property (nonatomic, retain) NSData *escrowedSpki;
@property (nonatomic, readonly) bool hasBackupKeybagDigest;
@property (nonatomic, readonly) bool hasBottleId;
@property (nonatomic, readonly) bool hasBottleValidity;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (nonatomic, readonly) bool hasEscrowedSpki;
@property (nonatomic, readonly) bool hasPeerInfo;
@property (nonatomic) bool hasSecureBackupTimestamp;
@property (nonatomic) bool hasSecureBackupUsesMultipleIcscs;
@property (nonatomic, readonly) bool hasSerial;
@property (nonatomic, retain) NSData *peerInfo;
@property (nonatomic) unsigned long long secureBackupTimestamp;
@property (nonatomic) unsigned long long secureBackupUsesMultipleIcscs;
@property (nonatomic, retain) NSString *serial;

- (void).cxx_destruct;
- (id)backupKeybagDigest;
- (id)bottleId;
- (id)bottleValidity;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)escrowedSpki;
- (bool)hasBackupKeybagDigest;
- (bool)hasBottleId;
- (bool)hasBottleValidity;
- (bool)hasClientMetadata;
- (bool)hasEscrowedSpki;
- (bool)hasPeerInfo;
- (bool)hasSecureBackupTimestamp;
- (bool)hasSecureBackupUsesMultipleIcscs;
- (bool)hasSerial;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerInfo;
- (bool)readFrom:(id)arg1;
- (unsigned long long)secureBackupTimestamp;
- (unsigned long long)secureBackupUsesMultipleIcscs;
- (id)serial;
- (void)setBackupKeybagDigest:(id)arg1;
- (void)setBottleId:(id)arg1;
- (void)setBottleValidity:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setEscrowedSpki:(id)arg1;
- (void)setHasSecureBackupTimestamp:(bool)arg1;
- (void)setHasSecureBackupUsesMultipleIcscs:(bool)arg1;
- (void)setPeerInfo:(id)arg1;
- (void)setSecureBackupTimestamp:(unsigned long long)arg1;
- (void)setSecureBackupUsesMultipleIcscs:(unsigned long long)arg1;
- (void)setSerial:(id)arg1;
- (void)writeTo:(id)arg1;

@end
