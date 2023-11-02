
@interface RMSandbox : NSObject

+ (bool)configureSandbox;
+ (long long)consumeToken:(id)arg1;
+ (void)releaseToken:(long long)arg1;
+ (id)tokenForURL:(id)arg1;

@end
