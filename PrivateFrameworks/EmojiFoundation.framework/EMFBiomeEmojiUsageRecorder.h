
@interface EMFBiomeEmojiUsageRecorder : EMFDPRecorder {
    BMSource * _biomeStream;
    NSLocale * _locale;
    NSString * _localeIdentifier;
    NSNumber * _numberSearchQueriesRun;
    NSString * _replacementContext;
    NSNumber * _resultPosition;
    NSString * _searchQuery;
    unsigned long long  _usageSource;
    bool  _wasPositiveEngagement;
}

@property (retain) BMSource *biomeStream;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *localeIdentifier;
@property (nonatomic, readonly) NSNumber *numberSearchQueriesRun;
@property (nonatomic, readonly) NSString *replacementContext;
@property (nonatomic, readonly) NSNumber *resultPosition;
@property (nonatomic, readonly) NSString *searchQuery;
@property (nonatomic, readonly) unsigned long long usageSource;
@property (nonatomic, readonly) bool wasPositiveEngagement;

- (void).cxx_destruct;
- (id)_createEngagementEvent;
- (id)biomeStream;
- (id)delegate;
- (id)initWithEmoji:(id)arg1 usageSource:(unsigned long long)arg2 replacementContext:(id)arg3 searchQuery:(id)arg4 resultPosition:(id)arg5 numberSearchQueriesRun:(id)arg6 wasPositiveEngagement:(bool)arg7;
- (id)locale;
- (id)localeIdentifier;
- (id)numberSearchQueriesRun;
- (id)recordingKey;
- (id)replacementContext;
- (bool)report;
- (id)resultPosition;
- (id)searchQuery;
- (void)setBiomeStream:(id)arg1;
- (unsigned long long)usageSource;
- (bool)wasPositiveEngagement;

@end
