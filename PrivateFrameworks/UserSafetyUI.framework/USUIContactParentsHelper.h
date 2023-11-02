
@interface USUIContactParentsHelper : NSObject

+ (void)obtainChatWithParentsURLForInterventionType:(long long)arg1 completionHandler:(id /* block */)arg2;
+ (void)obtainParentsForCurrentContact:(id /* block */)arg1;
+ (void)openChatWithParentsForInterventionType:(long long)arg1;
+ (void)openChatWithURL:(id)arg1;
+ (id)urlFromAddressList:(id)arg1;

@end
