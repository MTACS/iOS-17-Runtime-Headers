
@interface MBStartRestoreOptions : NSObject <NSCopying, NSSecureCoding> {
    MBCellularAccess * _cellularAccess;
    NSSet * _excludedAppBundleIDs;
}

@property (nonatomic, copy) MBCellularAccess *cellularAccess;
@property (nonatomic, copy) NSSet *excludedAppBundleIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cellularAccess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedAppBundleIDs;
- (id)initWithCoder:(id)arg1;
- (void)setCellularAccess:(id)arg1;
- (void)setExcludedAppBundleIDs:(id)arg1;

@end
