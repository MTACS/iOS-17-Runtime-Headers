
@interface TRIFactors : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *factorArray;
@property (nonatomic, readonly) unsigned long long factorArray_Count;

+ (id)descriptor;

@end
