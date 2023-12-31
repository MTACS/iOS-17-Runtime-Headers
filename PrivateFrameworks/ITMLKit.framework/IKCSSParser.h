
@interface IKCSSParser : NSObject

+ (id)consumeAtRule:(id)arg1;
+ (id)consumeComponentValue:(id)arg1;
+ (id)consumeDeclaration:(id)arg1;
+ (id)consumeDeclarationList:(id)arg1;
+ (id)consumeFunction:(id)arg1 fromToken:(id)arg2;
+ (id)consumeQualifiedRule:(id)arg1;
+ (id)consumeRules:(id)arg1 topLevel:(bool)arg2;
+ (id)consumeSimpleBlock:(id)arg1 startTokenType:(long long)arg2;
+ (id)parse:(id)arg1;
+ (id)parseRulesList:(id)arg1;
+ (id)parseStylesheet:(id)arg1;

@end
