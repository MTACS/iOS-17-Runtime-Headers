
@interface POAnalytics : NSObject

+ (void)analyticsForLoginConfiguration:(id)arg1;
+ (void)analyticsForLoginManager:(id)arg1;
+ (void)analyticsForLoginType:(id)arg1 result:(id)arg2;
+ (void)analyticsForPasswordChange:(bool)arg1 credentialNeeded:(bool)arg2 result:(bool)arg3;
+ (void)analyticsForRegistrationType:(id)arg1 options:(long long)arg2 result:(long long)arg3;
+ (void)analyticsForStatus;
+ (void)analyticsForTestMessages;

@end
