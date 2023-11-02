
@protocol _CPStartNetworkSearchFeedback <NSObject>

@required

- (NSData *)bodyData;
- (unsigned long long)compressedRequestSize;
- (int)endpoint;
- (NSString *)experimentId;
- (bool)getHeaders:(id*)arg1 forKey:(NSString *)arg2;
- (NSDictionary *)headers;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)input;
- (NSData *)jsonData;
- (int)lookupSelectionType;
- (unsigned long long)queryId;
- (unsigned long long)rawRequestSize;
- (int)searchType;
- (void)setBodyData:(NSData *)arg1;
- (void)setCompressedRequestSize:(unsigned long long)arg1;
- (void)setEndpoint:(int)arg1;
- (void)setExperimentId:(NSString *)arg1;
- (void)setHeaders:(NSDictionary *)arg1;
- (void)setHeaders:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)setInput:(NSString *)arg1;
- (void)setLookupSelectionType:(int)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setRawRequestSize:(unsigned long long)arg1;
- (void)setSearchType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTreatmentId:(NSString *)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setUrl:(NSString *)arg1;
- (void)setUuid:(NSString *)arg1;
- (unsigned long long)timestamp;
- (NSString *)treatmentId;
- (int)triggerEvent;
- (NSString *)url;
- (NSString *)uuid;
- (unsigned long long)whichTrigger;

@end
