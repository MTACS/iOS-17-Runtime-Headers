
@interface PKSubcredentialPairingAnalyticsReporter : NSObject

+ (void)beginSubcredentialPairingSessionWithReferralSource:(unsigned long long)arg1 brandId:(id)arg2 page:(long long)arg3;
+ (void)endSubcredentialPairingSession;
+ (void)sendButtonPressWithButtonTag:(long long)arg1 page:(long long)arg2;
+ (void)sendOutcome:(bool)arg1 errorMessage:(id)arg2 page:(long long)arg3;
+ (void)sendViewDidAppearWithPage:(long long)arg1;

- (void).cxx_destruct;
- (id)init;

@end
