
@interface TRICKServerEnvironmentReader : NSObject

+ (long long)currentEnvironment;
+ (int)currentPopulation;
+ (long long)validatedEnvironmentFromNumber:(id)arg1;
+ (int)validatedPopulationFromNumber:(long long)arg1;

@end
