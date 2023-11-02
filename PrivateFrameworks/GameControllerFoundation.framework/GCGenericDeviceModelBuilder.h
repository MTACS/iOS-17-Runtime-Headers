
@interface GCGenericDeviceModelBuilder : NSObject {
    GCGenericDeviceDriverModel * _driver;
    NSNumber * _formFitting;
    GCGenericDevicePhysicalInputModel * _physicalInput;
    NSString * _productCategory;
    NSString * _productName;
}

@property (nonatomic, copy) GCGenericDeviceDriverModel *driver;
@property (nonatomic, copy) NSNumber *formFitting;
@property (nonatomic, copy) GCGenericDevicePhysicalInputModel *physicalInput;
@property (nonatomic, copy) NSString *productCategory;
@property (nonatomic, copy) NSString *productName;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (id)driver;
- (id)formFitting;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)physicalInput;
- (id)productCategory;
- (id)productName;
- (void)reset;
- (void)setDriver:(id)arg1;
- (void)setFormFitting:(id)arg1;
- (void)setPhysicalInput:(id)arg1;
- (void)setProductCategory:(id)arg1;
- (void)setProductName:(id)arg1;

@end
