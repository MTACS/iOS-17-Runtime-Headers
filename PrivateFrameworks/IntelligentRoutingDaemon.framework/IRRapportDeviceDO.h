
@interface IRRapportDeviceDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _deviceModel;
    NSString * _iCloudId;
    NSString * _idsID;
    NSString * _mediaRemoteIdentifier;
    NSString * _mediaRouteIdentifier;
    NSString * _name;
    NSString * _rapportEffectiveID;
}

@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSString *iCloudId;
@property (nonatomic, readonly) NSString *idsID;
@property (nonatomic, readonly) NSString *mediaRemoteIdentifier;
@property (nonatomic, readonly) NSString *mediaRouteIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *rapportEffectiveID;

+ (id)rapportDeviceDOWithRapportEffectiveID:(id)arg1 idsID:(id)arg2 name:(id)arg3 deviceModel:(id)arg4 mediaRemoteIdentifier:(id)arg5 iCloudId:(id)arg6 mediaRouteIdentifier:(id)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementDeviceModel:(id)arg1;
- (id)copyWithReplacementICloudId:(id)arg1;
- (id)copyWithReplacementIdsID:(id)arg1;
- (id)copyWithReplacementMediaRemoteIdentifier:(id)arg1;
- (id)copyWithReplacementMediaRouteIdentifier:(id)arg1;
- (id)copyWithReplacementName:(id)arg1;
- (id)copyWithReplacementRapportEffectiveID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceModel;
- (void)encodeWithCoder:(id)arg1;
- (id)exportAsDictionary;
- (unsigned long long)hash;
- (id)iCloudId;
- (id)idsID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRapportEffectiveID:(id)arg1 idsID:(id)arg2 name:(id)arg3 deviceModel:(id)arg4 mediaRemoteIdentifier:(id)arg5 iCloudId:(id)arg6 mediaRouteIdentifier:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRapportDeviceDO:(id)arg1;
- (id)mediaRemoteIdentifier;
- (id)mediaRouteIdentifier;
- (id)name;
- (id)rapportEffectiveID;

@end
