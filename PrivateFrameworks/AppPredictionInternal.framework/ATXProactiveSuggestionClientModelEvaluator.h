
@interface ATXProactiveSuggestionClientModelEvaluator : NSObject {
    <ATXProactiveSuggestionClientModelEvaluatorPublishers> * _publishers;
}

@property (nonatomic, readonly) <ATXProactiveSuggestionClientModelEvaluatorPublishers> *publishers;

+ (id)eventAndRecentCacheUpdatePublisher:(id)arg1;
+ (id)resultFromResults:(id)arg1 withSessionType:(unsigned long long)arg2 executableType:(long long)arg3 removeDockedApps:(bool)arg4;

- (void).cxx_destruct;
- (id)evaluationResultsForClientModelName:(id)arg1;
- (id)init;
- (id)initWithPublishers:(id)arg1;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2;
- (id)publishers;
- (id)resultForClientModelName:(id)arg1 suggestionExecutableType:(long long)arg2 sessionType:(unsigned long long)arg3 removeDockedApps:(bool)arg4;
- (id)shadowResultForSuggestionExecutableType:(long long)arg1 clientModelName:(id)arg2 removeDockedApps:(bool)arg3;
- (id)uiPublisherWithDeduplicatedEngagements;
- (id)uiResultForSuggestionExecutableType:(long long)arg1 clientModelName:(id)arg2 removeDockedApps:(bool)arg3;

@end
