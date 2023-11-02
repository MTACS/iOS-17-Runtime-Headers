
@interface MTRUnitTestingClusterTestFabricScoped : NSObject <NSCopying> {
    NSNumber * _fabricIndex;
    NSString * _fabricSensitiveCharString;
    NSNumber * _fabricSensitiveInt8u;
    NSArray * _fabricSensitiveInt8uList;
    MTRUnitTestingClusterSimpleStruct * _fabricSensitiveStruct;
    NSNumber * _nullableFabricSensitiveInt8u;
    NSNumber * _nullableOptionalFabricSensitiveInt8u;
    NSNumber * _optionalFabricSensitiveInt8u;
}

@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) NSString *fabricSensitiveCharString;
@property (nonatomic, copy) NSNumber *fabricSensitiveInt8u;
@property (nonatomic, copy) NSArray *fabricSensitiveInt8uList;
@property (nonatomic, copy) MTRUnitTestingClusterSimpleStruct *fabricSensitiveStruct;
@property (nonatomic, copy) NSNumber *nullableFabricSensitiveInt8u;
@property (nonatomic, copy) NSNumber *nullableOptionalFabricSensitiveInt8u;
@property (nonatomic, copy) NSNumber *optionalFabricSensitiveInt8u;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fabricIndex;
- (id)fabricSensitiveCharString;
- (id)fabricSensitiveInt8u;
- (id)fabricSensitiveInt8uList;
- (id)fabricSensitiveStruct;
- (id)init;
- (id)nullableFabricSensitiveInt8u;
- (id)nullableOptionalFabricSensitiveInt8u;
- (id)optionalFabricSensitiveInt8u;
- (void)setFabricIndex:(id)arg1;
- (void)setFabricSensitiveCharString:(id)arg1;
- (void)setFabricSensitiveInt8u:(id)arg1;
- (void)setFabricSensitiveInt8uList:(id)arg1;
- (void)setFabricSensitiveStruct:(id)arg1;
- (void)setNullableFabricSensitiveInt8u:(id)arg1;
- (void)setNullableOptionalFabricSensitiveInt8u:(id)arg1;
- (void)setOptionalFabricSensitiveInt8u:(id)arg1;

@end
