
@interface TRIPBEnumValue : TRIPBMessage

@property (nonatomic, copy) NSString *name;
@property (nonatomic) int number;
@property (nonatomic, retain) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;

+ (id)descriptor;

@end
