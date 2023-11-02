
@interface HMBCloudZoneID : HMBCloudID <HMBLocalZoneID, HMBModelObjectStorage> {
    NSData * _token;
    CKRecordZoneID * _zoneID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *token;
@property (readonly, copy) CKRecordZoneID *zoneID;

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2 zoneID:(id)arg3;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2 zoneID:(id)arg3 name:(id)arg4 modelID:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)token;
- (id)zoneID;

@end
