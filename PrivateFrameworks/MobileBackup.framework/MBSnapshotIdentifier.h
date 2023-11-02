
@interface MBSnapshotIdentifier : NSObject <NSSecureCoding> {
    NSString * _backupUDID;
    NSString * _backupUUID;
    unsigned long long  _snapshotID;
    NSString * _snapshotUUID;
}

@property (nonatomic, retain) NSString *backupUDID;
@property (nonatomic, readonly) NSString *backupUUID;
@property (nonatomic) unsigned long long snapshotID;
@property (nonatomic, readonly) NSString *snapshotUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backupUDID;
- (id)backupUUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2;
- (id)initWithBackupUUID:(id)arg1 snapshotUUID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setBackupUDID:(id)arg1;
- (void)setSnapshotID:(unsigned long long)arg1;
- (unsigned long long)snapshotID;
- (id)snapshotUUID;

@end
