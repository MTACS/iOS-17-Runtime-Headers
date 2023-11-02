
@interface HDCodableWorkoutZonesAssociation : PBCodable <NSCopying> {
    HDCodableSyncIdentity * _syncIdentity;
    NSData * _workoutUUID;
    NSData * _zonesSampleUUID;
}

@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, readonly) bool hasWorkoutUUID;
@property (nonatomic, readonly) bool hasZonesSampleUUID;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic, retain) NSData *workoutUUID;
@property (nonatomic, retain) NSData *zonesSampleUUID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSyncIdentity;
- (bool)hasWorkoutUUID;
- (bool)hasZonesSampleUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setWorkoutUUID:(id)arg1;
- (void)setZonesSampleUUID:(id)arg1;
- (id)syncIdentity;
- (id)workoutUUID;
- (void)writeTo:(id)arg1;
- (id)zonesSampleUUID;

@end
