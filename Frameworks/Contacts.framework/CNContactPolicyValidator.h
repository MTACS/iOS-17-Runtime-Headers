
@interface CNContactPolicyValidator : NSObject

+ (id)contactFromContact:(id)arg1 conformingToPolicy:(id)arg2 options:(unsigned long long)arg3;
+ (id)contactFromContact:(id)arg1 conformingToPolicy:(id)arg2 options:(unsigned long long)arg3 valueToStringTransform:(id /* block */)arg4;
+ (bool)shouldIgnoreValidationCheckForProperty:(id)arg1;

@end
