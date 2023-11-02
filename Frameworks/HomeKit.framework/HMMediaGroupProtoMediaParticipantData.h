
@interface HMMediaGroupProtoMediaParticipantData : PBCodable <NSCopying> {
    NSMutableArray * _backupGroups;
    HMMediaGroupProtoMediaDestination * _destination;
    HMMediaGroupProtoMediaDestinationControllerData * _destinationController;
}

@property (nonatomic, retain) NSMutableArray *backupGroups;
@property (nonatomic, retain) HMMediaGroupProtoMediaDestination *destination;
@property (nonatomic, retain) HMMediaGroupProtoMediaDestinationControllerData *destinationController;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic, readonly) bool hasDestinationController;

+ (Class)backupGroupsType;

- (void).cxx_destruct;
- (void)addBackupGroups:(id)arg1;
- (id)backupGroups;
- (id)backupGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)backupGroupsCount;
- (void)clearBackupGroups;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (id)destinationController;
- (id)dictionaryRepresentation;
- (bool)hasDestination;
- (bool)hasDestinationController;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBackupGroups:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDestinationController:(id)arg1;
- (void)writeTo:(id)arg1;

@end
