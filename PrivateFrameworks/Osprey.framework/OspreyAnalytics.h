
@interface OspreyAnalytics : NSObject

+ (id)reporter;

- (void)_addURL:(id)arg1 toContext:(id)arg2;
- (void)reportAbsintheMetrics:(id)arg1;
- (void)reportConnectionMetrics:(id)arg1;
- (void)reportError:(id)arg1 forURL:(id)arg2;
- (void)reportEvent:(id)arg1 payload:(id)arg2;
- (void)reportHttpStatus:(long long)arg1 grpcStatus:(long long)arg2 forURL:(id)arg3;

@end
