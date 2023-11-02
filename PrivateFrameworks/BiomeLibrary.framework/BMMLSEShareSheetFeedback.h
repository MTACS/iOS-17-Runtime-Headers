
@interface BMMLSEShareSheetFeedback : BMEventBase <BMStoreData> {
    bool  _airdropPeopleSuggestionShown;
    NSString * _engagementIdentifier;
    int  _engagementType;
    bool  _hasAirdropPeopleSuggestionShown;
    bool  _hasVisibleAppSuggestionCount;
    bool  _hasVisiblePeopleSuggestionCount;
    NSString * _identifier;
    int  _inferenceSource;
    NSArray * _timeouts;
    BMMLSEShareSheetFeedbackTrialIdentifier * _trialIdentifier;
    unsigned int  _visibleAppSuggestionCount;
    unsigned int  _visiblePeopleSuggestionCount;
}

@property (nonatomic, readonly) bool airdropPeopleSuggestionShown;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *engagementIdentifier;
@property (nonatomic, readonly) int engagementType;
@property (nonatomic) bool hasAirdropPeopleSuggestionShown;
@property (nonatomic) bool hasVisibleAppSuggestionCount;
@property (nonatomic) bool hasVisiblePeopleSuggestionCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) int inferenceSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *timeouts;
@property (nonatomic, readonly) BMMLSEShareSheetFeedbackTrialIdentifier *trialIdentifier;
@property (nonatomic, readonly) unsigned int visibleAppSuggestionCount;
@property (nonatomic, readonly) unsigned int visiblePeopleSuggestionCount;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_timeoutsJSONArray;
- (bool)airdropPeopleSuggestionShown;
- (unsigned int)dataVersion;
- (id)description;
- (id)engagementIdentifier;
- (int)engagementType;
- (bool)hasAirdropPeopleSuggestionShown;
- (bool)hasVisibleAppSuggestionCount;
- (bool)hasVisiblePeopleSuggestionCount;
- (id)identifier;
- (int)inferenceSource;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 engagementType:(int)arg2 engagementIdentifier:(id)arg3 visiblePeopleSuggestionCount:(id)arg4 visibleAppSuggestionCount:(id)arg5 airdropPeopleSuggestionShown:(id)arg6 inferenceSource:(int)arg7;
- (id)initWithIdentifier:(id)arg1 engagementType:(int)arg2 engagementIdentifier:(id)arg3 visiblePeopleSuggestionCount:(id)arg4 visibleAppSuggestionCount:(id)arg5 airdropPeopleSuggestionShown:(id)arg6 inferenceSource:(int)arg7 trialIdentifier:(id)arg8;
- (id)initWithIdentifier:(id)arg1 engagementType:(int)arg2 engagementIdentifier:(id)arg3 visiblePeopleSuggestionCount:(id)arg4 visibleAppSuggestionCount:(id)arg5 airdropPeopleSuggestionShown:(id)arg6 inferenceSource:(int)arg7 trialIdentifier:(id)arg8 timeouts:(id)arg9;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasAirdropPeopleSuggestionShown:(bool)arg1;
- (void)setHasVisibleAppSuggestionCount:(bool)arg1;
- (void)setHasVisiblePeopleSuggestionCount:(bool)arg1;
- (id)timeouts;
- (id)trialIdentifier;
- (unsigned int)visibleAppSuggestionCount;
- (unsigned int)visiblePeopleSuggestionCount;
- (void)writeTo:(id)arg1;

@end
