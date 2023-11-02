
@interface LNConnectionPolicy : NSObject

+ (bool)_typeExistsWithMangledTypeName:(id)arg1;
+ (id)policyWithActionMetadata:(id)arg1;
+ (id)policyWithActionMetadata:(id)arg1 effectiveBundleIdentifier:(id)arg2 appBundleIdentifier:(id)arg3;
+ (id)policyWithActionMetadata:(id)arg1 signals:(id)arg2;
+ (id)policyWithBundleIdentifier:(id)arg1;
+ (id)policyWithEntityMetadata:(id)arg1;
+ (id)policyWithEntityMetadata:(id)arg1 effectiveBundleIdentifier:(id)arg2 appBundleIdentifier:(id)arg3;
+ (id)policyWithEntityMetadata:(id)arg1 signals:(id)arg2;
+ (id)policyWithEntityQueryMetadata:(id)arg1;
+ (id)policyWithEntityQueryMetadata:(id)arg1 signals:(id)arg2;
+ (id)policyWithQueryMetadata:(id)arg1 effectiveBundleIdentifier:(id)arg2 appBundleIdentifier:(id)arg3;
+ (bool)shouldExecuteActionOnApplicationWithActionMetadata:(id)arg1 reason:(id*)arg2;
+ (bool)shouldExecuteActionOnApplicationWithBundleIdentifier:(id)arg1;
+ (bool)shouldHandleInProcessWithMangledTypeName:(id)arg1 bundleIdentifier:(id)arg2;

@end
