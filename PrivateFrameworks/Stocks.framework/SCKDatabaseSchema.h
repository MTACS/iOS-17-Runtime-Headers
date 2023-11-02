
@interface SCKDatabaseSchema : NSObject {
    long long  _environment;
    NSString * _name;
    long long  _security;
    NSArray * _zoneSchemas;
}

@property (nonatomic, readonly, copy) CKContainerID *containerID;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool requiresDeviceToDeviceEncryption;
@property (nonatomic) long long security;
@property (nonatomic, readonly, copy) NSArray *zoneIDs;
@property (nonatomic, copy) NSArray *zoneSchemas;

- (void).cxx_destruct;
- (id)containerID;
- (long long)environment;
- (id)initWithName:(id)arg1 environment:(long long)arg2 security:(long long)arg3 zoneSchemas:(id)arg4;
- (id)name;
- (bool)requiresDeviceToDeviceEncryption;
- (id)schemaForZoneName:(id)arg1;
- (long long)security;
- (void)setSecurity:(long long)arg1;
- (void)setZoneSchemas:(id)arg1;
- (id)zoneIDs;
- (id)zoneSchemas;

@end
