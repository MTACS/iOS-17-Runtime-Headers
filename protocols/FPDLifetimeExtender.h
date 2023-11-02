
@protocol FPDLifetimeExtender <NSObject>

@required

- (NSString *)prettyDescription;
- (int)requestEffectivePID;

@optional

- (void)setTimeoutState:(unsigned long long)arg1;
- (double)timeout;
- (unsigned long long)timeoutState;

@end
