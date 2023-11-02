
@interface SKIDirectInvocation : NSObject

+ (id)makeParseWithDirectInvocationPayload:(id)arg1;
+ (id)runSiriKitExecutorCommandWithContext:(id)arg1 parse:(id)arg2 appBundleId:(id)arg3;
+ (id)runSiriKitExecutorCommandWithContext:(id)arg1 payload:(id)arg2;
+ (id)wrapCommandInStartLocalRequest:(id)arg1;

@end
