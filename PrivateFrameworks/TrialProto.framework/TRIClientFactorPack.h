
@interface TRIClientFactorPack : TRIPBMessage

@property (nonatomic, retain) NSMutableArray *factorLevelArray;
@property (nonatomic, readonly) unsigned long long factorLevelArray_Count;
@property (nonatomic, copy) NSString *factorPackId;
@property (nonatomic) bool hasFactorPackId;
@property (nonatomic) bool hasSelectedNamespace;
@property (nonatomic, retain) TRIClientSelectedNamespace *selectedNamespace;

+ (id)descriptor;

@end
