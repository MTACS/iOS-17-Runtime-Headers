
@interface MarrsSiriNLUTypesUtils : NSObject

+ (id)QRTokenFromTokenValue:(id)arg1;
+ (id)emptyResponse;
+ (id)firstRewriteHypothesisOfResponse:(id)arg1;
+ (id)firstRewrittenUtteranceOfResponse:(id)arg1;
+ (id)firstRewrittenUtteranceOfResponse:(id)arg1 WithDefaultValue:(id)arg2;
+ (id)firstUtteranceOfRequest:(id)arg1;
+ (id)firstUtteranceOfRequest:(id)arg1 WithDefaultValue:(id)arg2;
+ (id)interactionFromTokenValues:(id)arg1 responseTokenValues:(id)arg2 utteranceString:(id)arg3 locale:(id)arg4;
+ (id)internalTokenFromTokenValue:(id)arg1 cleanValue:(id)arg2 normalizedValues:(id)arg3 isSignificant:(bool)arg4 isWhitespace:(bool)arg5;
+ (bool)isRequestEmpty:(id)arg1;
+ (bool)isResponseEmpty:(id)arg1;
+ (id)requestFromMdfDictionary:(id)arg1 turnsKey:(id)arg2 tokensKey:(id)arg3 utteranceKey:(id)arg4 valueKey:(id)arg5 siriResponseKey:(id)arg6 locale:(id)arg7;
+ (id)utteranceFromTokenValues:(id)arg1 utteranceString:(id)arg2;

@end
