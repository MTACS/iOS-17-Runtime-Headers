
@interface SASyncServerSyncDataResponse : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *assistantId;
@property (nonatomic) long long batchNumber;
@property (nonatomic, copy) NSArray *dataBatch;
@property (nonatomic) bool lastBatch;
@property (nonatomic, copy) NSString *responseCode;
@property (nonatomic, copy) NSString *serverGeneration;
@property (nonatomic, copy) NSString *syncType;

- (id)assistantId;
- (long long)batchNumber;
- (id)dataBatch;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)lastBatch;
- (bool)requiresResponse;
- (id)responseCode;
- (id)serverGeneration;
- (void)setAssistantId:(id)arg1;
- (void)setBatchNumber:(long long)arg1;
- (void)setDataBatch:(id)arg1;
- (void)setLastBatch:(bool)arg1;
- (void)setResponseCode:(id)arg1;
- (void)setServerGeneration:(id)arg1;
- (void)setSyncType:(id)arg1;
- (id)syncType;

@end
