
@interface TRIPBEnumDescriptorProto : TRIPBMessage

@property (nonatomic) bool hasName;
@property (nonatomic) bool hasOptions;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) TRIPBEnumOptions *options;
@property (nonatomic, retain) NSMutableArray *reservedNameArray;
@property (nonatomic, readonly) unsigned long long reservedNameArray_Count;
@property (nonatomic, retain) NSMutableArray *reservedRangeArray;
@property (nonatomic, readonly) unsigned long long reservedRangeArray_Count;
@property (nonatomic, retain) NSMutableArray *valueArray;
@property (nonatomic, readonly) unsigned long long valueArray_Count;

+ (id)descriptor;

@end
