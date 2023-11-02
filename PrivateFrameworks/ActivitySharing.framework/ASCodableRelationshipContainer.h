
@interface ASCodableRelationshipContainer : PBCodable <NSCopying> {
    NSData * _activityDataShareIDByZoneName;
    struct { 
        unsigned int version : 1; 
    }  _has;
    ASCodableCloudKitRelationship * _relationship;
    NSData * _relationshipShareID;
    NSData * _relationshipZoneShareID;
    NSData * _remoteActivityShareID;
    NSData * _remoteRelationshipShareID;
    NSData * _remoteRelationshipZoneShareID;
    NSData * _systemFieldsOnlyRecord;
    long long  _version;
}

@property (nonatomic, retain) NSData *activityDataShareIDByZoneName;
@property (nonatomic, readonly) bool hasActivityDataShareIDByZoneName;
@property (nonatomic, readonly) bool hasRelationship;
@property (nonatomic, readonly) bool hasRelationshipShareID;
@property (nonatomic, readonly) bool hasRelationshipZoneShareID;
@property (nonatomic, readonly) bool hasRemoteActivityShareID;
@property (nonatomic, readonly) bool hasRemoteRelationshipShareID;
@property (nonatomic, readonly) bool hasRemoteRelationshipZoneShareID;
@property (nonatomic, readonly) bool hasSystemFieldsOnlyRecord;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) ASCodableCloudKitRelationship *relationship;
@property (nonatomic, retain) NSData *relationshipShareID;
@property (nonatomic, retain) NSData *relationshipZoneShareID;
@property (nonatomic, retain) NSData *remoteActivityShareID;
@property (nonatomic, retain) NSData *remoteRelationshipShareID;
@property (nonatomic, retain) NSData *remoteRelationshipZoneShareID;
@property (nonatomic, retain) NSData *systemFieldsOnlyRecord;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (id)activityDataShareIDByZoneName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivityDataShareIDByZoneName;
- (bool)hasRelationship;
- (bool)hasRelationshipShareID;
- (bool)hasRelationshipZoneShareID;
- (bool)hasRemoteActivityShareID;
- (bool)hasRemoteRelationshipShareID;
- (bool)hasRemoteRelationshipZoneShareID;
- (bool)hasSystemFieldsOnlyRecord;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)relationship;
- (id)relationshipShareID;
- (id)relationshipZoneShareID;
- (id)remoteActivityShareID;
- (id)remoteRelationshipShareID;
- (id)remoteRelationshipZoneShareID;
- (void)setActivityDataShareIDByZoneName:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setRelationship:(id)arg1;
- (void)setRelationshipShareID:(id)arg1;
- (void)setRelationshipZoneShareID:(id)arg1;
- (void)setRemoteActivityShareID:(id)arg1;
- (void)setRemoteRelationshipShareID:(id)arg1;
- (void)setRemoteRelationshipZoneShareID:(id)arg1;
- (void)setSystemFieldsOnlyRecord:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)systemFieldsOnlyRecord;
- (long long)version;
- (void)writeTo:(id)arg1;

@end
