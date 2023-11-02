
@interface MBSnapshot : NSObject <NSCopying, NSSecureCoding> {
    long long  _accountType;
    long long  _backupPolicy;
    long long  _backupType;
    NSString * _backupUUID;
    NSString * _buildVersion;
    NSDate * _created;
    NSDate * _date;
    NSString * _deviceName;
    long long  _estimatedRestoreSize;
    bool  _isCompatible;
    NSDate * _modified;
    unsigned long long  _quotaReserved;
    NSString * _requiredProductVersion;
    unsigned long long  _snapshotID;
    NSString * _snapshotUUID;
    int  _state;
    NSString * _systemVersion;
}

@property (nonatomic) long long accountType;
@property (nonatomic) long long backupPolicy;
@property (nonatomic) long long backupType;
@property (nonatomic, readonly) NSString *backupUUID;
@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly) NSDate *created;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic) long long estimatedRestoreSize;
@property (nonatomic, readonly) bool isCompatible;
@property (nonatomic, readonly) NSDate *modified;
@property (nonatomic, readonly) unsigned long long quotaReserved;
@property (nonatomic, retain) NSString *requiredProductVersion;
@property (nonatomic, readonly) unsigned long long snapshotID;
@property (nonatomic, readonly) NSString *snapshotUUID;
@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) NSString *systemVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)accountType;
- (long long)backupPolicy;
- (long long)backupType;
- (id)backupUUID;
- (id)buildVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)created;
- (id)date;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (long long)estimatedRestoreSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapshotID:(unsigned long long)arg1 backupUUID:(id)arg2 snapshotUUID:(id)arg3 deviceName:(id)arg4 date:(id)arg5 created:(id)arg6 modified:(id)arg7 state:(int)arg8 isCompatible:(bool)arg9 systemVersion:(id)arg10 buildVersion:(id)arg11 quotaReserved:(unsigned long long)arg12 backupType:(long long)arg13 backupPolicy:(long long)arg14 accountType:(long long)arg15;
- (bool)isCompatible;
- (id)modified;
- (unsigned long long)quotaReserved;
- (id)requiredProductVersion;
- (void)setAccountType:(long long)arg1;
- (void)setBackupPolicy:(long long)arg1;
- (void)setBackupType:(long long)arg1;
- (void)setEstimatedRestoreSize:(long long)arg1;
- (void)setRequiredProductVersion:(id)arg1;
- (unsigned long long)snapshotID;
- (id)snapshotUUID;
- (int)state;
- (id)systemVersion;

@end
