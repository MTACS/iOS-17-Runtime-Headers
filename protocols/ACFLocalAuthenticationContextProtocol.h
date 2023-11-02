
@protocol ACFLocalAuthenticationContextProtocol <NSObject>

@required

- (bool)canEvaluatePolicy:(long long)arg1 error:(id*)arg2;
- (void)evaluatePolicy:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSString *)localizedFallbackTitle;
- (NSString *)localizedReason;
- (void)reset;
- (void)setLocalizedFallbackTitle:(NSString *)arg1;
- (void)setLocalizedReason:(NSString *)arg1;

@end
