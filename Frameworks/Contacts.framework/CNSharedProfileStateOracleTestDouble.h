
@interface CNSharedProfileStateOracleTestDouble : CNSharedProfileStateOracle

+ (bool)isFeatureEnabled;
+ (bool)shouldBypassPersistenceCheck;

@end
