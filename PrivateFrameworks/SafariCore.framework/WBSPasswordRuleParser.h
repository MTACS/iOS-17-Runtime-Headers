
@interface WBSPasswordRuleParser : NSObject

+ (id)_passwordRuleSetFromPasswordRules:(id)arg1;
+ (id)mergePasswordRuleSet:(id)arg1 withPasswordRuleSet:(id)arg2;
+ (id)parsePasswordRules:(id)arg1 error:(id*)arg2;

@end
