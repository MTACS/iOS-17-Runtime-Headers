
@interface CNSocialProfileURLParser : NSObject

+ (void)enumerateMatchesWithRegexPattern:(id)arg1 inString:(id)arg2 withBlock:(id /* block */)arg3;
+ (void)enumerateServiceMatchesForURLString:(id)arg1 withBlock:(id /* block */)arg2;
+ (id)parseSocialProfileURL:(id)arg1;
+ (id)parseURLStringByInference:(id)arg1;
+ (id)parseURLStringWithRegularExpressions:(id)arg1;
+ (id)servicesDictionary;

@end
