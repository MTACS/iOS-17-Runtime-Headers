
@protocol _CPStartLocalSearchFeedback <NSObject>

@required

- (_CPPerformEntityQueryCommandForFeedback *)entityQueryCommand;
- (_CPIndexStateForFeedback *)indexState;
- (int)indexType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)input;
- (NSData *)jsonData;
- (NSString *)originatingApp;
- (unsigned long long)queryId;
- (int)searchType;
- (void)setEntityQueryCommand:(_CPPerformEntityQueryCommandForFeedback *)arg1;
- (void)setIndexState:(_CPIndexStateForFeedback *)arg1;
- (void)setIndexType:(int)arg1;
- (void)setInput:(NSString *)arg1;
- (void)setOriginatingApp:(NSString *)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setSearchType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setUuid:(NSString *)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (NSString *)uuid;

@end
