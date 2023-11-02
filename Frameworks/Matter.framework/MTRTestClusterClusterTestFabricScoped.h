
@interface MTRTestClusterClusterTestFabricScoped : MTRUnitTestingClusterTestFabricScoped

@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) NSString *fabricSensitiveCharString;
@property (nonatomic, copy) NSNumber *fabricSensitiveInt8u;
@property (nonatomic, copy) NSArray *fabricSensitiveInt8uList;
@property (nonatomic, copy) MTRTestClusterClusterSimpleStruct *fabricSensitiveStruct;
@property (nonatomic, copy) NSNumber *nullableFabricSensitiveInt8u;
@property (nonatomic, copy) NSNumber *nullableOptionalFabricSensitiveInt8u;
@property (nonatomic, copy) NSNumber *optionalFabricSensitiveInt8u;

@end
