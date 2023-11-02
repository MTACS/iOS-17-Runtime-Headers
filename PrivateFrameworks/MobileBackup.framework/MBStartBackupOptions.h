
@interface MBStartBackupOptions : NSObject <NSCopying, NSSecureCoding> {
    long long  _backupPolicy;
    MBCellularAccess * _cellularAccess;
}

@property (nonatomic) long long backupPolicy;
@property (nonatomic, copy) MBCellularAccess *cellularAccess;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)backupPolicy;
- (id)cellularAccess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackupPolicy:(long long)arg1;
- (void)setCellularAccess:(id)arg1;

@end
