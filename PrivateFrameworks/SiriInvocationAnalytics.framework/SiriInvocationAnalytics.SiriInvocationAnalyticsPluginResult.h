
@interface SiriInvocationAnalytics.SiriInvocationAnalyticsPluginResult : NSObject {
    void bookmarkName;
    void bookmarkSaved;
    void conversationIds;
    void numFeaturizedConversations;
    void numFeaturizedVoiceTriggerEvents;
    void vtEventIds;
    void vtEventSummaries;
}

@property (nonatomic, copy) NSString *bookmarkName;
@property (nonatomic) bool bookmarkSaved;
@property (nonatomic, copy) NSArray *conversationIds;
@property (nonatomic) long long numFeaturizedConversations;
@property (nonatomic) long long numFeaturizedVoiceTriggerEvents;
@property (nonatomic, copy) NSArray *vtEventIds;
@property (nonatomic, copy) NSDictionary *vtEventSummaries;

+ (id)bookmarkNameKey;
+ (id)bookmarkSavedKey;
+ (id)conversationIdsKey;
+ (id)numConversationsKey;
+ (id)numVTEventsKey;
+ (id)vtEventIdsKey;
+ (id)vtEventSummariesKey;

- (void).cxx_destruct;
- (id)bookmarkName;
- (bool)bookmarkSaved;
- (id)conversationIds;
- (id)init;
- (long long)numFeaturizedConversations;
- (long long)numFeaturizedVoiceTriggerEvents;
- (void)setBookmarkName:(id)arg1;
- (void)setBookmarkSaved:(bool)arg1;
- (void)setConversationIds:(id)arg1;
- (void)setNumFeaturizedConversations:(long long)arg1;
- (void)setNumFeaturizedVoiceTriggerEvents:(long long)arg1;
- (void)setVtEventIds:(id)arg1;
- (void)setVtEventSummaries:(id)arg1;
- (id)vtEventIds;
- (id)vtEventSummaries;

@end
