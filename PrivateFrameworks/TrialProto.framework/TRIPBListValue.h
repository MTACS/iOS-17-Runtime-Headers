
@interface TRIPBListValue : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *valuesArray;
@property (nonatomic, readonly) unsigned long long valuesArray_Count;

+ (id)descriptor;

@end
