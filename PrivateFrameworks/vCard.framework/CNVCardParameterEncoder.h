
@interface CNVCardParameterEncoder : NSObject

+ (id)encodeParameterValue:(id)arg1;
+ (bool)mustEncloseStringInQuotes:(id)arg1;
+ (id)stringByEnclosingInQuotesIfNecessary:(id)arg1;
+ (id)stringByReplacingEncodableCharactersInString:(id)arg1;
+ (id)substitutions;

@end
