
@interface FPCKStats : NSObject <NSCopying, NSSecureCoding> {
    long long  _numberOfBrokenFilesInBackupManifestCheck;
    long long  _numberOfBrokenFilesInFSAndFSSnapshotCheck;
    long long  _numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;
    long long  _numberOfBrokenFilesInReconciliationTableCheck;
    long long  _numberOfFilesChecked;
}

@property (nonatomic) long long numberOfBrokenFilesInBackupManifestCheck;
@property (nonatomic) long long numberOfBrokenFilesInFSAndFSSnapshotCheck;
@property (nonatomic) long long numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;
@property (nonatomic) long long numberOfBrokenFilesInReconciliationTableCheck;
@property (nonatomic) long long numberOfFilesChecked;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)numberOfBrokenFilesInBackupManifestCheck;
- (long long)numberOfBrokenFilesInFSAndFSSnapshotCheck;
- (long long)numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;
- (long long)numberOfBrokenFilesInReconciliationTableCheck;
- (long long)numberOfFilesChecked;
- (void)setNumberOfBrokenFilesInBackupManifestCheck:(long long)arg1;
- (void)setNumberOfBrokenFilesInFSAndFSSnapshotCheck:(long long)arg1;
- (void)setNumberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck:(long long)arg1;
- (void)setNumberOfBrokenFilesInReconciliationTableCheck:(long long)arg1;
- (void)setNumberOfFilesChecked:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

- (id)br_description;
- (BOOL)br_getStatsErrorBitmap;

@end
