
@interface ATXDefaultWidgetSuggesterClient : NSObject {
    NSXPCConnection * _xpcConnection;
}

+ (bool)shouldSuggestTVWithAppLaunchCount:(double)arg1 intentDonationCount:(double)arg2 upcomingMediaCount:(double)arg3;

- (void).cxx_destruct;
- (void)defaultWidgetSuggestionOfType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)logEventForDefaultWidgetSuggestionType:(long long)arg1 event:(long long)arg2;

@end
