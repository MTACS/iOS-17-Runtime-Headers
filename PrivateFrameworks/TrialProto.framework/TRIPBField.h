
@interface TRIPBField : TRIPBMessage

@property (nonatomic) int cardinality;
@property (nonatomic, copy) NSString *defaultValue;
@property (nonatomic, copy) NSString *jsonName;
@property (nonatomic) int kind;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int number;
@property (nonatomic) int oneofIndex;
@property (nonatomic, retain) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;
@property (nonatomic) bool packed;
@property (nonatomic, copy) NSString *typeURL;

+ (id)descriptor;

@end
