
@interface HDCodableClinicalDeletedAccount : PBCodable <NSCopying> {
    double  _deletionDate;
    long long  _deletionReason;
    struct { 
        unsigned int deletionDate : 1; 
        unsigned int deletionReason : 1; 
    }  _has;
    HDCodableMessageVersion * _messageVersion;
    NSData * _syncIdentifier;
    HDCodableSyncIdentity * _syncIdentity;
}

@property (nonatomic) double deletionDate;
@property (nonatomic) long long deletionReason;
@property (nonatomic) bool hasDeletionDate;
@property (nonatomic) bool hasDeletionReason;
@property (nonatomic, readonly) bool hasMessageVersion;
@property (nonatomic, readonly) bool hasSyncIdentifier;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, retain) HDCodableMessageVersion *messageVersion;
@property (nonatomic, retain) NSData *syncIdentifier;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)deletionDate;
- (long long)deletionReason;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeletionDate;
- (bool)hasDeletionReason;
- (bool)hasMessageVersion;
- (bool)hasSyncIdentifier;
- (bool)hasSyncIdentity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageVersion;
- (bool)readFrom:(id)arg1;
- (void)setDeletionDate:(double)arg1;
- (void)setDeletionReason:(long long)arg1;
- (void)setHasDeletionDate:(bool)arg1;
- (void)setHasDeletionReason:(bool)arg1;
- (void)setMessageVersion:(id)arg1;
- (void)setSyncIdentifier:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (id)syncIdentifier;
- (id)syncIdentity;
- (void)writeTo:(id)arg1;

@end
