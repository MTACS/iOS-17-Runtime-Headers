
@interface NSSNewsAnalyticsEventAnnotator : NSObject {
    <NSSNewsAnalyticsSessionManager> * _sessionManager;
    <NSSNewsAnalyticsUserIDProvider> * _userIDProvider;
}

@property (nonatomic, readonly) <NSSNewsAnalyticsSessionManager> *sessionManager;
@property (nonatomic, readonly) <NSSNewsAnalyticsUserIDProvider> *userIDProvider;

- (void).cxx_destruct;
- (void)annotateEvent:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)init;
- (id)initWithSessionManager:(id)arg1 userIDProvider:(id)arg2;
- (id)sessionManager;
- (id)userIDProvider;

@end
