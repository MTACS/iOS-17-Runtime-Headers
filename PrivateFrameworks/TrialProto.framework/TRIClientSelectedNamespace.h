
@interface TRIClientSelectedNamespace : TRIPBMessage

@property (nonatomic, retain) TRIPBUInt32Array *compatibilityVersionArray;
@property (nonatomic, readonly) unsigned long long compatibilityVersionArray_Count;
@property (nonatomic) bool hasName;
@property (nonatomic, copy) NSString *name;

+ (id)descriptor;

@end
