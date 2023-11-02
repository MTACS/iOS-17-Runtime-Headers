
@interface MTRUnitTestingClusterNullablesAndOptionalsStruct : NSObject <NSCopying> {
    NSNumber * _nullableInt;
    NSArray * _nullableList;
    NSNumber * _nullableOptionalInt;
    NSArray * _nullableOptionalList;
    NSString * _nullableOptionalString;
    MTRUnitTestingClusterSimpleStruct * _nullableOptionalStruct;
    NSString * _nullableString;
    MTRUnitTestingClusterSimpleStruct * _nullableStruct;
    NSNumber * _optionalInt;
    NSArray * _optionalList;
    NSString * _optionalString;
    MTRUnitTestingClusterSimpleStruct * _optionalStruct;
}

@property (nonatomic, copy) NSNumber *nullableInt;
@property (nonatomic, copy) NSArray *nullableList;
@property (nonatomic, copy) NSNumber *nullableOptionalInt;
@property (nonatomic, copy) NSArray *nullableOptionalList;
@property (nonatomic, copy) NSString *nullableOptionalString;
@property (nonatomic, copy) MTRUnitTestingClusterSimpleStruct *nullableOptionalStruct;
@property (nonatomic, copy) NSString *nullableString;
@property (nonatomic, copy) MTRUnitTestingClusterSimpleStruct *nullableStruct;
@property (nonatomic, copy) NSNumber *optionalInt;
@property (nonatomic, copy) NSArray *optionalList;
@property (nonatomic, copy) NSString *optionalString;
@property (nonatomic, copy) MTRUnitTestingClusterSimpleStruct *optionalStruct;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)nullableInt;
- (id)nullableList;
- (id)nullableOptionalInt;
- (id)nullableOptionalList;
- (id)nullableOptionalString;
- (id)nullableOptionalStruct;
- (id)nullableString;
- (id)nullableStruct;
- (id)optionalInt;
- (id)optionalList;
- (id)optionalString;
- (id)optionalStruct;
- (void)setNullableInt:(id)arg1;
- (void)setNullableList:(id)arg1;
- (void)setNullableOptionalInt:(id)arg1;
- (void)setNullableOptionalList:(id)arg1;
- (void)setNullableOptionalString:(id)arg1;
- (void)setNullableOptionalStruct:(id)arg1;
- (void)setNullableString:(id)arg1;
- (void)setNullableStruct:(id)arg1;
- (void)setOptionalInt:(id)arg1;
- (void)setOptionalList:(id)arg1;
- (void)setOptionalString:(id)arg1;
- (void)setOptionalStruct:(id)arg1;

@end
