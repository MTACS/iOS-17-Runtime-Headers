
@interface BMMomentsEngagementSuggestionEvent : BMEventBase <BMStoreData> {
    NSString * _clientIdentifier;
    NSArray * _fullBundleOrderedSet;
    bool  _hasRaw_timestamp;
    bool  _hasViewTotalSuggestionsCount;
    bool  _hasViewVisibleSuggestionsCount;
    bool  _hasViewVisibleTime;
    double  _raw_timestamp;
    NSString * _suggestionType;
    int  _type;
    NSString * _viewContainerName;
    int  _viewTotalSuggestionsCount;
    int  _viewVisibleSuggestionsCount;
    double  _viewVisibleTime;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *fullBundleOrderedSet;
@property (nonatomic) bool hasViewTotalSuggestionsCount;
@property (nonatomic) bool hasViewVisibleSuggestionsCount;
@property (nonatomic) bool hasViewVisibleTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *suggestionType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) NSString *viewContainerName;
@property (nonatomic, readonly) int viewTotalSuggestionsCount;
@property (nonatomic, readonly) int viewVisibleSuggestionsCount;
@property (nonatomic, readonly) double viewVisibleTime;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_fullBundleOrderedSetJSONArray;
- (id)clientIdentifier;
- (unsigned int)dataVersion;
- (id)description;
- (id)fullBundleOrderedSet;
- (bool)hasViewTotalSuggestionsCount;
- (bool)hasViewVisibleSuggestionsCount;
- (bool)hasViewVisibleTime;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithType:(int)arg1 timestamp:(id)arg2 fullBundleOrderedSet:(id)arg3 clientIdentifier:(id)arg4 viewContainerName:(id)arg5 viewVisibleTime:(id)arg6;
- (id)initWithType:(int)arg1 timestamp:(id)arg2 fullBundleOrderedSet:(id)arg3 clientIdentifier:(id)arg4 viewContainerName:(id)arg5 viewVisibleTime:(id)arg6 suggestionType:(id)arg7 viewVisibleSuggestionsCount:(id)arg8 viewTotalSuggestionsCount:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasViewTotalSuggestionsCount:(bool)arg1;
- (void)setHasViewVisibleSuggestionsCount:(bool)arg1;
- (void)setHasViewVisibleTime:(bool)arg1;
- (id)suggestionType;
- (id)timestamp;
- (int)type;
- (id)viewContainerName;
- (int)viewTotalSuggestionsCount;
- (int)viewVisibleSuggestionsCount;
- (double)viewVisibleTime;
- (void)writeTo:(id)arg1;

@end
