
@interface TRIPBSourceCodeInfo : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *locationArray;
@property (nonatomic, readonly) unsigned long long locationArray_Count;

+ (id)descriptor;

@end
