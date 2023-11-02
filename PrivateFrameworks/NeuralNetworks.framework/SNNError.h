
@interface SNNError : NSObject

+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)invalidEspressoConfigurationErrorForMethod:(id)arg1 description:(id)arg2;
+ (id)invalidEspressoContextErrorForMethod:(id)arg1 description:(id)arg2;
+ (id)invalidEspressoNetworkErrorForMethod:(id)arg1 description:(id)arg2;
+ (id)invalidEspressoPlanErrorForMethod:(id)arg1 description:(id)arg2;
+ (id)invalidInputErrorForMethod:(id)arg1 description:(id)arg2;
+ (id)invalidMILProgramErrorForMethod:(id)arg1 description:(id)arg2;
+ (id)invalidStateErrorForMethod:(id)arg1 description:(id)arg2;

@end
