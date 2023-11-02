
@interface TRIPBFieldMask : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *pathsArray;
@property (nonatomic, readonly) unsigned long long pathsArray_Count;

+ (id)descriptor;

@end
