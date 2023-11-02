
@interface MTRTestClusterClusterNullablesAndOptionalsStruct : MTRUnitTestingClusterNullablesAndOptionalsStruct

@property (nonatomic, copy) NSNumber *nullableInt;
@property (nonatomic, copy) NSArray *nullableList;
@property (nonatomic, copy) NSNumber *nullableOptionalInt;
@property (nonatomic, copy) NSArray *nullableOptionalList;
@property (nonatomic, copy) NSString *nullableOptionalString;
@property (nonatomic, copy) MTRTestClusterClusterSimpleStruct *nullableOptionalStruct;
@property (nonatomic, copy) NSString *nullableString;
@property (nonatomic, copy) MTRTestClusterClusterSimpleStruct *nullableStruct;
@property (nonatomic, copy) NSNumber *optionalInt;
@property (nonatomic, copy) NSArray *optionalList;
@property (nonatomic, copy) NSString *optionalString;
@property (nonatomic, copy) MTRTestClusterClusterSimpleStruct *optionalStruct;

@end
