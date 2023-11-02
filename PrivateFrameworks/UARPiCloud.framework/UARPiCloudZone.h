
@interface UARPiCloudZone : NSObject {
    CKServerChangeToken * _changeToken;
    NSString * _containerID;
    CKRecordZoneID * _zoneID;
}

@property (copy) CKServerChangeToken *changeToken;
@property (copy) NSString *containerID;
@property (copy) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (id)changeToken;
- (id)containerID;
- (id)initWithZoneID:(id)arg1 containerID:(id)arg2;
- (void)setChangeToken:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)zoneID;

@end
