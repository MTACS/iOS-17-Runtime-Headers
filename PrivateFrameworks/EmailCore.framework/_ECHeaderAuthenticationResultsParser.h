
@interface _ECHeaderAuthenticationResultsParser : NSObject

+ (bool)_propertiesWithScanner:(id)arg1 intoArray:(id*)arg2;
+ (bool)_scanToCFWSOrEqualWithScanner:(id)arg1 intoString:(id*)arg2;
+ (bool)_scanToCFWSOrPeriodOrSemicolonWithScanner:(id)arg1 intoString:(id*)arg2;
+ (bool)_scanToCFWSOrSemicolonWithScanner:(id)arg1 intoString:(id*)arg2;
+ (bool)_skipCFWSWithScanner:(id)arg1;
+ (bool)_statementWithScanner:(id)arg1 intoStatement:(id*)arg2;
+ (bool)_statementsWithScanner:(id)arg1 intoArray:(id*)arg2;
+ (long long)_versionWithScanner:(id)arg1;

@end
