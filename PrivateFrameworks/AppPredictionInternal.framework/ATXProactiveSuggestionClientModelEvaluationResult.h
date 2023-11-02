
@interface ATXProactiveSuggestionClientModelEvaluationResult : NSObject {
    NSSet * _dockedApps;
    unsigned long long  _engagedInTop1;
    unsigned long long  _engagedInTop2;
    unsigned long long  _engagedInTop4;
    NSMutableDictionary * _engagedInTop4PerCandidate;
    unsigned long long  _engagedInTop8;
    NSMutableDictionary * _engagedInTop8PerCandidate;
    NSMutableDictionary * _engagedPerCandidate;
    long long  _executableType;
    unsigned long long  _numberOfSessions;
    unsigned long long  _numberOfSessionsWithPredictions;
    float  _reciprocalRank;
    bool  _removeDockedApps;
    unsigned long long  _sessionType;
    NSMutableDictionary * _shownInTop8PerCandidate;
}

@property (nonatomic) unsigned long long engagedInTop1;
@property (nonatomic) unsigned long long engagedInTop2;
@property (nonatomic) unsigned long long engagedInTop4;
@property (nonatomic, retain) NSMutableDictionary *engagedInTop4PerCandidate;
@property (nonatomic) unsigned long long engagedInTop8;
@property (nonatomic, retain) NSMutableDictionary *engagedInTop8PerCandidate;
@property (nonatomic, retain) NSMutableDictionary *engagedPerCandidate;
@property (nonatomic, readonly) long long executableType;
@property (nonatomic) unsigned long long numberOfSessions;
@property (nonatomic) unsigned long long numberOfSessionsWithPredictions;
@property (nonatomic) float reciprocalRank;
@property (nonatomic, readonly) bool removeDockedApps;
@property (nonatomic, readonly) unsigned long long sessionType;
@property (nonatomic, retain) NSMutableDictionary *shownInTop8PerCandidate;

+ (long long)rankOfEngagedSuggestion:(id)arg1 inSuggestions:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)engagedInTop1;
- (unsigned long long)engagedInTop2;
- (unsigned long long)engagedInTop4;
- (id)engagedInTop4PerCandidate;
- (unsigned long long)engagedInTop8;
- (id)engagedInTop8PerCandidate;
- (id)engagedPerCandidate;
- (long long)executableType;
- (id)filteredSuggestions:(id)arg1 removeDockedApps:(bool)arg2;
- (id)initWithSessionType:(unsigned long long)arg1 executableType:(long long)arg2 removeDockedApps:(bool)arg3;
- (unsigned long long)numberOfSessions;
- (unsigned long long)numberOfSessionsWithPredictions;
- (float)reciprocalRank;
- (bool)removeDockedApps;
- (unsigned long long)sessionType;
- (void)setEngagedInTop1:(unsigned long long)arg1;
- (void)setEngagedInTop2:(unsigned long long)arg1;
- (void)setEngagedInTop4:(unsigned long long)arg1;
- (void)setEngagedInTop4PerCandidate:(id)arg1;
- (void)setEngagedInTop8:(unsigned long long)arg1;
- (void)setEngagedInTop8PerCandidate:(id)arg1;
- (void)setEngagedPerCandidate:(id)arg1;
- (void)setNumberOfSessions:(unsigned long long)arg1;
- (void)setNumberOfSessionsWithPredictions:(unsigned long long)arg1;
- (void)setReciprocalRank:(float)arg1;
- (void)setShownInTop8PerCandidate:(id)arg1;
- (id)shownInTop8PerCandidate;
- (void)updateCountsForSessionsWithShownSuggestions:(id)arg1 engagedSuggestions:(id)arg2 rejectedSuggestions:(id)arg3;

@end
