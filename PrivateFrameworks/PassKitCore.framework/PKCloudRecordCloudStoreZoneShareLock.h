
@interface PKCloudRecordCloudStoreZoneShareLock : PKCloudRecordObject {
    PKCloudStoreZoneShareLock * _cloudStoreZoneShareLock;
}

@property (nonatomic, retain) PKCloudStoreZoneShareLock *cloudStoreZoneShareLock;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(bool)arg1;
- (void)applyCloudRecordObject:(id)arg1;
- (id)cloudStoreZoneShareLock;
- (long long)compare:(id)arg1;
- (id)description;
- (id)descriptionWithItem:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (void)setCloudStoreZoneShareLock:(id)arg1;

@end
