
@interface BMEmojiEngagement : BMEventBase <BMStoreData> {
    NSString * _emoji;
    NSString * _finalSearchQuery;
    bool  _hasNumberSearchQueriesRun;
    bool  _hasResultPosition;
    bool  _hasWasPositiveEngagement;
    int  _inputMode;
    NSString * _localeIdentifier;
    int  _numberSearchQueriesRun;
    NSString * _replacementContext;
    int  _resultPosition;
    bool  _wasPositiveEngagement;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *emoji;
@property (nonatomic, readonly) NSString *finalSearchQuery;
@property (nonatomic) bool hasNumberSearchQueriesRun;
@property (nonatomic) bool hasResultPosition;
@property (nonatomic) bool hasWasPositiveEngagement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int inputMode;
@property (nonatomic, readonly) NSString *localeIdentifier;
@property (nonatomic, readonly) int numberSearchQueriesRun;
@property (nonatomic, readonly) NSString *replacementContext;
@property (nonatomic, readonly) int resultPosition;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wasPositiveEngagement;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)emoji;
- (id)finalSearchQuery;
- (bool)hasNumberSearchQueriesRun;
- (bool)hasResultPosition;
- (bool)hasWasPositiveEngagement;
- (id)initByReadFrom:(id)arg1;
- (id)initWithEmoji:(id)arg1 wasPositiveEngagement:(id)arg2 localeIdentifier:(id)arg3 inputMode:(int)arg4 replacementContext:(id)arg5 resultPosition:(id)arg6 numberSearchQueriesRun:(id)arg7 finalSearchQuery:(id)arg8;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (int)inputMode;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)localeIdentifier;
- (int)numberSearchQueriesRun;
- (id)replacementContext;
- (int)resultPosition;
- (id)serialize;
- (void)setHasNumberSearchQueriesRun:(bool)arg1;
- (void)setHasResultPosition:(bool)arg1;
- (void)setHasWasPositiveEngagement:(bool)arg1;
- (bool)wasPositiveEngagement;
- (void)writeTo:(id)arg1;

@end
