
@interface ACFLocalAuthenticationContext : NSObject <ACFLocalAuthenticationContextProtocol> {
    LAContext * _context;
    NSString * _localizedFallbackTitle;
    NSString * _localizedReason;
}

@property (nonatomic, retain) LAContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedFallbackTitle;
@property (nonatomic, copy) NSString *localizedReason;
@property (readonly) Class superclass;

- (bool)canEvaluatePolicy:(long long)arg1 error:(id*)arg2;
- (id)context;
- (void)dealloc;
- (void)evaluatePolicy:(long long)arg1 completion:(id /* block */)arg2;
- (id)localizedFallbackTitle;
- (id)localizedReason;
- (void)reset;
- (void)setContext:(id)arg1;
- (void)setLocalizedFallbackTitle:(id)arg1;
- (void)setLocalizedReason:(id)arg1;

@end
