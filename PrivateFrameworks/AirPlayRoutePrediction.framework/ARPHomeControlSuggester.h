
@interface ARPHomeControlSuggester : NSObject {
    NSString * _correlationsSessionFile;
    double  _highScoreThresholdForMicroLocationSuggestionMerge;
    double  _highScoreThresholdForTimeBasedSuggestionMerge;
    NSArray * _homeKitEventsSortedByStartDate;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    double  _lowScoreThresholdForMicroLocationSuggestionMerge;
    double  _lowScoreThresholdForTimeBasedSuggestionMerge;
    double  _scoreSceneBoost;
    double  _scoreThresholdForMicrolocationSuggestionsConsidered;
}

@property (nonatomic, copy) NSString *correlationsSessionFile;
@property (nonatomic) double highScoreThresholdForMicroLocationSuggestionMerge;
@property (nonatomic) double highScoreThresholdForTimeBasedSuggestionMerge;
@property (nonatomic, retain) NSArray *homeKitEventsSortedByStartDate;
@property (nonatomic, readonly) <_DKKnowledgeQuerying> *knowledgeStore;
@property (nonatomic) double lowScoreThresholdForMicroLocationSuggestionMerge;
@property (nonatomic) double lowScoreThresholdForTimeBasedSuggestionMerge;
@property (nonatomic) double scoreSceneBoost;
@property (nonatomic) double scoreThresholdForMicrolocationSuggestionsConsidered;

+ (id)defaultCorrelationsSessionFile;
+ (id)suggester;

- (void).cxx_destruct;
- (id)correlationsSessionFile;
- (id)frequencybasedSuggestionsWitMaxSuggestions:(unsigned long long)arg1;
- (id)frequencybasedSuggestionsWitMaxSuggestions:(unsigned long long)arg1 events:(id)arg2;
- (id)frequencybasedSuggestionsWitMaxSuggestions:(unsigned long long)arg1 events:(id)arg2 useScenes:(bool)arg3;
- (double)highScoreThresholdForMicroLocationSuggestionMerge;
- (double)highScoreThresholdForTimeBasedSuggestionMerge;
- (id)homeKitEventsSortedByStartDate;
- (id)homeKitEventsWithLookbackDays:(long long)arg1;
- (id)initWithScoreThresholdForMicrolocationSuggestionsConsidered:(double)arg1 highScoreThresholdForMicroLocationSuggestionMerge:(double)arg2 lowScoreThresholdForMicroLocationSuggestionMerge:(double)arg3 highScoreThresholdForTimeBasedSuggestionMerge:(double)arg4 lowScoreThresholdForTimeBasedSuggestionMerge:(double)arg5;
- (id)knowledgeStore;
- (double)lowScoreThresholdForMicroLocationSuggestionMerge;
- (double)lowScoreThresholdForTimeBasedSuggestionMerge;
- (id)microlocationBasedsuggestionsWithMaxSuggestions:(unsigned long long)arg1 referenceDate:(id)arg2 correlationsFile:(id)arg3;
- (id)mostRecentHomeKitEvent;
- (id)nextActionBasedsuggestionsWithMaxSuggestions:(unsigned long long)arg1 referenceDate:(id)arg2 correlationsFile:(id)arg3;
- (double)scoreSceneBoost;
- (double)scoreThresholdForMicrolocationSuggestionsConsidered;
- (void)setCorrelationsSessionFile:(id)arg1;
- (void)setHighScoreThresholdForMicroLocationSuggestionMerge:(double)arg1;
- (void)setHighScoreThresholdForTimeBasedSuggestionMerge:(double)arg1;
- (void)setHomeKitEventsSortedByStartDate:(id)arg1;
- (void)setLowScoreThresholdForMicroLocationSuggestionMerge:(double)arg1;
- (void)setLowScoreThresholdForTimeBasedSuggestionMerge:(double)arg1;
- (void)setScoreSceneBoost:(double)arg1;
- (void)setScoreThresholdForMicrolocationSuggestionsConsidered:(double)arg1;
- (id)suggestionsWithMaxSuggestions:(unsigned long long)arg1;
- (id)suggestionsWithMaxSuggestions:(unsigned long long)arg1 referenceDate:(id)arg2 correlationsFile:(id)arg3;
- (id)timeBasedSuggestionsWithMaxSuggestions:(unsigned long long)arg1 referenceDate:(id)arg2;
- (id)timeBasedSuggestionsWithMaxSuggestions:(unsigned long long)arg1 referenceDate:(id)arg2 fallBackToFrequency:(bool)arg3;
- (id)timeBucketFrequencyBasedSuggestionsWithMaxSuggestions:(unsigned long long)arg1 events:(id)arg2 referenceDate:(id)arg3;

@end
