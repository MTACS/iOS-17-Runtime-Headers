
@interface PKShareRedemptionAnalyticsReporter : PKSharingAnalyticsReporter {
    long long  _accessPassType;
}

@property (nonatomic) long long accessPassType;

- (void)_sendEventForPage:(unsigned long long)arg1 button:(unsigned long long)arg2 eventType:(id)arg3 specifics:(id)arg4;
- (long long)accessPassType;
- (id)init;
- (id)initWithSessionToken:(id)arg1;
- (void)sendAuthenticationEventForSuccess:(bool)arg1 specifics:(id)arg2;
- (void)sendEvent:(id)arg1;
- (void)sendEventForPage:(unsigned long long)arg1 button:(unsigned long long)arg2 specifics:(id)arg3;
- (void)sendEventForPage:(unsigned long long)arg1 error:(id)arg2 specifics:(id)arg3;
- (void)sendEventForPage:(unsigned long long)arg1 specifics:(id)arg2;
- (void)setAccessPassType:(long long)arg1;

@end
