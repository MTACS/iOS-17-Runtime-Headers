
@interface CKDPMergeableDeltaMetadata : PBCodable <NSCopying> {
    NSData * _encryptedTimestamps;
    NSString * _identifier;
    CKDPProtectionInfo * _protectionInfo;
    NSMutableArray * _replacedDeltaIdentifiers;
    CKDPDistributedTimestamps * _timestamps;
    NSData * _timestampsAuthTag;
}

@property (nonatomic, retain) NSData *encryptedTimestamps;
@property (nonatomic, readonly) bool hasEncryptedTimestamps;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasProtectionInfo;
@property (nonatomic, readonly) bool hasTimestamps;
@property (nonatomic, readonly) bool hasTimestampsAuthTag;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, retain) NSMutableArray *replacedDeltaIdentifiers;
@property (nonatomic, retain) CKDPDistributedTimestamps *timestamps;
@property (nonatomic, retain) NSData *timestampsAuthTag;

+ (Class)replacedDeltaIdentifiersType;

- (void).cxx_destruct;
- (void)addReplacedDeltaIdentifiers:(id)arg1;
- (void)clearReplacedDeltaIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedTimestamps;
- (bool)hasEncryptedTimestamps;
- (bool)hasIdentifier;
- (bool)hasProtectionInfo;
- (bool)hasTimestamps;
- (bool)hasTimestampsAuthTag;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)protectionInfo;
- (bool)readFrom:(id)arg1;
- (id)replacedDeltaIdentifiers;
- (id)replacedDeltaIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)replacedDeltaIdentifiersCount;
- (void)setEncryptedTimestamps:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setReplacedDeltaIdentifiers:(id)arg1;
- (void)setTimestamps:(id)arg1;
- (void)setTimestampsAuthTag:(id)arg1;
- (id)timestamps;
- (id)timestampsAuthTag;
- (void)writeTo:(id)arg1;

@end
