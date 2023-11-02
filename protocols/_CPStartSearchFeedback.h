
@protocol _CPStartSearchFeedback <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)input;
- (NSData *)jsonData;
- (unsigned long long)queryId;
- (int)searchType;
- (void)setInput:(NSString *)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setSearchType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setUuid:(NSString *)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (NSString *)uuid;

@end
