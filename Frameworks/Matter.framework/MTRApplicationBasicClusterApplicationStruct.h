
@interface MTRApplicationBasicClusterApplicationStruct : NSObject <NSCopying> {
    NSString * _applicationID;
    NSNumber * _catalogVendorID;
}

@property (nonatomic, copy) NSString *applicationID;
@property (nonatomic, copy) NSString *applicationId;
@property (nonatomic, copy) NSNumber *catalogVendorID;
@property (nonatomic, copy) NSNumber *catalogVendorId;

- (void).cxx_destruct;
- (id)applicationID;
- (id)applicationId;
- (id)catalogVendorID;
- (id)catalogVendorId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)setApplicationID:(id)arg1;
- (void)setApplicationId:(id)arg1;
- (void)setCatalogVendorID:(id)arg1;
- (void)setCatalogVendorId:(id)arg1;

@end
