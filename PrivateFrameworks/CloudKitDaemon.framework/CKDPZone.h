
@interface CKDPZone : PBCodable <NSCopying> {
    CKDPProtectionInfo * _protectionInfo;
    NSMutableArray * _protectionInfoKeysToRemoves;
    CKDPProtectionInfo * _recordProtectionInfo;
    CKDPShareIdentifier * _shareId;
    CKDPRecordStableUrl * _stableUrl;
    CKDPStorageExpiration * _storageExpiration;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, readonly) bool hasProtectionInfo;
@property (nonatomic, readonly) bool hasRecordProtectionInfo;
@property (nonatomic, readonly) bool hasShareId;
@property (nonatomic, readonly) bool hasStableUrl;
@property (nonatomic, readonly) bool hasStorageExpiration;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic, retain) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, retain) NSMutableArray *protectionInfoKeysToRemoves;
@property (nonatomic, retain) CKDPProtectionInfo *recordProtectionInfo;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;
@property (nonatomic, retain) CKDPRecordStableUrl *stableUrl;
@property (nonatomic, retain) CKDPStorageExpiration *storageExpiration;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (Class)protectionInfoKeysToRemoveType;

- (void).cxx_destruct;
- (void)addProtectionInfoKeysToRemove:(id)arg1;
- (void)clearProtectionInfoKeysToRemoves;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProtectionInfo;
- (bool)hasRecordProtectionInfo;
- (bool)hasShareId;
- (bool)hasStableUrl;
- (bool)hasStorageExpiration;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)protectionInfo;
- (id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)arg1;
- (id)protectionInfoKeysToRemoves;
- (unsigned long long)protectionInfoKeysToRemovesCount;
- (bool)readFrom:(id)arg1;
- (id)recordProtectionInfo;
- (void)setProtectionInfo:(id)arg1;
- (void)setProtectionInfoKeysToRemoves:(id)arg1;
- (void)setRecordProtectionInfo:(id)arg1;
- (void)setShareId:(id)arg1;
- (void)setStableUrl:(id)arg1;
- (void)setStorageExpiration:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (id)shareId;
- (id)stableUrl;
- (id)storageExpiration;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
