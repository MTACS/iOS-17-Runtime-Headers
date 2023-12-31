
@interface HKNanoSyncPairedDevicesSnapshot : NSObject <NSCopying, NSSecureCoding> {
    HKNanoSyncPairedDeviceInfo * _activeDeviceInfo;
    NSSet * _allDeviceInfos;
}

@property (readonly) HKNanoSyncPairedDeviceInfo *activeDeviceInfo;
@property (readonly, copy) NSSet *allDeviceInfos;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeDeviceInfo;
- (id)allDeviceInfos;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceInfoForSourceBundleIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairedDeviceInfos:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
