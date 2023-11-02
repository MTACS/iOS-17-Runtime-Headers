
@interface PCStatusConditions : NSObject

+ (void)clearStatusCondition:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)isStatusConditionRegistered:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)setStatusCondition:(id)arg1 completionHandler:(id /* block */)arg2;

@end
