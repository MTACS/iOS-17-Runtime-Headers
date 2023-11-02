
@interface STUIStatusBarStyleRequest : UIStatusBarStyleRequest {
    long long  _resolvedStyle;
}

@property (nonatomic, readonly) long long resolvedStyle;

- (unsigned long long)hash;
- (id)initWithResolvedStyle:(long long)arg1 foregroundColor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)resolvedStyle;

@end
