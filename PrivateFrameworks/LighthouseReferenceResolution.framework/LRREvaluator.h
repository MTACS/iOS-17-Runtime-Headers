
@interface LRREvaluator : NSObject {
    <LRREvaluatorProtocol> * _evaluatorProtocol;
    LRRFeatureStoreFiltering * _featureStoreFilteringManager;
    bool  _isAppleConnectInstalled;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _operatingSystemVersion;
    bool  _shouldStop;
    NSString * _siriPreferenceLanguageCode;
    bool  _siriPreferenceSiriVocabularyEnabled;
    NSDictionary * allMatchingSpans;
    LRRNluResponseComparator * comparator;
    NSDateFormatter * formatter;
    LRRMDComparator * mdComparator;
    LRRMRComparator * mrComparator;
    NSDictionary * origMDRequests;
    NSDictionary * origMDResponses;
    NSDictionary * origMRRequests;
    NSDictionary * origMRResponses;
    NSDictionary * originalResponses;
    NSDictionary * repetitionCountsByUtteranceAndWeek;
    NSDictionary * requestProtos;
    FeatureStoreNluRequestReader * requestReader;
    FeatureStoreNluResponseReader * responseReader;
    FeatureStoreSpanMatchReader * spanMatchReader;
    NSDictionary * userIsHabitualUserByWeek;
}

@property (nonatomic, readonly) <LRREvaluatorProtocol> *evaluatorProtocol;
@property (retain) LRRFeatureStoreFiltering *featureStoreFilteringManager;
@property (nonatomic) bool isAppleConnectInstalled;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;
@property (nonatomic) bool shouldStop;
@property (nonatomic, readonly) NSString *siriPreferenceLanguageCode;
@property (nonatomic) bool siriPreferenceSiriVocabularyEnabled;

- (void).cxx_destruct;
- (id)compareReplayResuts:(id)arg1 replayedRequestId:(id)arg2;
- (void)emitSampleEvaluationResult:(id)arg1 taskStarted:(id)arg2;
- (void)emitTaskEvaluationResult:(id)arg1 dateStart:(id)arg2 taskStartTs:(double)arg3;
- (bool)evaluate;
- (bool)evaluateWithCandidateModel:(id)arg1 siriAssetDirPath:(id)arg2;
- (id)evaluatorProtocol;
- (id)featureStoreFilteringManager;
- (id)getCalendarWeekNumberFromDate:(id)arg1;
- (id)getRepetitionCountByUtteranceAndWeekFromRequestProtos:(id)arg1;
- (id)getUserIsHabitualUserFromRequestProtos:(id)arg1;
- (id)getWeekdayNumberFromDate:(id)arg1;
- (id)initWithProtocol:(id)arg1 featureStoreFiltering:(id)arg2;
- (bool)isAppleConnectInstalled;
- (bool)isValidRequestId:(id)arg1;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (id)replayOneSample:(id)arg1 taskStarted:(id)arg2 siriAssetDirPath:(id)arg3 emitMessage:(bool)arg4;
- (void)setFeatureStoreFilteringManager:(id)arg1;
- (void)setIsAppleConnectInstalled:(bool)arg1;
- (void)setShouldStop:(bool)arg1;
- (void)setSiriPreferenceSiriVocabularyEnabled:(bool)arg1;
- (bool)shouldStop;
- (id)siriPreferenceLanguageCode;
- (bool)siriPreferenceSiriVocabularyEnabled;
- (void)snapshotInteractionsFromFeatureStore;
- (void)snapshotInteractionsFromFeatureStoreForIds:(id)arg1;

@end
