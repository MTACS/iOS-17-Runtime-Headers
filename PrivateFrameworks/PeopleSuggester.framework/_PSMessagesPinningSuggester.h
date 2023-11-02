
@interface _PSMessagesPinningSuggester : NSObject {
    bool  _boostGroups;
    bool  _boostIndividualFavorites;
    NSString * _configVersion;
    NSXPCConnection * _connection;
    double  _intensityThreshold;
    double  _intensityWeight;
    _CDInteractionStore * _interactionStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _lookbackWindow;
    long long  _minimalInteractions;
    long long  _minimalUniqueDaysInteracted;
    bool  _outgoingOnly;
    NSDictionary * _psMessagesPinningConfig;
    double  _regularityThreshold;
    double  _regularityWeight;
}

@property (nonatomic) bool boostGroups;
@property (nonatomic) bool boostIndividualFavorites;
@property (nonatomic, retain) NSString *configVersion;
@property (nonatomic) double intensityThreshold;
@property (nonatomic) double intensityWeight;
@property (nonatomic, retain) _CDInteractionStore *interactionStore;
@property (nonatomic) double lookbackWindow;
@property (nonatomic) long long minimalInteractions;
@property (nonatomic) long long minimalUniqueDaysInteracted;
@property (nonatomic) bool outgoingOnly;
@property (retain) NSDictionary *psMessagesPinningConfig;
@property (nonatomic) double regularityThreshold;
@property (nonatomic) double regularityWeight;

- (void).cxx_destruct;
- (bool)boostGroups;
- (bool)boostIndividualFavorites;
- (id)chatGuidsBasedOnRegularityAndIntensityWithMaxSuggestions:(long long)arg1 referenceDate:(id)arg2 minimumDaysOfHistory:(long long)arg3 maxInteractionsForQuery:(long long)arg4;
- (id)chatGuidsForMessagesPinningWithMaxSuggestions:(long long)arg1;
- (id)chatGuidsForPinningHeuristicApproachWithMaxSuggestions:(long long)arg1 forReferenceDate:(id)arg2;
- (id)configVersion;
- (void)dealloc;
- (id)getPayloadOfFeedback:(id)arg1;
- (id)init;
- (id)initWithRegularityThreshold:(double)arg1 intensityThreshold:(double)arg2 regularityWeight:(double)arg3 intensityWeight:(double)arg4 minimalInteration:(long long)arg5 minimalUniqueDaysInteracted:(long long)arg6 interactionStore:(id)arg7 lookbackWindow:(double)arg8;
- (id)initWithRegularityThreshold:(double)arg1 intensityThreshold:(double)arg2 regularityWeight:(double)arg3 intensityWeight:(double)arg4 minimalInteration:(long long)arg5 minimalUniqueDaysInteracted:(long long)arg6 interactionStore:(id)arg7 lookbackWindow:(double)arg8 outgoingOnly:(bool)arg9;
- (double)intensityThreshold;
- (double)intensityWeight;
- (id)interactionStore;
- (bool)loadPSConfig:(id)arg1;
- (double)lookbackWindow;
- (long long)minimalInteractions;
- (long long)minimalUniqueDaysInteracted;
- (bool)outgoingOnly;
- (void)provideMessagesPinningFeedback:(id)arg1;
- (id)psMessagesPinningConfig;
- (double)regularityThreshold;
- (double)regularityWeight;
- (void)setBoostGroups:(bool)arg1;
- (void)setBoostIndividualFavorites:(bool)arg1;
- (void)setConfigVersion:(id)arg1;
- (void)setIntensityThreshold:(double)arg1;
- (void)setIntensityWeight:(double)arg1;
- (void)setInteractionStore:(id)arg1;
- (void)setLookbackWindow:(double)arg1;
- (void)setMinimalInteractions:(long long)arg1;
- (void)setMinimalUniqueDaysInteracted:(long long)arg1;
- (void)setOutgoingOnly:(bool)arg1;
- (void)setPsMessagesPinningConfig:(id)arg1;
- (void)setRegularityThreshold:(double)arg1;
- (void)setRegularityWeight:(double)arg1;
- (void)submitMessagesPinningFeedback:(id)arg1;
- (void)updateModelProperties:(id)arg1;

@end
