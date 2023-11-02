
@interface PCRuntimeParameters : NSObject

+ (long long)contextPrefetchLimit;
+ (void)rateLimitRequests:(float)arg1;
+ (void)rateLimitRequestsInFeed:(float)arg1 inArticle:(float)arg2 betweenArticle:(float)arg3 videoInArticle:(float)arg4 nativeInFeed:(float)arg5 nativeInArticle:(float)arg6;
+ (void)setContextPrefetchLimit:(long long)arg1;

@end
