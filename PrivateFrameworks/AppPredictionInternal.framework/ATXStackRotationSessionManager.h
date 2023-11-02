
@interface ATXStackRotationSessionManager : NSObject <NSSecureCoding> {
    NSMutableArray * _completedSessions;
    NSMutableSet * _nPlusOneSuggestionUUIDsWithFirstRotation;
    NSMutableArray * _recentHomeScreenCachedSuggestions;
    NSMutableDictionary * _stackIdToStackRotationSessions;
}

@property (nonatomic, readonly) NSMutableArray *completedSessions;
@property (nonatomic, readonly) NSMutableSet *nPlusOneSuggestionUUIDsWithFirstRotation;
@property (nonatomic, readonly) NSMutableArray *recentHomeScreenCachedSuggestions;
@property (nonatomic, readonly) NSMutableDictionary *stackIdToStackRotationSessions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_tryEndStackRotationSessionWithStackId:(id)arg1 homeScreenEvent:(id)arg2;
- (void)_tryPruneSessionsOverMaxLimit;
- (void)_tryStartStackRotationSessionWithStackId:(id)arg1 homeScreenEvent:(id)arg2;
- (void)_tryUpdateNPlusOneStatusForSession:(id)arg1 stackId:(id)arg2;
- (void)_tryUpdateStackRotationSessionWithSystemSuggestLayout:(id)arg1;
- (id)completedSessions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStackIdToStackRotationSessions:(id)arg1 completedSessions:(id)arg2 recentHomeScreenCachedSuggestions:(id)arg3 nPlusOneSuggestionUUIDsWithFirstRotation:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXStackRotationSessionManager:(id)arg1;
- (id)nPlusOneSuggestionUUIDsWithFirstRotation;
- (id)recentHomeScreenCachedSuggestions;
- (id)removeAllAndReturnCompletedSystemSuggestSessions;
- (id)removeAndReturnCompletedSessions;
- (id)stackIdToStackRotationSessions;
- (void)updateWithBlendingUICacheUpdate:(id)arg1;
- (void)updateWithUIEvent:(id)arg1;
- (id)uuidsOfNPlusOneSuggestionsFromCachedSuggestions:(id)arg1;

@end
