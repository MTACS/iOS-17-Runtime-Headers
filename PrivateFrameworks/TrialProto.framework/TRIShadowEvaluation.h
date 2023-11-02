
@interface TRIShadowEvaluation : TRIPBMessage

@property (nonatomic, retain) TRIClientBackgroundMLTask *clientBackgroundMlTask;
@property (nonatomic) bool hasClientBackgroundMlTask;
@property (nonatomic, retain) TRIMLRuntimeEvaluation *mlRuntime;
@property (nonatomic, readonly) int typeOneOfCase;

+ (id)descriptor;

@end
