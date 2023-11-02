
@interface SearchUISearchInAppHandler : SearchUIOpenUserActivityHandler

- (void)getUserActivityForCommand:(id)arg1 environment:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;

@end
