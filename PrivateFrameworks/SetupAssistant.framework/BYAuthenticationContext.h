
@interface BYAuthenticationContext : NSObject <LAUIDelegate> {
    NSString * _secret;
    LAContext * _underlyingContext;
}

@property (nonatomic, retain) NSString *secret;
@property (nonatomic, retain) LAContext *underlyingContext;

+ (void)createContextWithSecret:(id)arg1 policy:(long long)arg2 options:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (id)initWithSecret:(id)arg1;
- (id)secret;
- (void)setSecret:(id)arg1;
- (void)setUnderlyingContext:(id)arg1;
- (id)underlyingContext;

@end
