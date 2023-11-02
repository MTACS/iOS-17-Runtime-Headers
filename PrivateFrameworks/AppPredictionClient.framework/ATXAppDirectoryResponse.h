
@interface ATXAppDirectoryResponse : NSObject {
    NSMutableDictionary * _bundleIdToSuggestionMapping;
    NSError * _error;
    NSArray * _predictedApps;
    NSArray * _recentApps;
    ATXResponse * _response;
    ATXSuggestionLayout * _suggestionLayout;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *predictedApps;
@property (nonatomic, readonly) NSArray *recentApps;
@property (nonatomic, readonly) NSArray *recentAppsVisible;
@property (nonatomic, readonly) ATXResponse *response;
@property (nonatomic, readonly) ATXSuggestionLayout *suggestionLayout;

- (void).cxx_destruct;
- (id)error;
- (id)initWithResponse:(id)arg1 recentApps:(id)arg2 otherAppsOnScreen:(id)arg3 numAppsToPredict:(unsigned long long)arg4 error:(id)arg5;
- (id)initWithSuggestionLayout:(id)arg1 recentApps:(id)arg2 otherAppsOnScreen:(id)arg3 numAppsToPredict:(unsigned long long)arg4 error:(id)arg5;
- (id)initWithoutDedupingForRecents:(id)arg1 predictedApps:(id)arg2 error:(id)arg3;
- (id)predictedApps;
- (id)proactiveSuggestionForBundleId:(id)arg1;
- (id)recentApps;
- (id)recentAppsVisible;
- (id)response;
- (id)suggestionLayout;
- (id)uuidForBundleId:(id)arg1;
- (id)uuidsForBundleIds:(id)arg1;

@end
