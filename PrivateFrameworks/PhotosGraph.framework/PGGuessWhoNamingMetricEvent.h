
@interface PGGuessWhoNamingMetricEvent : PGAbstractMetricEvent {
    bool  _hasMeNodeAndMeContact;
    unsigned long long  _librarySize;
    PGManager * _manager;
    unsigned long long  _numberOfNamedPeople;
    unsigned long long  _numberOfPeople;
    unsigned long long  _numberOfPeopleFavorited;
    unsigned long long  _numberOfPeopleToName;
    double  _numberOfPeopleWithAContactSuggestion;
    double  _numberOfPeopleWithAHighConfidenceContactSuggestion;
    NSDictionary * _payload;
    double  _proportionOfNamedPeople;
    double  _recallContactSuggestion;
    double  _recallHighConfidenceContactSuggestion;
}

@property (nonatomic) bool hasMeNodeAndMeContact;
@property (nonatomic) unsigned long long librarySize;
@property (nonatomic) unsigned long long numberOfNamedPeople;
@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) unsigned long long numberOfPeopleFavorited;
@property (nonatomic) unsigned long long numberOfPeopleToName;
@property (nonatomic) double numberOfPeopleWithAContactSuggestion;
@property (nonatomic) double numberOfPeopleWithAHighConfidenceContactSuggestion;
@property (nonatomic) double proportionOfNamedPeople;
@property (nonatomic) double recallContactSuggestion;
@property (nonatomic) double recallHighConfidenceContactSuggestion;

- (void).cxx_destruct;
- (void)gatherMetricsWithProgressBlock:(id /* block */)arg1;
- (bool)hasMeNodeAndMeContact;
- (id)identifier;
- (id)initWithGraphManager:(id)arg1;
- (unsigned long long)librarySize;
- (unsigned long long)numberOfNamedPeople;
- (unsigned long long)numberOfPeople;
- (unsigned long long)numberOfPeopleFavorited;
- (unsigned long long)numberOfPeopleToName;
- (double)numberOfPeopleWithAContactSuggestion;
- (double)numberOfPeopleWithAHighConfidenceContactSuggestion;
- (id)payload;
- (double)proportionOfNamedPeople;
- (double)recallContactSuggestion;
- (double)recallHighConfidenceContactSuggestion;
- (void)setHasMeNodeAndMeContact:(bool)arg1;
- (void)setLibrarySize:(unsigned long long)arg1;
- (void)setNumberOfNamedPeople:(unsigned long long)arg1;
- (void)setNumberOfPeople:(unsigned long long)arg1;
- (void)setNumberOfPeopleFavorited:(unsigned long long)arg1;
- (void)setNumberOfPeopleToName:(unsigned long long)arg1;
- (void)setNumberOfPeopleWithAContactSuggestion:(double)arg1;
- (void)setNumberOfPeopleWithAHighConfidenceContactSuggestion:(double)arg1;
- (void)setProportionOfNamedPeople:(double)arg1;
- (void)setRecallContactSuggestion:(double)arg1;
- (void)setRecallHighConfidenceContactSuggestion:(double)arg1;

@end
