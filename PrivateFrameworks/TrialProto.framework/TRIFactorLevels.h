
@interface TRIFactorLevels : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *factorLevelArray;
@property (nonatomic, readonly) unsigned long long factorLevelArray_Count;

+ (id)descriptor;

@end
