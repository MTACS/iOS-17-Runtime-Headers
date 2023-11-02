
@interface PKCloudRecordPassCatalog : PKCloudRecordObject {
    PKCatalog * _catalog;
}

@property (nonatomic, retain) PKCatalog *catalog;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(bool)arg1;
- (void)applyCloudRecordObject:(id)arg1;
- (id)catalog;
- (long long)compare:(id)arg1;
- (id)description;
- (id)descriptionWithItem:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (void)setCatalog:(id)arg1;

@end
