
@interface HDCodableNanoSyncMessage : PBCodable <HDNanoSyncDescription, NSCopying> {
    HDCodableNanoSyncActivationRestore * _activationRestore;
    HDCodableNanoSyncChangeSet * _changeSet;
    HDCodableSyncIdentity * _currentSyncIdentity;
    HDCodableSyncEntityVersionMap * _entityVersionMap;
    struct { 
        unsigned int version : 1; 
    }  _has;
    NSData * _healthPairingUUID;
    NSData * _persistentPairingUUID;
    HDCodableNanoSyncStatus * _status;
    int  _version;
}

@property (nonatomic, retain) HDCodableNanoSyncActivationRestore *activationRestore;
@property (nonatomic, retain) HDCodableNanoSyncChangeSet *changeSet;
@property (nonatomic, retain) HDCodableSyncIdentity *currentSyncIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HDCodableSyncEntityVersionMap *entityVersionMap;
@property (nonatomic, readonly) bool hasActivationRestore;
@property (nonatomic, readonly) bool hasChangeSet;
@property (nonatomic, readonly) bool hasCurrentSyncIdentity;
@property (nonatomic, readonly) bool hasEntityVersionMap;
@property (nonatomic, readonly) bool hasHealthPairingUUID;
@property (nonatomic, readonly) bool hasPersistentPairingUUID;
@property (nonatomic, readonly) bool hasStatus;
@property (nonatomic) bool hasVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *healthPairingUUID;
@property (nonatomic, retain) NSData *persistentPairingUUID;
@property (nonatomic, retain) HDCodableNanoSyncStatus *status;
@property (readonly) Class superclass;
@property (nonatomic) int version;

+ (id)messageFromPersistentUserInfo:(id)arg1;
+ (id)messageWithSyncStore:(id)arg1 profile:(id)arg2;

- (void).cxx_destruct;
- (id)activationRestore;
- (id)changeSet;
- (id)copyPersistentUserInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSyncIdentity;
- (id)decodedHealthPairingUUID;
- (id)decodedPersistentPairingUUID;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityVersionMap;
- (bool)hasActivationRestore;
- (bool)hasChangeSet;
- (bool)hasCurrentSyncIdentity;
- (bool)hasEntityVersionMap;
- (bool)hasHealthPairingUUID;
- (bool)hasPersistentPairingUUID;
- (bool)hasStatus;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)healthPairingUUID;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (id)persistentPairingUUID;
- (bool)readFrom:(id)arg1;
- (void)setActivationRestore:(id)arg1;
- (void)setChangeSet:(id)arg1;
- (void)setCurrentSyncIdentity:(id)arg1;
- (void)setEntityVersionMap:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setHealthPairingUUID:(id)arg1;
- (void)setPersistentPairingUUID:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setVersion:(int)arg1;
- (id)status;
- (int)version;
- (void)writeTo:(id)arg1;

@end
