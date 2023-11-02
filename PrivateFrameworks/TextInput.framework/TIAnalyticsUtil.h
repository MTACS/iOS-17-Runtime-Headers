
@interface TIAnalyticsUtil : NSObject

+ (id)bucketNumber:(id)arg1 bucketThresholds:(id)arg2 bucketValues:(id)arg3;
+ (id)bucketPercentageWithNumber:(id)arg1;
+ (id)bucketPercentageWithNumerator:(id)arg1 andDenominator:(id)arg2;
+ (id)bucketPercentageWithValue:(double)arg1;
+ (id)bucketRatioWithNumber:(id)arg1 bucketCount:(int)arg2;
+ (id)bucketRatioWithNumerator:(id)arg1 andDenominator:(id)arg2 bucketCount:(int)arg3;
+ (id)bucketRatioWithValue:(double)arg1 bucketCount:(int)arg2;
+ (int)computeCommonExtentForArrays:(id)arg1;
+ (id)constrainInteger:(id)arg1 toMinimum:(id)arg2 andMaximum:(id)arg3;
+ (id)createStringByReplacingStylizedQuotesToStraightQuotes:(id)arg1;
+ (bool)hasNonWhitespaceNonPunctuationText:(id)arg1;
+ (id)indexesForValidRatiosInArray:(id)arg1;
+ (bool)isArray:(id)arg1;
+ (bool)isBoolean:(id)arg1;
+ (bool)isDictionary:(id)arg1;
+ (bool)isFloat:(id)arg1;
+ (bool)isInteger:(id)arg1;
+ (bool)isNumber:(id)arg1;
+ (bool)isReportableClientId:(id)arg1;
+ (bool)isString:(id)arg1;
+ (bool)isStylizedString:(id)arg1 equalToString:(id)arg2;
+ (id)roundCount:(id)arg1 toSignificantDigits:(long long)arg2;
+ (id)roundNumber:(id)arg1 toSignificantDigits:(id)arg2;
+ (id)toFloat:(id)arg1;
+ (id)toInteger:(id)arg1;

@end
