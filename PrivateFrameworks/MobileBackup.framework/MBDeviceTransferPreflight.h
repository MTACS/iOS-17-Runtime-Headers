
@interface MBDeviceTransferPreflight : NSObject <NSCopying, NSSecureCoding> {
    NSString * _activeAppleID;
    NSDictionary * _appleIDs;
    unsigned long long  _sourceDeviceDataSize;
    unsigned long long  _sourcePurgeableSpaceSize;
    unsigned long long  _targetDeviceFreeSpaceSize;
    NSString * _uuid;
}

@property (nonatomic, retain) NSString *activeAppleID;
@property (nonatomic, retain) NSDictionary *appleIDs;
@property (nonatomic) unsigned long long sourceDeviceDataSize;
@property (nonatomic) unsigned long long sourcePurgeableSpaceSize;
@property (nonatomic) unsigned long long targetDeviceFreeSpaceSize;
@property (nonatomic, retain) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeAppleID;
- (id)appleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setActiveAppleID:(id)arg1;
- (void)setAppleIDs:(id)arg1;
- (void)setSourceDeviceDataSize:(unsigned long long)arg1;
- (void)setSourcePurgeableSpaceSize:(unsigned long long)arg1;
- (void)setTargetDeviceFreeSpaceSize:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (unsigned long long)sourceDeviceDataSize;
- (unsigned long long)sourcePurgeableSpaceSize;
- (unsigned long long)targetDeviceFreeSpaceSize;
- (id)uuid;

@end
