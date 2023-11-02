
@interface CRDaemonController : NSObject

+ (void)controlWithParameters:(id)arg1 withReply:(id /* block */)arg2;
+ (bool)doLaunchControl:(id)arg1 action:(id)arg2;
+ (id)getAllowedListFromEntitlements:(id)arg1;
+ (id)safeGetStringParam:(id)arg1 key:(id)arg2;

@end
