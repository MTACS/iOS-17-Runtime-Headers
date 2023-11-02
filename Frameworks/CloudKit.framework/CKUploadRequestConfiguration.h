
@interface CKUploadRequestConfiguration : NSObject <CKSQLiteItem, NSCopying, NSSecureCoding> {
    NSString * _applicationBundleIdentifierOverride;
    NSString * _containerIdentifier;
    CKRecordZoneID * _repairZoneID;
}

@property (copy) NSString *applicationBundleIdentifierOverride;
@property (copy) NSString *containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) CKRecordZoneID *repairZoneID;
@property (readonly) Class superclass;

+ (id)configurationFromBaseContainer:(id)arg1;
+ (id)resolvedConfigurationWithBaseContainer:(id)arg1 overrides:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifierOverride;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initFromBaseContainer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSqliteRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)repairZoneID;
- (void)setApplicationBundleIdentifierOverride:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setRepairZoneID:(id)arg1;
- (id)sqliteRepresentation;

@end
