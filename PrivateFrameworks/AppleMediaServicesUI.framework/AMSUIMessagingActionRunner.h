
@interface AMSUIMessagingActionRunner : NSObject

+ (bool)canRespondToDeeplink:(id)arg1;
+ (bool)canRespondToIdentifier:(id)arg1;
+ (id)performWithDeeplink:(id)arg1 context:(id)arg2 parameters:(id)arg3;
+ (id)performWithIdentifier:(id)arg1 context:(id)arg2 parameters:(id)arg3;

- (void).cxx_destruct;
- (id)init;

@end
