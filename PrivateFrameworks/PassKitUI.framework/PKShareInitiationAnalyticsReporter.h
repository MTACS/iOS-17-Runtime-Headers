
@interface PKShareInitiationAnalyticsReporter : PKSharingAnalyticsReporter {
    PKPass * _pass;
}

- (void).cxx_destruct;
- (id)_initWithPass:(id)arg1 sessionToken:(id)arg2 reuseExistingSession:(bool)arg3;
- (void)_sendEventForPage:(unsigned long long)arg1 button:(unsigned long long)arg2 eventType:(id)arg3 specifics:(id)arg4;
- (id)initWithPass:(id)arg1;
- (id)initWithPass:(id)arg1 reuseExistingSession:(bool)arg2;
- (id)initWithPass:(id)arg1 sessionToken:(id)arg2;
- (void)sendAuthenticationEventForSuccess:(bool)arg1 specifics:(id)arg2;
- (void)sendDoneEventWithDidShare:(bool)arg1 error:(id)arg2 specifics:(id)arg3;
- (void)sendEvent:(id)arg1;
- (void)sendEventForPage:(unsigned long long)arg1 button:(unsigned long long)arg2 specifics:(id)arg3;
- (void)sendEventForPage:(unsigned long long)arg1 specifics:(id)arg2;

@end
